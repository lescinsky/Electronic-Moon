//
//  EMoonDesign.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 9/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "EMoonDesign.h"



//----------- FADES --------------------

void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1) {
   
    uint8_t basisValue = 0;
    int p, refreshRate, ds;
    int stepSize = duration / 2;
    uint32_t delta;
    int32_t colour = 0x000000 + CX();  // i.e. this is set to the neutral colour

    
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
    
        if ( (f % stepSize) < s ) {  // this prevents updating after all the deltas have been applied
 
            // set delta based on which step we are in
            if (f < stepSize) {
                colour = C1() + ((f % stepSize) * (C0()-C1()) / s);
            }
            else {
                colour = C0() + ((f % stepSize) * (C1()-C0()) / s);
            }

            
            for(p=0; p < strip->numPixels(); p++) {
                strip->setPixelColor(p, (uint32_t)colour);
            }
        }

}

void deltaFade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1) {
    
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
                        colour = C3();
                        delta = C0()-C3();
                        break;
                    case 1:
                        colour = C0();
                        delta = C1()-C0();
                        break;
                    case 2:
                        colour = C1();
                        delta = C2()-C1();
                        break;
                    case 3:
                        colour = C2();
                        delta = C3()-C2();
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

void deltaSpread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
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

