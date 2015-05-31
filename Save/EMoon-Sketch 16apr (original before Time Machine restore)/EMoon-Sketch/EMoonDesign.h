//
//  EMoonDesign.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 9/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__EMoonDesign__
#define __EMoon_Sketch__EMoonDesign__

#include <stdio.h>


#include "LocalLibrary.h"




typedef uint32_t (*colourFunction)();

//void testmix1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip);

void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1);

void fade4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
             colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void wipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void everwipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void spin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadspin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void bloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void unbloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void curtain4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void wash4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadshuffle(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void sparklefill4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadsparklefill(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);



void setupMasterLightshow();
//void update1(eMoonFrame f, Adafruit_NeoPixel* strip);
//void update2(eMoonFrame f, Adafruit_NeoPixel* strip);

#endif /* defined(__EMoon_Sketch__EMoonDesign__) */
