//
//  EMoonClasses.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "EMoonClasses.h"

//------APL LIST---------
activePrimitiveLightshowList::activePrimitiveLightshowList() {
    
    currentUpdateFunction = new updateFunction();
    
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
    








