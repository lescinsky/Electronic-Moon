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
masterLightshow* master = new masterLightshow();
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


activePrimitiveLightshowList::activePrimitiveLightshowList() {
    
    
}

void activePrimitiveLightshowList::addLightshow(eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update) {
    
    //lightshowTable[0] = lightshow;
    this->lightshowTable[0].startFrame = currentFrame;
    this->lightshowTable[0].duration = duration;
    this->lightshowTable[0].strip = strip;
    this->lightshowTable[0].parent = master;
    this->lightshowTable[0].update = update;
    
}

void activePrimitiveLightshowList::updateAll() {
    
    long int ticker = 0;
    activePrimitiveLightshow* lightshow = &(this->lightshowTable[ticker]);
    eMoonFrame f = currentFrame - lightshow->startFrame;  //!!!!!!!
    (*lightshow->update)(f, lightshow->duration, lightshow->strip);
    if (f >= lightshow->duration ) {
        blankLightshow(lightshow);
        lightshow->parent->activateNextLightshow();
    }
    
}

void activePrimitiveLightshowList::blankLightshow(activePrimitiveLightshow* lightshow) {
    int p;
        for(p=0; p < lightshow->strip->numPixels(); p++) {
            lightshow->strip->setPixelColor(p, 0x00000000);
    }
}

//void matrixBasis( ) {
//    int f;
//    f = currentFrame % timeframe;
//    int basisValue;
//    basisValue =
//    int p, delta = 0;
//    unit32_t colour;
//    for(p=0; p < strip.length; p++) {
//        colour = matrix[p * matrix.width / strip.length][f * matrix.height / timeframe];
//        delta += basisValue * colour;
//        if (delta > 0) {
//            strip.pixel(p) = delta;
//        }
//    }
//}




//-------Master Lightshow---------


masterLightshow::masterLightshow() {
    this->indexTicker = 0;
    this->numItems = 0;
}

void masterLightshow::addLightshow(eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update) {
    
    //lightshowTable[0] = lightshow;
    this->lightshowTable[this->numItems].startFrame = currentFrame;
    this->lightshowTable[this->numItems].duration = duration;
    this->lightshowTable[this->numItems].strip = strip;
    this->lightshowTable[this->numItems].parent = NULL;
    this->lightshowTable[this->numItems].update = update;
    this->numItems++;
    
}


void masterLightshow::activateNextLightshow() {
    
    
//    if (this->indexTicker == 0) {
//        APL_list->addLightshow(32, APS_list->currentStrip, &update1);
//    }
//    if (this->indexTicker == 1) {
//        APL_list->addLightshow(32, APS_list->currentStrip, &update2);
//    }
    APL_list->addLightshow(this->lightshowTable[indexTicker].duration, this->lightshowTable[indexTicker].strip, this->lightshowTable[indexTicker].update);
    this->indexTicker++;
    if (this->indexTicker >= this->numItems) {
        this->indexTicker = 0; }
    
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










