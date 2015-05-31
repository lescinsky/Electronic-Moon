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










// This is the first call to mix_list->addLightshow()
// It will set a lightshow at the start of the list and this will thus become the master lightshow
// The master lightshow will automatically start again when it finishes.
//
void setupMasterLightshow() {
    
    mix_list->addLightshow(-1, 4096, NULL, &masterMix);
    
}