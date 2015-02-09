//
//  Lightshows.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "Lightshows.h"





//---------- FADES and SPREADS ---------------

//void matrixBasis::update(eMoonFrame f, Adafruit_NeoPixel* strip) {
//    
//
//        int basisValue;
//        basisValue =
//        int p, delta = 0;
//        unit32_t colour;
//        for(p=0; p < strip.length; p++) {
//            colour = matrix[p * matrix.width / strip.length][f * matrix.height / timeframe];
//            delta += basisValue * colour;
//            if (delta > 0) {
//                strip.pixel(p) = delta;
//            }
//        }
//    
//}



void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, uint32_t (*C0)(), uint32_t (*C1)(), uint32_t (*C2)(), uint32_t (*C3)()) {
    
    //            int basisValue;
    //            basisValue =
    //            int p, delta = 0;
    //            unit32_t colour;
    //            for(p=0; p < strip.length; p++) {
    //                colour = matrix[p * matrix.width / strip.length][f * matrix.height / timeframe];
    //                delta += basisValue * colour;
    //                if (delta > 0) {
    //                    strip.pixel(p) = delta;
    //                }
    //            }
    
}

//----------------------------------------------

uint32_t redFadeC0() {return(0x300000);}    // red - black
uint32_t redFadeC1() {return(0x003000);}    // yellow - red
void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    fade2(f, duration, strip, 4, &redFadeC0, &redFadeC1);}

//----------------------------------------------

uint32_t rainbowSpreadC0() {return(0x700000);}
uint32_t rainbowSpreadC1() {return(0x707000);}
uint32_t rainbowSpreadC2() {return(0x007000);}
uint32_t rainbowSpreadC3() {return(0x000070);}
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    spread4(f, duration, strip, 4, &rainbowSpreadC0, &rainbowSpreadC1, &rainbowSpreadC2, &rainbowSpreadC3);}




