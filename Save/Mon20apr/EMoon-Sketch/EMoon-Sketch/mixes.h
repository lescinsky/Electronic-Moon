//
//  mixes.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__mixes__
#define __EMoon_Sketch__mixes__

#include <stdio.h>
#include "mixDesign.h"
#include"Lightshows.h"
#include "colours.h"

// A mix is made up of primitives
// A mix is assumed to last at least 4 seconds
// A mix could cover a well defined zone of pods
// A mix is assumed not to cover a pod more than once at a single time


void tetrisMedley(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void tetrisTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) ;
void tetrisTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) ;
void tetrisOpener(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) ;



void	myMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void masterMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);
void aussieMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);


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
void	tetrisBorder0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);




#endif /* defined(__EMoon_Sketch__mixes__) */
