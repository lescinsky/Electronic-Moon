//
//  Lightshows.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__Lightshows__
#define __EMoon_Sketch__Lightshows__

#include <stdio.h>
#include "EMoonDesign.h"


//---------- FADES and SPREADS ---------------

//class matrixBasis : public updateFunction
//{
//public:
////    void update(eMoonFrame f, Adafruit_NeoPixel* strip);
//    virtual void basisFunction();
//    
//};

void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip);
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip);



#endif /* defined(__EMoon_Sketch__Lightshows__) */

