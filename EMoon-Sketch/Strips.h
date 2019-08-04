//
//  Strips.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__Strips__
#define __EMoon_Sketch__Strips__

#include <stdio.h>
#include "EMoonDesign.h"

extern activePhysicalStripList* APS_list;




extern Adafruit_NeoPixel* pod0;
extern Adafruit_NeoPixel* pod1;
extern Adafruit_NeoPixel* pod2;
extern Adafruit_NeoPixel* pod3;
extern Adafruit_NeoPixel* pod4;
extern Adafruit_NeoPixel* pod5;
extern Adafruit_NeoPixel* pod6;
extern Adafruit_NeoPixel* pod7;
extern Adafruit_NeoPixel* pod8;
extern Adafruit_NeoPixel* pod9;
extern Adafruit_NeoPixel* pod10;
extern Adafruit_NeoPixel* pod11;
extern Adafruit_NeoPixel* pod12;
extern Adafruit_NeoPixel* pod13;
extern Adafruit_NeoPixel* pod14;
extern Adafruit_NeoPixel* pod15;

#define EDGEPIN_0      9
#define EDGEPIN_1      10
#define EDGEPIN_2      11
#define EDGEPIN_3      12
#define EDGEPIN_4      13
#define EDGEPIN_5      15
#define EDGEPIN_6      16
#define EDGEPIN_7      17
#define EDGEPIN_8      18
#define EDGEPIN_9      19
#define EDGEPIN_10     20
#define EDGEPIN_11     21


extern Adafruit_NeoPixel* edge0;
extern Adafruit_NeoPixel* edge1;
extern Adafruit_NeoPixel* edge2;
extern Adafruit_NeoPixel* edge3;
extern Adafruit_NeoPixel* edge4;
extern Adafruit_NeoPixel* edge5;
extern Adafruit_NeoPixel* edge6;
extern Adafruit_NeoPixel* edge7;
extern Adafruit_NeoPixel* edge8;
extern Adafruit_NeoPixel* edge9;
extern Adafruit_NeoPixel* edge10;
extern Adafruit_NeoPixel* edge11;

void setupStrips();void setupMasterLightshow();




#endif /* defined(__EMoon_Sketch__Strips__) */
