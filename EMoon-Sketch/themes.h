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
#include "mixes.h"


// A theme could be made up of metamixes.
// A theme is assumed to last at least 1 minute
// A theme is assumed to cover all pods
// A theme is assumed not to cover a pod more than once at a single time






#define EM_SPEED 1


#define TB_T    (  (TET1_T + TET2_T + TET3_T + TET4_T) / EM_SPEED)
#define TB_S    (TET1_S)
#define TB_I    (TB_T / 32)

#define GROUP1_S (GROUP2_S - GROUP1_T)


#define BLACKOUT1_T    (  64 / EM_SPEED)
#define BLACKOUT1_S    (WINDYELLOW_S - BLACKOUT1_T)
#define BLACKOUT1_I    (BLACKOUT1_T / 1)

#define WINDYELLOW_T    ( 512 / EM_SPEED)
#define WINDYELLOW_S    (POPPY_S - WINDYELLOW_T)
#define WINDYELLOW_I    (WINDYELLOW_T /  16)

#define POPPY_T    (  2048 / EM_SPEED)
#define POPPY_S   (WINDWHITE_S - POPPY_T)
#define POPPY_I   (POPPY_T / 32)

#define WINDWHITE_T    (  64/ EM_SPEED)
#define WINDWHITE_S    (MM_S - WINDWHITE_T)
#define WINDWHITE_I    (WINDWHITE_T /  16)

#define MM_T    (  512 / EM_SPEED )
#define MM_S    (TET1_S - MM_T)
#define MM_I    (MM_T / 16)

#define TET1_T    (  1536 / EM_SPEED)
#define TET1_S    (TET2_S - TET1_T)
#define TET1_I    (TET1_T / 32)

#define TET2_T    (  1024 / EM_SPEED)
#define TET2_S    (TET3_S - TET2_T)
#define TET2_I    (TET2_T / 32)

#define TET3_T    (  512 / EM_SPEED)
#define TET3_S    (TET4_S - TET3_T)
#define TET3_I    (TET3_T / 32)

#define TET4_T    (  768 / EM_SPEED)
#define TET4_S    (GROUP2_S - TET4_T)
#define TET4_I    (TET4_T / 32)

#define GROUP1_T  (TET1_T + TET2_T + TET3_T + TET4_T + MM_T + WINDYELLOW_T + POPPY_T+ WINDWHITE_T + BLACKOUT1_T)


//  Group 2

#define GROUP2_S (GROUP3_S - GROUP2_T)

#define MUCK_T    (  2048 / EM_SPEED)
#define MUCK_S    (BLACKOUT0_S - MUCK_T)
#define MUCK_I    (MUCK_T / 32)

#define BLACKOUT0_T    (  64 / EM_SPEED)
#define BLACKOUT0_S    (WIND_S - BLACKOUT0_T)
#define BLACKOUT0_I    (BLACKOUT0_T / 1)

#define WIND_T    (  512 / EM_SPEED)
#define WIND_S    (M0_S - WIND_T)
#define WIND_I    (WIND_T / 16)

#define M0_T    (  4096 / EM_SPEED)
#define M0_S    (GROUP3_S - M0_T)
#define M0_I    (M0_T / 8)

#define GROUP2_T (MUCK_T + BLACKOUT0_T + WIND_T + M0_T)


// Group 3

#define GROUP3_S (GROUP4_S - GROUP3_T)

#define REDRISE_T    (  256 / EM_SPEED)
#define REDRISE_S    (RISE_S - REDRISE_T)
#define REDRISE_I    (REDRISE_T / 16)

#define RISE_T    (  256 / EM_SPEED)
#define RISE_S    (SPARKRISE_S - RISE_T)
#define RISE_I    (RISE_T / 16)

#define SPARKRISE_T    (  256 / EM_SPEED)
#define SPARKRISE_S    (SPIRAL0_S - SPARKRISE_T)
#define SPARKRISE_I    (SPARKRISE_T / 16)

#define SPIRAL0_T    (  32 )
#define SPIRAL0_S    (SPIRAL1_S - SPIRAL0_T)
#define SPIRAL0_I    (SPIRAL0_T / 16)

#define SPIRAL1_T    (  32 )
#define SPIRAL1_S    (SPIRAL2_S - SPIRAL1_T)
#define SPIRAL1_I    (SPIRAL1_T / 16)

#define SPIRAL2_T    ( 64 )
#define SPIRAL2_S    (SPIRAL_S - SPIRAL2_T)
#define SPIRAL2_I    (SPIRAL2_T / 32)

#define SPIRAL_T    (  256 / EM_SPEED)
#define SPIRAL_S    (FLASHER_S - SPIRAL_T)
#define SPIRAL_I    (SPIRAL_T / 16)

#define FLASHER_T    (  256 / EM_SPEED)
#define FLASHER_S    (MESSFALL_S - FLASHER_T)
#define FLASHER_I    (FLASHER_T / 32)

#define MESSFALL_T    (  1024 / EM_SPEED)
#define MESSFALL_S    (GROUP4_S - MESSFALL_T)
#define MESSFALL_I    (MESSFALL_T / 32)


#define GROUP3_T (RISE_T + REDRISE_T + SPARKRISE_T + SPIRAL_T + SPIRAL0_T + SPIRAL1_T + SPIRAL2_T + FLASHER_T + MESSFALL_T)
//#define GROUP3_T RISE_T + REDRISE_T + SPARKRISE_T


// Group 4

#define GROUP4_S (TOTAL_DURATION - GROUP4_T)

#define PUMPKIN_T    (  128 / EM_SPEED)
#define PUMPKIN_S    (AUSSIE_S - PUMPKIN_T)
#define PUMPKIN_I    (PUMPKIN_T /  32)



#define AUSSIE_T    (  (2048-512)  / EM_SPEED)
#define AUSSIE_S    (MASTER_S - AUSSIE_T)
#define AUSSIE_I    (AUSSIE_T / 8)

#define MASTER_T    (  4096  / EM_SPEED)
#define MASTER_S    (TOTAL_DURATION - MASTER_T)
#define MASTER_I    (MASTER_T / 8)

#define GROUP4_T  (MASTER_T + AUSSIE_T + PUMPKIN_T)

#define TOTAL_DURATION  (GROUP1_T + GROUP2_T + GROUP3_T + GROUP4_T)

#define MUNGE_T    (  (1024)  / EM_SPEED)
#define MUNGE_S    (0 - MUNGE_T)
#define MUNGE_I    (MUNGE_T / 32)

void masterLightshow(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p);






#endif /* defined(__EMoon_Sketch__themes__) */
