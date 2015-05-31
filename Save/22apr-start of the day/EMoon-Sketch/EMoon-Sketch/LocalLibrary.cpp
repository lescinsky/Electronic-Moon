//
// LocalLibrary.cpp 
// Library C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		EMoon-Sketch
//
// Created by 	Gordon Lescinsky, 5/02/2015 4:26 pm
// 				Gordon Lescinsky
//	
// Copyright 	© Gordon Lescinsky, 2015
// Licence 		<#license#>
//
// See 			LocalLibrary.cpp.h and ReadMe.txt for references
//


#include "LocalLibrary.h"

// =============== GLOBALS ====================

// the runtime data storage
activePrimitiveLightshowList* APL_list = new activePrimitiveLightshowList();
activeSymbolicLightshowList* mix_list = new activeSymbolicLightshowList();
activePhysicalStripList* APS_list = new activePhysicalStripList();


// the global variable for counting frames
eMoonFrame currentFrame;




//------APL LIST---------

// The APL list is a linked list that uses an array in order to avoid allocating and freeing memory.
// The APL list contains all the lightshow that are "active".
// The APL list updates all its lightshows every frame.
// This means that the APL list defines the common algorithm used for all light shows.
// The APL list is responsible for catching the end of the lightshow and signalling the lightshow's parent'
//
// CONTRACTS:
//
// ALL Classes:
// There must only be one APL list for each Electronic Moon system.
//
// Symbolic Lightshow:
//    must use APL List's addLightshow() method to start a new Lightshow
//    must offer a activateNextLightshow() method to respond to the end of a Lightshow

//All Basis Functions:
//must have the following signature:
//    must return a power of 2
//    must compute the value of a 2D basis function that controls smoothness, as per the mathematical model
//
//All Colour Functions:
//must have the following signature:
//must return a colour value as per the mathematical model

//------- APL List ---------

activePrimitiveLightshowList::activePrimitiveLightshowList() {
    
    // initialise the freeCellStack
    //  !!!! the size of arrays should be set by a constant
    for (int i=0; i < EMOON_LISTLENGTH; i++) {
        this->freeCellStack[i] = i;
    }
    this->firstLink = NULL;
    this->lastLink = NULL;
    this->firstFree = 0;
    
}

void activePrimitiveLightshowList::addLightshow(int parentIndex, eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update) {
    
    //     this should be changed to a simpler call that guarantees a clean and accurate new record is created
    activePrimitiveLightshow* lightshow;
    
    if (parentIndex > 0) {
        eMoonFrame framesRemaining = this->lightshowTable[parentIndex].startFrame + this->lightshowTable[parentIndex].duration - currentFrame;
        if (duration >  framesRemaining) duration = framesRemaining;
    }
    
    if (firstFree < EMOON_LISTLENGTH) {
        lightshow = &(this->lightshowTable[freeCellStack[firstFree]]);
        lightshow->startFrame = currentFrame;
        lightshow->duration = duration;
        lightshow->strip = strip;
        lightshow->parent = parentIndex;
        lightshow->update = update;
        
        
        // lighshow becomes last in the linked list
        
        lightshow->next = NULL;
        if (this->firstLink == NULL ) {
            lightshow->prev = NULL;
            this->firstLink = lightshow;
        }
        else {
            lightshow->prev = this->lastLink;
            this->lastLink->next = lightshow;
        }
        this->lastLink = lightshow;
        firstFree++;
        
    }
    
}

void activePrimitiveLightshowList::removeLightshow(int i) {
    
    activePrimitiveLightshow* lightshow;
    lightshow = &(this->lightshowTable[i]);
    
    // Close up the linked list
    if (lightshow->prev == NULL ) {     // it is the first node
        this->firstLink = lightshow->next;
        if (lightshow->next == NULL) {  // it is the first and last node
            this->lastLink = NULL;
        }
        else {                          // it is the first but not the last
            lightshow->next->prev = NULL;
        }
    }
    else {                              // it is not the first node
        lightshow->prev->next = lightshow->next;
        if (lightshow->next == NULL) {  // it is the last but not the first
            this->lastLink = lightshow->prev;
        }
        else {                          // it is neither the first nor last
            lightshow->next->prev = lightshow->prev;
        }
    }
    if (firstFree > 0) {
        firstFree--;
        freeCellStack[firstFree] = i;
    }
}


    


void activePrimitiveLightshowList::updateAll() {
    
    activePrimitiveLightshow* lightshow = this->firstLink;
    eMoonFrame f;


    while (lightshow != NULL) {
    

    f = currentFrame - lightshow->startFrame;
        
        if (f < lightshow->duration) {
            
            (*lightshow->update)(f, lightshow->duration, lightshow->strip);
            lightshow = lightshow->next;
            
        }
        else {
            
//            blankLightshow(lightshow);   // this needs to be removed for delta algorithms
            
            int parentIndex = lightshow->parent;
            int i = lightshow - this->lightshowTable;
            lightshow = lightshow->next;
            
            this->removeLightshow( i );
            
//            if (parentIndex >= 0) {
//                mix_list->activateNextLightshow(parentIndex);
//            }
            
        }
    }
    
    
}

void activePrimitiveLightshowList::blankLightshow(activePrimitiveLightshow* lightshow) {
    int p;
        for(p=0; p < lightshow->strip->numPixels(); p++) {
            lightshow->strip->setPixelColor(p, 0x00000000);
    }
}

//------- ASL List ---------

activeSymbolicLightshowList::activeSymbolicLightshowList() {
    
    // initialise the freeCellStack
    //  !!!! the size of arrays should be set by a constant
    for (int i=0; i < EMOON_LISTLENGTH; i++) {
        this->freeCellStack[i] = i;
        this->lightshowTable[i].interval = 0;
        this->lightshowTable[i].startFrame = 0;
        this->lightshowTable[i].duration = 0;
        this->lightshowTable[i].strip = NULL;
        this->lightshowTable[i].parent = 0;
        this->lightshowTable[i].scheduler = NULL;
    }
    this->firstFree = 0;
    
}

void activeSymbolicLightshowList::addLightshow(int parentIndex, eMoonFrame duration, eMoonStrip strip, eMoonSchedulerFunction scheduler) {
    
    // this should be changed to a simpler call that guarantees a clean and accurate new record is created
    
    if (parentIndex > 0) {
        eMoonFrame framesRemaining = this->lightshowTable[parentIndex].startFrame + this->lightshowTable[parentIndex].duration - currentFrame;
        if (duration >  framesRemaining) {   duration = framesRemaining; }
    }
    if (firstFree < EMOON_LISTLENGTH) {
        int i = freeCellStack[firstFree];
        firstFree++;

        
        this->lightshowTable[i].startFrame = currentFrame;
        this->lightshowTable[i].duration = duration;
        this->lightshowTable[i].strip = strip;
        this->lightshowTable[i].parent = parentIndex;
        this->lightshowTable[i].scheduler = scheduler;
        
        
        this->lightshowTable[i].interval = (*scheduler)(0, duration, strip, i);
//            Serial.print("adding:"); Serial.print(i);   Serial.print("   base interval"); Serial.println(this->lightshowTable[i].interval);

    }
    
}

void activeSymbolicLightshowList::removeLightshow(int i) {
//    Serial.print("removing:"); Serial.println(i);

    if (firstFree > 0) {
        this->lightshowTable[i].duration = 0;
        firstFree--;
        freeCellStack[firstFree] = i;
    }
    
}

void activeSymbolicLightshowList::activateNextLightshow(int i) {
    // Assumptions:
    //    a child lightshow has just ended
    //    the lightshow gets a chance to replace the next lightshow(s)

    activeSymbolicLightshow* lightshow = &(this->lightshowTable[i]);
    eMoonFrame f = currentFrame - lightshow->startFrame;
    
    if (f < lightshow->duration ) {
        // The lightshow is still running.
        // We allow it to activate the next lightshow(s) by calling its scheduler
//        (*lightshow->scheduler)(f, lightshow->duration, lightshow->strip, i);
    }
    else {
        // The lightshow has ended
        if (i == 0) {
        
            // the 0 record is the master lightshow, so we loop it
            lightshow->startFrame = currentFrame;
            f = 0;
//            (*lightshow->scheduler)(f, lightshow->duration, lightshow->strip, i);

        }
        else {
            // this is not the master lightshow, so we remove it.
            // We also let the parent know by calling this same function recursively.
            // However, not all lightshows are assigned parents.
            // We assume that parentIndex == -1 means there is no parent.

            int parentIndex = lightshow->parent;
            if ( parentIndex >= 0 ) {

                this->activateNextLightshow(parentIndex);

            }
        }

    }
}


void activeSymbolicLightshowList::updateAll() {
    
    activeSymbolicLightshow* lightshow;
    eMoonFrame f;
//
//
    for (int i=0; i < EMOON_LISTLENGTH; i++) {
        lightshow = &(this->lightshowTable[i]);
        
        if (lightshow->duration) {    // only process active records
            f = currentFrame - lightshow->startFrame;
//Serial.print("f:"); Serial.println(f);
//Serial.print("i:"); Serial.println(i);
//Serial.print("interval:"); Serial.println(lightshow->interval);


            if (f > 0) {    // skip lightshows in their first frame (they've already been updated)
            
            
              if (f < lightshow->duration) {     //  normal processing
                if ( (f % lightshow->interval) == 0) {    // only update at even intervals
//                Serial.print("f:"); Serial.print(f); Serial.print("  i:"); Serial.print(i); Serial.print(" ;");

                    (*lightshow->scheduler)(f / lightshow->interval, lightshow->duration, lightshow->strip, i);
                }  // if
              }  // if (normal processing
              
              else {   // expired lightshows
                if (i ==  0) {   // don't remove master lightshow in 0, just reset it
                                  lightshow->startFrame = 0;
                                  (*lightshow->scheduler)(0, lightshow->duration, lightshow->strip, 0);
                }  // if
                else {   // normal expired lightshow
                   this->removeLightshow(i);
                }  // else   
              }   // else (expired processing)
              
              
            }   // if (processing normal frames)
        }  // if (processing active records)

    } // for
}



//-------APS LIST---------
activePhysicalStripList::activePhysicalStripList() {
    
    this->numItems = 0;
    
}

void activePhysicalStripList::addStrip(Adafruit_NeoPixel* strip) {
    
    //lightshowTable[0] = lightshow;
    this->stripTable[this->numItems] = strip;
    this->numItems++;
    strip->begin();
}

void activePhysicalStripList::showAll() {
    
    int ticker;
    for (ticker=0; ticker < this->numItems; ticker++ ) {

        stripTable[ticker]->show();
        
    }
    
}










