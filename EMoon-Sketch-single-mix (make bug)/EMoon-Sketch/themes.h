//
//  themes.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__themes__
#define __EMoon_Sketch__themes__

#include <stdio.h>
#include "EMoonDesign.h"
#include "mixDesign.h"

#include "Strips.h"
#include "Lightshows.h"
#include "colours.h"


// A theme could be made up of metamixes.
// A theme is assumed to last at least 1 minute
// A theme is assumed to cover all pods
// A theme is assumed not to cover a pod more than once at a single time

void masterLightshow(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);






#endif /* defined(__EMoon_Sketch__themes__) */
