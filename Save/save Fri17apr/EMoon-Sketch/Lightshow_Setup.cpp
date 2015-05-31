//
//  Lightshow_Setup.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 22/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "Lightshow_Setup.h"



extern activePhysicalStripList* APS_list;
extern activePrimitiveLightshowList* APL_list;
extern activeSymbolicLightshowList* mix_list;






void sequential(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonUpdateFunction S0, eMoonUpdateFunction S1, eMoonUpdateFunction S2, eMoonUpdateFunction S3 ) {
    
    eMoonUpdateFunction update;
    switch ( f / (duration / 4) ) {
        case 0:
            update = S0;
            break;
        case 1:
            update = S1;
            break;
        case 2:
            update = S2;
            break;
        case 3:
            update = S3;
            break;
            
        default:
            break;
    }
    APL_list->addLightshow(-1, duration, strip, update);
}



// This is the first call to mix_list->addLightshow()
// It will set a lightshow at the start of the list and this will thus become the master lightshow
// The master lightshow will automatically start again when it finishes.
//
void setupMasterLightshow() {
    
    mix_list->addLightshow(-1, 4096, pod0, &masterMix);

    
}


void themeMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    
    int interval = duration / 2;
//    int interval = duration;
    
    
//    if (f < 10) {  mix_list->addLightshow(p, interval, pod0, &yellowTheme); return; }
//    if ( f < duration) { mix_list->addLightshow(p, interval, pod0, &blueTheme); return; }
    
//    mix_list->addLightshow(p, interval, pod0, &yellowTheme);
//    mix_list->addLightshow(-1, interval, pod0, &blueTheme);
    
    if ( f < duration / 2) {
            mix_list->addLightshow(-1, interval, NULL, &blueTheme);

            mix_list->addLightshow(-1, interval, NULL, &bordertest0Theme);

            mix_list->addLightshow(-1, interval, NULL, &border1Theme);

            mix_list->addLightshow(-1, interval, pod0, &yellowTheme);
    }
//            mix_list->addLightshow(p, interval * 2, pod0, &blueTheme);
//            mix_list->addLightshow(-1, interval, NULL, &border1Theme);
    if (f >= duration / 2) {

            APL_list->addLightshow(p, interval, pod0, &b0);
            APL_list->addLightshow(-1, interval, pod1, &b1);
            APL_list->addLightshow(-1, interval, pod2, &b2);
            APL_list->addLightshow(-1, interval, pod3, &b3);
            APL_list->addLightshow(-1, interval, pod4, &b4);
            APL_list->addLightshow(-1, interval, pod5, &b5);
            APL_list->addLightshow(-1, interval, pod6, &b6);
            APL_list->addLightshow(-1, interval, pod7, &b7);
            
            APL_list->addLightshow(-1, interval, pod8, &b0);
            APL_list->addLightshow(-1, interval, pod9, &b1);
            APL_list->addLightshow(-1, interval, pod10, &b2);
            APL_list->addLightshow(-1, interval, pod11, &b3);
            APL_list->addLightshow(-1, interval, pod12, &b4);
            APL_list->addLightshow(-1, interval, pod13, &b5);
            APL_list->addLightshow(-1, interval, pod14, &b6);
            APL_list->addLightshow(-1, interval, pod15, &b7);

    }
    
}




