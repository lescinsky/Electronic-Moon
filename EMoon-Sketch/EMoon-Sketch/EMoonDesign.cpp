//
//  EMoonDesign.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 9/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "EMoonDesign.h"


//void update1(eMoonFrame f, Adafruit_NeoPixel* strip) {
//    
//    uint32_t c1 = 0x7f0000;
//    uint16_t i= f % strip->numPixels();
//    strip->setPixelColor(i, c1);
//    
//}
//
//
//void update2(eMoonFrame f, Adafruit_NeoPixel* strip) {
//    
//    uint32_t c1 = 0x007f00;
//    uint16_t i= f % strip->numPixels();
//    strip->setPixelColor(i, c1);
//    
//}



void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction C0, colourFunction C1) {
    
    uint8_t basisValue = 0;
    int p;
    uint32_t delta;
    
    if (f < 64) {
        delta = C0();
        
    }
    else {
        delta = C1();
    }
    
    delta /= 16;
    
    for(p=0; p < strip->numPixels(); p++) {
        
         if ( !(f % 4) ){
            strip->setPixelColor(p, strip->getPixelColor(p) + delta);
        }
    }


    
}


//void setupMasterLightshow() {
//    
//            master->addLightshow(32, APS_list->currentStrip, &update2);
//    
//    
//    
//    
//}