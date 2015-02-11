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


//----------- FADES --------------------

void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction C0, colourFunction C1) {
   
    uint8_t basisValue = 0;
    int p, refreshRate, ds;
    int stepSize = duration / 2;
    uint32_t delta;
    
    // ! s must be > 0
    s = min(s, stepSize);
    // set refreshRate (how often do we actually update the strip)
    if (s > 16) {  // ! redundant for s = 1
        refreshRate = s / 16;
        ds = 16;
    }
    else {
        refreshRate = 1;
        ds = s;
    }
    
    if ( !(f % refreshRate) ) {   // this prevents updating except at regular intervals
        if ( (f % stepSize) < s ) {  // this prevents updating after all the deltas have been applied
 
            // set delta based on which step we are in
            if (f < stepSize) {
                delta = C0();
            }
            else {
                delta = C1();
            }
            delta /= ds;
            
            for(p=0; p < strip->numPixels(); p++) {
                strip->setPixelColor(p, strip->getPixelColor(p) + delta);
            }
        }
    }
}

//------------ SPREADS -------------------
void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
 colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int p;
    int stepSize = strip->numPixels() / 4;
    int32_t delta = 0x000080;
    int32_t colour = 0x000000 + CX();  // i.e. this is set to the neutral colour
    
    if (f <= 1) {
    
        // ! s assumed to be > 0 and <= 16
        s = min(s, stepSize);

        for(p=0; p < strip->numPixels(); p++) {
            
            if ( !(p % stepSize) ) {
                switch (p / stepSize) {
                    case 0:
                        delta = C0();
                        break;
                    case 1:
                        delta = C1();
                        break;
                    case 2:
                        delta = C2();
                        break;
                    case 3:
                        delta = C3();
                        break;
                    default:
                        break;
                }
                delta /= s;
            }

             if ( (p % stepSize) < s ) {
                colour  += delta;
             }
        
            strip->setPixelColor(p, colour);
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