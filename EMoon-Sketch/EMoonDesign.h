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
#include "colours.h"

typedef uint32_t (*colourFunction)();

typedef void (*fullMoonPrimitive)(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void Tfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Tfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Tfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Tfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Jfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Jfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Jfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Jfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Lfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Lfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Lfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Lfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Zfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Zfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Sfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Sfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Ifall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Ifall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Ifall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);
void Ifall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void Ofall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void fmfill(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void fmspeckle(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void fmspeckle4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

    
void fmprim4(fullMoonPrimitive prim,  eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* dummystrip, int index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void fillsq(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void specklesq(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void specklesq4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void clearfield(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void specklequad(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

//void testmix1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip);

void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void fade4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
             colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void wipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void wipeto(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void everwipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void spin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadspin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void bloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void unbloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void curtain4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void wash4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadshuffle(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void sparklefill4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);


void sparkleoverwrite(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);

void quadsparklefill(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3);



void setupMasterLightshow();
//void update1(eMoonFrame f, Adafruit_NeoPixel* strip);
//void update2(eMoonFrame f, Adafruit_NeoPixel* strip);

#endif /* defined(__EMoon_Sketch__EMoonDesign__) */
