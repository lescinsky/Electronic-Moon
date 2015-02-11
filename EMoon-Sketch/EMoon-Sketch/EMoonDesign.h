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
#include "Lightshows.h"
#include "Strips.h"

typedef uint32_t (*colourFunction)();



void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction C0, colourFunction C1);
void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
             colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void setupMasterLightshow();
//void update1(eMoonFrame f, Adafruit_NeoPixel* strip);
//void update2(eMoonFrame f, Adafruit_NeoPixel* strip);

#endif /* defined(__EMoon_Sketch__EMoonDesign__) */
