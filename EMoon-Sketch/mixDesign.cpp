//
//  mixDesign.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "mixDesign.h"

extern 	Adafruit_NeoPixel*	pod0	;
extern 	Adafruit_NeoPixel*	pod1	;
extern 	Adafruit_NeoPixel*	pod2	;
extern 	Adafruit_NeoPixel*	pod3	;
extern 	Adafruit_NeoPixel*	pod4	;
extern 	Adafruit_NeoPixel*	pod5	;
extern 	Adafruit_NeoPixel*	pod6	;
extern 	Adafruit_NeoPixel*	pod7	;
extern 	Adafruit_NeoPixel*	pod8	;
extern 	Adafruit_NeoPixel*	pod9	;
extern 	Adafruit_NeoPixel*	pod10	;
extern 	Adafruit_NeoPixel*	pod11	;
extern 	Adafruit_NeoPixel*	pod12	;
extern 	Adafruit_NeoPixel*	pod13	;
extern 	Adafruit_NeoPixel*	pod14	;
extern 	Adafruit_NeoPixel*	pod15	;
extern 	Adafruit_NeoPixel*	edge0	;
extern 	Adafruit_NeoPixel*	edge1	;
extern 	Adafruit_NeoPixel*	edge2	;
extern 	Adafruit_NeoPixel*	edge3	;
extern 	Adafruit_NeoPixel*	edge4	;
extern 	Adafruit_NeoPixel*	edge5	;
extern 	Adafruit_NeoPixel*	edge6	;
extern 	Adafruit_NeoPixel*	edge7	;
extern 	Adafruit_NeoPixel*	edge8	;
extern 	Adafruit_NeoPixel*	edge9	;
extern 	Adafruit_NeoPixel*	edge10	;
extern 	Adafruit_NeoPixel*	edge11	;


void	addtoAllPods	(eMoonFrame duration, eMoonUpdateFunction lightshow) {
    
    addtoAllQuads(duration, lightshow);
    addtoAllEdges(duration, lightshow);
    
}

void	addtoAllQuads	(eMoonFrame duration, eMoonUpdateFunction lightshow) {
    APL_list->addLightshow(-1, duration	,	pod0	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod1	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod2	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod3	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod4	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod5	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod6	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod7	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod8	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod9	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod10	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod11	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod12	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod13	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod14	,	lightshow);
    APL_list->addLightshow(-1, duration	,	pod15	,	lightshow);
}

void	addtoAllEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow) {
    APL_list->addLightshow(-1, duration	,	edge0	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge1	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge2	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge3	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge4	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge5	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge6	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge7	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge8	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge9	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge10	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge11	,	lightshow);

}

void	addtoOuterEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow) {
    APL_list->addLightshow(-1, duration	,	edge1	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge4	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge7	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge10	,	lightshow);
    
}

void	addtoInnerEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow) {
    APL_list->addLightshow(-1, duration	,	edge0	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge2	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge3	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge5	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge6	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge8	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge9	,	lightshow);
    APL_list->addLightshow(-1, duration	,	edge11	,	lightshow);
    
}

void borderMarch(eMoonFrame duration, eMoonUpdateFunction prim0, eMoonUpdateFunction prim1, eMoonUpdateFunction prim2) {
    
//    int interval = duration / 2;
//    if (f/interval == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//    }
//    
//    if (f/interval ==	0	) { addtoInnerEdges(interval, prim0);}
//    if (f/interval ==	0	) { addtOuterEdges(interval, prim1);}
//
//    if (f/interval ==	1) { addtoInnerEdges(interval, prim1);}
//    if (f/interval ==	1) { addtOuterEdges(interval, prim2);}

    
        }
