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




//






// This is the first call to mix_list->addLightshow()
// It will set a lightshow at the start of the list and this will thus become the master lightshow
// The master lightshow will automatically start again when it finishes.
//
void setupMasterLightshow() {
    
//    mix_list->addLightshow(-1, 1024, NULL, &spiralTheme);
//    mix_list->addLightshow(-1, 1024, NULL, &riseTheme);
//    mix_list->addLightshow(-1, 2048, NULL, &poppyTheme);
//        mix_list->addLightshow(-1, 256, NULL, &sparkriseMix);
    mix_list->addLightshow(-1, TOTAL_DURATION, NULL, &masterLightshow);
//    mix_list->addLightshow(-1, TOTAL_DURATION, NULL, &riseMix);

//    mix_list->addLightshow(-1, 512, NULL, &windMix);



    


//    mix_list->addLightshow(-1, 128, NULL, &pumpkin_Mix);
//    mix_list->addLightshow(-1, 4096, NULL, &masterMix);
//    mix_list->addLightshow(-1, 4096, NULL, &tetrisTheme);
    
    
}
