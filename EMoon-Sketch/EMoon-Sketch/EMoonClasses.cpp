//
//  EMoonClasses.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "EMoonClasses.h"


// the global variable for counting frames
eMoonFrame currentFrame;


//------APL LIST---------
// the global variable for the Master Lightshow
activePrimitiveLightshowList* APL_list = new activePrimitiveLightshowList();


activePrimitiveLightshowList::activePrimitiveLightshowList() {
    
    
}

void activePrimitiveLightshowList::addLightshow(activePrimitiveLightshow* lightshow) {
    
    lightshowTable[0] = lightshow;
    lightshow->activate();
    
}

void activePrimitiveLightshowList::updateAll() {
    
    int ticker = 0;
    lightshowTable[ticker]->update();
    
}




//-------Master Lightshow---------
// the global variable for the Master Lightshow
masterLightshow* master = new masterLightshow();

masterLightshow::masterLightshow() {
    indexTicker = 0;
}

void masterLightshow::addLightshow(int index, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    
    lightshowTable[index] = new activePrimitiveLightshow(duration, strip);
    
}

void masterLightshow::activatePrimitiveLightshow() {
    
    APL_list->addLightshow(this->lightshowTable[this->indexTicker]);
    
}


void masterLightshow::deactivatePrimitiveLightshow() {
    
    
   this->indexTicker++;
   if (this->indexTicker > 1) {
      this->indexTicker = 0; }
   this->activatePrimitiveLightshow();
    
}



//-------Active Primitive Lightshow---------
activePrimitiveLightshow::activePrimitiveLightshow(eMoonFrame duration, Adafruit_NeoPixel* strip) :
    duration(duration), strip(strip)
{
    this->parent = master;
    this->activate();
}

void activePrimitiveLightshow::activate()
{
    this->startFrame = currentFrame;
}

void activePrimitiveLightshow::update()
{
    eMoonFrame f = currentFrame - this->startFrame;  //!!!!!!!
    uint32_t c1 = strip->Color(((f + 32)*16) % 128, sqrt((double)(f%64)), ((f / 32) % 128));
    uint16_t i= f % strip->numPixels();
    this->strip->setPixelColor(i, c1);

    if (f >= duration) {
        this->parent->deactivatePrimitiveLightshow();
    }

}




//-------APS LIST---------
activePhysicalStripList::activePhysicalStripList() {
    
    // Parameter 1 = number of pixels in strip
    // Parameter 2 = Arduino pin number (most are valid)
    // Parameter 3 = pixel type flags, add together as needed:
    //   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
    //   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
    //   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
    //   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
    currentStrip = new Adafruit_NeoPixel(30, 9, NEO_GRB + NEO_KHZ800);
    currentStrip->begin();
    
}

void activePhysicalStripList::showAll() {
    
    currentStrip->show();
    
}


//-------UPDATE FUNCTION---------
updateFunction::updateFunction() {
    
}

void updateFunction::update(eMoonFrame f, Adafruit_NeoPixel* strip) {

    uint32_t c1 = strip->Color(((f + 32)*16) % 128, sqrt((double)(f%64)), ((f / 32) % 128));
    uint16_t i= f % strip->numPixels();
    strip->setPixelColor(i, c1);
   
}
    








