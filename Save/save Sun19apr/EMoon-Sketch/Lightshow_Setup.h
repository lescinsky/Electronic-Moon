//
//  Lightshow_Setup.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 22/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__Lightshow_Setup__
#define __EMoon_Sketch__Lightshow_Setup__

#include <stdio.h>
#include "EMoonDesign.h"
#include "themes.h"


//void sequential(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonUpdateFunction S0, eMoonUpdateFunction S1, eMoonUpdateFunction S2, eMoonUpdateFunction S3 );

void masterMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void themeMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	myMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	windMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	windyellowMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	windwhiteMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	riseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	redriseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	sparkriseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	spiralMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);

void	spiral0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	spiral1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	spiral2_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	field0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	flasher_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	tetfall0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	tetfall1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	messfallMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	mungeMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void	munge1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);







void setupMasterLightshow();

#endif /* defined(__EMoon_Sketch__Lightshow_Setup__) */