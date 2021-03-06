////
////  mixes.cpp
////  EMoon-Sketch
////
////  Created by Gordon Lescinsky on 28/03/2015.
////  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
////
//
#include "mixes.h"




//
//// >= 512
//int spiralTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    
//    int interval = duration / 8;
//    
//    if (f ==	0	) { mix_list->addLightshow(-1, interval	,	NULL	, &	spiralMix	); }
//    if (f ==	1	) { mix_list->addLightshow(-1, interval	,	NULL	, &	windMix	); }
//
//    if (f ==	2	) { mix_list->addLightshow(-1, interval	,	NULL	, &	spiral0_Mix	); }
//        if (f ==	3	) { mix_list->addLightshow(-1, interval	,	NULL	, &	windyellowMix	); }
//    if (f ==	4	) { mix_list->addLightshow(-1, interval	,	NULL	, &	spiral1_Mix	); }
//    if (f ==	5	) { mix_list->addLightshow(-1, interval	,	NULL	, &	windwhiteMix	); }
//
//    if (f ==	6	) { mix_list->addLightshow(-1, interval	,	NULL	, &	spiral2_Mix	); }
//    if (f ==	7	) { mix_list->addLightshow(-1, interval	,	NULL	, &	flasher_Mix	); }
//
//
//    
//    return interval;
//}
//
//int riseTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    
//    int interval = duration / 8;
//
//    
//    
//    
//    if (f ==	0	) { mix_list->addLightshow(-1, interval	,	NULL	, &	riseMix	); }
//    if (f ==	1	) { mix_list->addLightshow(-1, interval*2	,	NULL	, &	aussieMix	); }
//
//    if (f ==	2	) { mix_list->addLightshow(-1, interval	,	NULL	, &	redriseMix	); }
//    if (f ==	3	) { mix_list->addLightshow(-1, interval	,	NULL	, &	sparkriseMix	); }
////    if (f ==	3	) { mix_list->addLightshow(-1, interval	,	NULL	, &		); }
//    
//    //    if (f ==	4	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	messfallMix	); }
//    //    if (f ==	5	) { mix_list->addLightshow(-1, 128	,	NULL	, &	flasher_Mix	); }
//    //    if (f ==	6	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	mungeMix	); }
//
//    return interval;
//}
//
//void redfadeout(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	red1500	, &red1500		, &red0700		, &	redblack100, &	black000	);}
//    }
//
//void redfadein(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	black000	, &black000		, &redblack100		, &	red0700, &	red1500	);}
//}
//
//int poppyTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 16;
//    
//    if (f ==	0	) { addtoAllPods(interval*2, & redfadein); }
//    if (f ==	3	) { mix_list->addLightshow(-1, interval	,	NULL	, &	blackspot_Mix	); }
//    if (f ==	15	) { addtoAllPods(interval, & redfadeout); }
//    
//    
//    
//    return interval;
//
//
//    
//}
//
//int tetrisTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
// 
//    int interval = duration / 4;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//    }
//    
//    if (f ==	0	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	tetrisOpener	); }
//    if (f ==	1	) { mix_list->addLightshow(-1, interval*	3	,	NULL	, &	tetrisMedley	); }
//    if (f ==	1	) { mix_list->addLightshow(-1, interval*	3	,	NULL	, &	tetrisBorder0	); }
////    if (f ==	4	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	messfallMix	); }
////    if (f ==	5	) { mix_list->addLightshow(-1, 128	,	NULL	, &	flasher_Mix	); }
////    if (f ==	6	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	mungeMix	); }
//
//    return interval;
//}
//
//void popBlueRed(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	blue0015	, &redblack100		, &red1500		, &	red0700, &	red1500	);
//    }
//}
//void popRedBlue(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	red1500	, &blueblack001		, &blue0015		, &	blue0007, &	blue0015	);
//    }
//}
//void popBlueRedBlue(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	blue0015	, &redblack100		, &red1500		, &	red0700, &	blue0015	);
//    }
//}
//void popRedBlueRed(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
//    {	fade4	(f, duration, strip, 	0	, &	red1500	, &blueblack001		, &blue0015		, &	blue0007, &	red1500	);
//    }
//}
//
//void	redsquare0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
//
//void	bluesquare0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	blueblack001	, &	blueblack001	, &	blue0015	, &	blue0007	, &	blue0015	);}
//
//void	borderspeck0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
//    quadsparklefill(f, duration, strip, 0, yellow15150, brown1, darkyellow, blue0015, blue0007);
//}
//
//int redblueFramePop(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//
//    int interval = duration / 16;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//    }
//    
//     if (f ==	0	) { mix_list->addLightshow(-1, interval*14	,	NULL	, &	myMix	); }
//    if (f ==	14	) { addtoAllEdges(interval*2, &borderspeck0);}
//
//    
//    if (f ==	0	) { addtoAllQuads(32, &popRedBlue);}
//    if (f ==	4	) { addtoAllQuads(32, &popBlueRed);}
//    if (f ==	8	) { addtoAllQuads(32, &popRedBlue);}
//    if (f ==	10	) { addtoAllQuads(16, &popBlueRedBlue);}
//    if (f ==	13	) { addtoAllQuads(16, &popBlueRed);}
//    if (f ==	15	) { addtoAllQuads(16, &popRedBlueRed);}
//
//    return interval;
//
//}
//
//void	borderspeck1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
//    quadsparklefill(f, duration, strip, 0, black000, blue0015, blue0007, blue0015, blue0007);
//}
//
//
//int redblueFrameWipe(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//
//    int interval = duration / 16;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//    }
//    
//    
//    if (f ==	0	) { addtoAllPods(interval*6, &redsquare0);}
//    if (f ==	6	) { addtoAllQuads(interval*6, &bluesquare0);}
//    if (f ==	12	) { addtoAllQuads(interval*4, &redsquare0);}
//    
//    if (f ==	6	) { addtoAllEdges(interval, &borderspeck1);}
//    if (f ==	7	) { addtoAllEdges(interval, &h6);}
//    if (f ==	8	) { addtoAllEdges(interval, &h1);}
//    if (f ==	9	) { addtoAllEdges(interval, &aus0);}
//    if (f ==	10	) { addtoAllEdges(interval, &aus7);}
//    if (f ==	11	) { addtoAllEdges(interval, &h6);}
//    if (f ==	12	) { addtoAllEdges(interval, &c3);}
//    if (f ==	13	) { addtoAllEdges(interval, &c6);}
//    if (f ==	14	) { addtoAllEdges(interval, &h1);}
//    if (f ==	15	) { addtoAllEdges(interval, &borderspeck1);}
//
//    return interval;
//
//}
//
//
//int tetrisOpener(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//
//    int interval = duration / 2;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//    }
//    
//    
//    if (f ==	0	) { mix_list->addLightshow(-1, interval	,	NULL	, &	redblueFrameWipe	); }
//    if (f ==	1	) { mix_list->addLightshow(-1, interval	,	NULL	, &	redblueFramePop	); }
//
//    return interval;
//
//}
//
//void	tetriswipe	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
//        everwipe4(f, duration, strip, 0, &yellow15150, &yellow15150, &brown1, &darkyellow, &brown1);
//}
//
//
//
//int tetrisBorder0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//
//    
//    if (f ==	0	) { addtoAllEdges(interval*1, &borderspeck1);}
//    if (f ==	1	) { addtoAllEdges(interval*15, &tetriswipe);}
//
//    if (f ==	16	) { addtoInnerEdges(interval, &	tetriswipe	); addtoOuterEdges(interval, &	g4	);}
//    if (f ==	17	) { addtoInnerEdges(interval, &	g4	); addtoOuterEdges(interval, &	c4	);}
//    if (f ==	18	) { addtoInnerEdges(interval, &	c4	); addtoOuterEdges(interval, &	g5	);}
//    if (f ==	19	) { addtoInnerEdges(interval, &	g5	); addtoOuterEdges(interval, &	c2	);}
//    if (f ==	20	) { addtoInnerEdges(interval, &	c2	); addtoOuterEdges(interval, &	c1	);}
//    if (f ==	21	) { addtoInnerEdges(interval, &	c1	); addtoOuterEdges(interval, &	edgewipe11	);}
//    if (f ==	22	) { addtoInnerEdges(interval, &	edgewipe11	); addtoOuterEdges(interval, &	e1	);}
//    if (f ==	23	) { addtoInnerEdges(interval, &	e1	); addtoOuterEdges(interval, &	edgewipe30	);}
//    if (f ==	24	) { addtoInnerEdges(interval, &	edgewipe30	); addtoOuterEdges(interval, &	aus2	);}
//    if (f ==	25	) { addtoInnerEdges(interval, &	aus2	); addtoOuterEdges(interval, &	aus6	);}
//    if (f ==	26	) { addtoInnerEdges(interval, &	aus6	); addtoOuterEdges(interval, &	aus1	);}
//    if (f ==	27	) { addtoInnerEdges(interval, &	tetriswipe	); addtoOuterEdges(interval, &	edgewipe12	);}
//    if (f ==	28	) { addtoInnerEdges(interval, &	edgewipe12	); addtoOuterEdges(interval, &	b7	);}
//    if (f ==	29	) { addtoInnerEdges(interval, &	b7	); addtoOuterEdges(interval, &	aus0	);}
//    if (f ==	30	) { addtoInnerEdges(interval, &	aus0	); addtoOuterEdges(interval, &	f0	);}
//    if (f ==	31	) { addtoInnerEdges(interval, &	f0	); addtoOuterEdges(interval, &	b5	);}
//
//    return interval;
//
//}
//
//
//
//int tetrisMedley(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    
//    int interval = duration / 8;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//    }
//    
//    if (f ==	0	) { mix_list->addLightshow(-1, interval*	3	,	NULL	, &	tetfall0_Mix	); }
//    if (f ==	3	) { mix_list->addLightshow(-1, interval*	2	,	NULL	, &	tetfall0_Mix	); }
//    if (f ==	5	) { mix_list->addLightshow(-1, interval*	1	,	NULL	, &	tetfall0_Mix	); }
//    if (f ==	6	) { mix_list->addLightshow(-1, interval*	2	,	NULL	, &	tetfall1_Mix	); }
//
//    return interval;
//
//}
//
//int	myMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//
//    int interval = duration / 8;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//    }
//
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	my28	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	my28	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	my30	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	my28	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	my28	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge5	, &	my30	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge6	, &	my28	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge7	, &	my28	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge8	, &	my30	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	edge9	, &	my28	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	edge10	, &	my28	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	edge11	, &	my30	); }
//      
//
//    return interval;
//
//}
//
//
//
//
//int	munge1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//    
//    
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	munge1_1	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	4	,	pod1	, &	munge1_2	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	munge1_3	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod3	, &	munge1_4	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	2	,	edge4	, &	munge1_5	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	2	,	edge5	, &	munge1_6	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	6	,	edge6	, &	munge1_7	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	3	,	edge7	, &	munge1_8	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	7	,	edge8	, &	munge1_9	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	edge9	, &	munge1_10	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod10	, &	munge1_11	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	5	,	pod11	, &	munge1_12	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	pod12	, &	munge1_13	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	2	,	pod13	, &	munge1_14	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	pod14	, &	munge1_15	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	edge11	, &	munge1_16	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	munge1_17	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	16	,	pod1	, &	munge1_18	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod2	, &	munge1_19	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	3	,	pod3	, &	munge1_20	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	munge1_21	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	2	,	edge5	, &	munge1_22	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	3	,	pod6	, &	munge1_23	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	pod7	, &	munge1_24	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	3	,	pod8	, &	munge1_25	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	2	,	pod9	, &	munge1_26	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	2	,	edge10	, &	munge1_27	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	7	,	pod11	, &	munge1_28	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	munge1_29	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	pod13	, &	munge1_30	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	3	,	pod14	, &	munge1_31	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	8	,	edge11	, &	munge1_32	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	2	,	edge0	, &	munge1_33	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	3	,	pod1	, &	munge1_34	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	munge1_35	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	5	,	pod3	, &	munge1_36	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	3	,	pod4	, &	munge1_37	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	pod5	, &	munge1_38	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	3	,	edge6	, &	munge1_39	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	edge7	, &	munge1_40	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod8	, &	munge1_41	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	munge1_42	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	edge10	, &	munge1_43	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	3	,	edge11	, &	munge1_44	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_45	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	2	,	edge1	, &	munge1_46	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	3	,	edge2	, &	munge1_47	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	edge0	, &	munge1_48	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	munge1_49	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	edge2	, &	munge1_50	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	edge3	, &	munge1_51	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	2	,	edge4	, &	munge1_52	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	edge5	, &	munge1_53	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	pod6	, &	munge1_54	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	edge7	, &	munge1_55	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	pod8	, &	munge1_56	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod9	, &	munge1_57	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod10	, &	munge1_58	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod11	, &	munge1_59	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod12	, &	munge1_60	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod13	, &	munge1_61	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge1_62	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	5	,	pod15	, &	munge1_63	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	munge1_64	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	munge1_65	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	4	,	edge2	, &	munge1_66	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_67	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	munge1_68	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	2	,	edge5	, &	munge1_69	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	2	,	edge6	, &	munge1_70	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	6	,	edge7	, &	munge1_71	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	3	,	edge8	, &	munge1_72	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	7	,	edge9	, &	munge1_73	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod10	, &	munge1_74	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	edge11	, &	munge1_75	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	5	,	pod12	, &	munge1_76	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	edge5	, &	munge1_77	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	2	,	edge4	, &	munge1_78	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	pod15	, &	munge1_79	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	pod0	, &	munge1_80	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	2	,	edge1	, &	munge1_81	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	16	,	pod2	, &	munge1_82	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_83	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	3	,	pod4	, &	munge1_84	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge5	, &	munge1_85	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	2	,	edge6	, &	munge1_86	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	munge1_87	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	munge1_88	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	3	,	edge9	, &	munge1_89	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	2	,	pod10	, &	munge1_90	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod11	, &	munge1_91	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	7	,	edge6	, &	munge1_92	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	munge1_93	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	edge7	, &	munge1_94	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	3	,	edge8	, &	munge1_95	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	munge1_96	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	2	,	edge1	, &	munge1_97	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	3	,	pod2	, &	munge1_98	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_99	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	5	,	pod4	, &	munge1_100	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	5	,	pod5	, &	munge1_101	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	edge6	, &	munge1_102	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	3	,	edge7	, &	munge1_103	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	edge8	, &	munge1_104	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod9	, &	munge1_105	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	6	,	edge10	, &	munge1_106	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	munge1_107	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	munge1_108	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	munge1_109	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge1_110	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	3	,	edge5	, &	munge1_111	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	munge1_112	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	munge1_113	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod2	, &	munge1_114	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	edge3	, &	munge1_115	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	pod4	, &	munge1_116	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	pod5	, &	munge1_117	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	edge6	, &	munge1_118	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	edge7	, &	munge1_119	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	pod8	, &	munge1_120	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod9	, &	munge1_121	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	edge10	, &	munge1_122	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod11	, &	munge1_123	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod12	, &	munge1_124	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod13	, &	munge1_125	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge1_126	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	2	,	edge2	, &	munge1_127	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	munge1_128	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	munge1_129	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	4	,	pod2	, &	munge1_130	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_131	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod4	, &	munge1_132	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	2	,	edge5	, &	munge1_133	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	2	,	pod6	, &	munge1_134	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	6	,	edge7	, &	munge1_135	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	3	,	pod8	, &	munge1_136	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	7	,	pod9	, &	munge1_137	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	edge10	, &	munge1_138	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	munge1_139	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	5	,	pod12	, &	munge1_140	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	edge3	, &	munge1_141	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge1_142	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	edge4	, &	munge1_143	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	pod0	, &	munge1_144	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	munge1_145	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	16	,	pod2	, &	munge1_146	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod3	, &	munge1_147	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	3	,	edge4	, &	munge1_148	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod5	, &	munge1_149	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	2	,	pod6	, &	munge1_150	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	munge1_151	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	munge1_152	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	3	,	pod9	, &	munge1_153	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	2	,	pod10	, &	munge1_154	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	2	,	edge11	, &	munge1_155	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	7	,	pod12	, &	munge1_156	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge7	, &	munge1_157	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	pod14	, &	munge1_158	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	3	,	pod8	, &	munge1_159	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	munge1_160	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	munge1_161	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	3	,	pod2	, &	munge1_162	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	munge1_163	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	5	,	pod4	, &	munge1_164	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	5	,	pod5	, &	munge1_165	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	edge6	, &	munge1_166	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	munge1_167	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod8	, &	munge1_168	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod9	, &	munge1_169	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	6	,	edge10	, &	munge1_170	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	munge1_171	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	munge1_172	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	edge9	, &	munge1_173	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge1_174	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	3	,	pod15	, &	munge1_175	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	edge0	, &	munge1_176	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	munge1_177	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	edge2	, &	munge1_178	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	pod3	, &	munge1_179	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	pod4	, &	munge1_180	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	pod5	, &	munge1_181	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	edge6	, &	munge1_182	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	pod7	, &	munge1_183	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	pod8	, &	munge1_184	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod9	, &	munge1_185	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod10	, &	munge1_186	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod11	, &	munge1_187	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	edge3	, &	munge1_188	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod13	, &	munge1_189	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	edge2	, &	munge1_190	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	2	,	pod15	, &	munge1_191	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	munge1_192	); }
//    return interval;
//
//}
//
//// try 2048-512
//int	mungeMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod1	, &	munge1	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	4	,	pod2	, &	munge2	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	munge3	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod4	, &	munge4	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	2	,	edge7	, &	munge5	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	2	,	pod6	, &	munge6	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	6	,	edge11	, &	munge7	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	3	,	edge5	, &	munge8	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	7	,	edge3	, &	munge9	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	munge10	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	munge11	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	5	,	pod8	, &	munge12	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	pod10	, &	munge13	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	2	,	pod11	, &	munge14	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	pod14	, &	munge15	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	8	,	edge1	, &	munge16	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	2	,	pod5	, &	munge17	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	16	,	edge2	, &	munge18	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	munge19	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	3	,	edge4	, &	munge20	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod15	, &	munge21	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	2	,	pod3	, &	munge22	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	munge23	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	munge24	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	3	,	edge9	, &	munge25	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	2	,	edge10	, &	munge26	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod9	, &	munge27	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	7	,	edge11	, &	munge28	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge6	, &	munge29	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	pod1	, &	munge30	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	3	,	pod2	, &	munge31	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	munge32	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	2	,	pod4	, &	munge33	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	3	,	edge7	, &	munge34	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod6	, &	munge35	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	5	,	edge11	, &	munge36	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	5	,	edge5	, &	munge37	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	edge3	, &	munge38	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	munge39	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	munge40	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod8	, &	munge41	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	6	,	pod10	, &	munge42	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	munge43	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod14	, &	munge44	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	munge45	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	2	,	pod5	, &	munge46	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	3	,	edge2	, &	munge47	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	edge0	, &	munge48	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	edge4	, &	munge49	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod15	, &	munge50	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	pod3	, &	munge51	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	5	,	pod7	, &	munge52	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	edge8	, &	munge53	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	munge54	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	edge10	, &	munge55	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	5	,	pod9	, &	munge56	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	edge0	, &	munge57	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	edge6	, &	munge58	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	munge59	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	3	,	edge2	, &	munge60	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod8	, &	munge61	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod8	, &	munge62	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	2	,	pod14	, &	munge63	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	munge64	); }
//    return interval;
//
//}
//
//
//// use 1024 with Tetris shows
//
int	messfallMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 32;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
        APL_list->addLightshow(p, interval*17, NULL, &wait);
        APL_list->addLightshow(p, interval*18, NULL, &wait);
        APL_list->addLightshow(p, interval*19, NULL, &wait);
        APL_list->addLightshow(p, interval*20, NULL, &wait);
        APL_list->addLightshow(p, interval*21, NULL, &wait);
        APL_list->addLightshow(p, interval*22, NULL, &wait);
        APL_list->addLightshow(p, interval*23, NULL, &wait);
        APL_list->addLightshow(p, interval*24, NULL, &wait);
        APL_list->addLightshow(p, interval*25, NULL, &wait);
        APL_list->addLightshow(p, interval*26, NULL, &wait);
        APL_list->addLightshow(p, interval*27, NULL, &wait);
        APL_list->addLightshow(p, interval*28, NULL, &wait);
        APL_list->addLightshow(p, interval*29, NULL, &wait);
        APL_list->addLightshow(p, interval*30, NULL, &wait);
        APL_list->addLightshow(p, interval*31, NULL, &wait);
        APL_list->addLightshow(p, interval*32, NULL, &wait);
    }

    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall1	); }
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall2	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall3	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall4	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall5	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall6	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall7	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall8	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall9	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall10	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall11	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	5	,	pod0	, &	messfall12	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall13	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall14	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall15	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall16	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall17	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall18	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall19	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall20	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall21	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall22	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall23	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall24	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall25	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall26	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall27	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall28	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall29	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall30	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall31	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall32	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall33	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall34	); }
    if (f/interval ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall35	); }
    if (f/interval ==	17	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall36	); }
    if (f/interval ==	18	) { APL_list->addLightshow(-1, interval*	5	,	pod0	, &	messfall37	); }
    if (f/interval ==	18	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall38	); }
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall39	); }
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall40	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall41	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall42	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall43	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall44	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall45	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall46	); }
    if (f/interval ==	23	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall47	); }
    if (f/interval ==	23	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall48	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall49	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall50	); }
    if (f/interval ==	25	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall51	); }
    if (f/interval ==	25	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall52	); }
    if (f/interval ==	26	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall53	); }
    if (f/interval ==	26	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	messfall54	); }
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	messfall55	); }
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall56	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall57	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall58	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall59	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall60	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall61	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall62	); }
    if (f/interval ==	31	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	messfall63	); }
    if (f/interval ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	messfall64	); }
    return interval;
}
//
//
//int	tetfall1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f/interval == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//
//    
//    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	tetfall1_1	); }
//    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_2	); }
//    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_3	); }
//    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_4	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_5	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_6	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_7	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_8	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_9	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_10	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_11	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_12	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_13	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_14	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_15	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_16	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_17	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_18	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_19	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_20	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_21	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_22	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_23	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_24	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_25	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_26	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_27	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_28	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_29	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_30	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_31	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_32	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_33	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_34	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_35	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_36	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_37	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_38	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_39	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_40	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_41	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_42	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_43	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_44	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_45	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_46	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_47	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_48	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_49	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_50	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_51	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_52	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_53	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_54	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_55	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_56	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_57	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_58	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_59	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_60	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_61	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_62	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_63	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall1_64	); }
//    
//
//    
//    return interval;
//
//}
//
//
//int	tetfall0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//        
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	32	,	pod0	, &	tetfall0_1	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall0_2	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	4	,	pod0	, &	tetfall0_3	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	tetfall0_4	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	tetfall0_5	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	3	,	pod0	, &	tetfall0_6	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_7	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_8	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_9	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_10	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_11	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_12	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_13	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_14	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	tetfall0_15	); }
//    if (f ==	32	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	tetfall0_16	); }
//
//    return interval;
//
//}
//
//
int	flasher_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 32;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
        APL_list->addLightshow(p, interval*17, NULL, &wait);
        APL_list->addLightshow(p, interval*18, NULL, &wait);
        APL_list->addLightshow(p, interval*19, NULL, &wait);
        APL_list->addLightshow(p, interval*20, NULL, &wait);
        APL_list->addLightshow(p, interval*21, NULL, &wait);
        APL_list->addLightshow(p, interval*22, NULL, &wait);
        APL_list->addLightshow(p, interval*23, NULL, &wait);
        APL_list->addLightshow(p, interval*24, NULL, &wait);
        APL_list->addLightshow(p, interval*25, NULL, &wait);
        APL_list->addLightshow(p, interval*26, NULL, &wait);
        APL_list->addLightshow(p, interval*27, NULL, &wait);
        APL_list->addLightshow(p, interval*28, NULL, &wait);
        APL_list->addLightshow(p, interval*29, NULL, &wait);
        APL_list->addLightshow(p, interval*30, NULL, &wait);
        APL_list->addLightshow(p, interval*31, NULL, &wait);
        APL_list->addLightshow(p, interval*32, NULL, &wait);
    }
    
    
    
    
    
    
    
    
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_1	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_2	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_3	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_4	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_5	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_6	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_7	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_8	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_9	); }
    if (f/interval ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_10	); }
    if (f/interval ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_11	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_12	); }
    if (f/interval ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_13	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	flasher_14	); }
    return interval;
}
//
//
//
//int	field0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_1	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_2	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_3	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_4	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_5	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_6	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_7	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_8	); }
//    
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_10	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_11	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_12	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_13	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_14	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_15	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_16	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_17	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_18	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_19	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_20	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_21	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_22	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_23	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_24	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_25	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_26	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_27	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_28	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_29	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_30	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_31	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_32	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_33	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_34	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_35	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_36	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_37	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_38	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_39	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_40	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_41	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_42	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_43	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_44	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_45	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_46	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_47	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_48	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_49	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_50	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_51	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_52	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_53	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_54	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_55	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_56	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_57	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_58	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_59	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_60	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_61	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_62	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_64	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_65	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_66	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_67	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_68	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_69	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_70	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_71	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_72	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_73	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_74	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_75	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_76	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_77	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_78	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_79	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_80	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_81	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_82	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_83	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_84	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_85	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_86	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_87	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_88	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_89	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_90	); }
//    
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_92	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_93	); }
//    
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_95	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_96	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_97	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_98	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_99	); }
//    
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_101	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_102	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_103	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_104	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_105	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_106	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_107	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_108	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_109	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_110	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_111	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_112	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_113	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_114	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_115	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	field0_116	); }
//    return interval;
//
//}
//

void	spiral2_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 32;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
        APL_list->addLightshow(p, interval*17, NULL, &wait);
        APL_list->addLightshow(p, interval*18, NULL, &wait);
        APL_list->addLightshow(p, interval*19, NULL, &wait);
        APL_list->addLightshow(p, interval*20, NULL, &wait);
        APL_list->addLightshow(p, interval*21, NULL, &wait);
        APL_list->addLightshow(p, interval*22, NULL, &wait);
        APL_list->addLightshow(p, interval*23, NULL, &wait);
        APL_list->addLightshow(p, interval*24, NULL, &wait);
        APL_list->addLightshow(p, interval*25, NULL, &wait);
        APL_list->addLightshow(p, interval*26, NULL, &wait);
        APL_list->addLightshow(p, interval*27, NULL, &wait);
        APL_list->addLightshow(p, interval*28, NULL, &wait);
        APL_list->addLightshow(p, interval*29, NULL, &wait);
        APL_list->addLightshow(p, interval*30, NULL, &wait);
        APL_list->addLightshow(p, interval*31, NULL, &wait);
        APL_list->addLightshow(p, interval*32, NULL, &wait);
    }

    
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_0	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_1	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_2	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_3	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_4	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_5	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_6	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_7	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_8	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_9	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_10	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_11	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_12	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_13	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_14	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_15	); }
    if (f/interval ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_16	); }
    if (f/interval ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_17	); }
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_18	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_19	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_20	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_21	); }
    if (f/interval ==	23	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_22	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_23	); }
    if (f/interval ==	25	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_24	); }
    if (f/interval ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_25	); }
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_26	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_27	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_28	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_29	); }
    if (f/interval ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_30	); }
    if (f/interval ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_31	); }
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_32	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_33	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_34	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_35	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_36	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_37	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_38	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_39	); }
    
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_41	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_42	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_43	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_44	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_45	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_46	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_47	); }
    
    if (f/interval ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_49	); }
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_50	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_51	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_52	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_53	); }
    if (f/interval ==	23	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_54	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_55	); }
    
    if (f/interval ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_57	); }
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_58	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_59	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_60	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_61	); }
    if (f/interval ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_62	); }
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_64	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_65	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_66	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_67	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_68	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_69	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_70	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_71	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_72	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_73	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_74	); }
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_75	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_76	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_77	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_78	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_79	); }
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_80	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_81	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_82	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_83	); }
    
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_85	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_86	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_87	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_88	); }
    
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_90	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_91	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_92	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_93	); }
    
    if (f/interval ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_95	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_96	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_97	); }
    if (f/interval ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_98	); }
    
    if (f/interval ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_100	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_101	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_102	); }
    if (f/interval ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_103	); }
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_104	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_105	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_106	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_107	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_108	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_109	); }
    if (f/interval ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_110	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_111	); }
    if (f/interval ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_112	); }
    if (f/interval ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_113	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_114	); }
    if (f/interval ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_115	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_116	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_117	); }
    if (f/interval ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_118	); }
    if (f/interval ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral2_119	); }

}



void	spiral1_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);

    }
    
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_0	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_1	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_2	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_3	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_4	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_5	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_6	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_7	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_8	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_9	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_10	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_11	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_12	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_13	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_14	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral1_15	); }
    
    

    
    
}



void	spiral0_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
    }
    
    
    
    if (f/ interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge7	, &	spiral0_0	); }
    if (f/ interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge8	, &	spiral0_1	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge6	, &	spiral0_2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	spiral0_3	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	spiral0_4	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod14	, &	spiral0_5	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod15	, &	spiral0_6	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	edge9	, &	spiral0_7	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	1	,	edge5	, &	spiral0_8	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod8	, &	spiral0_9	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod9	, &	spiral0_10	); }
    if (f/ interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod10	, &	spiral0_11	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	spiral0_12	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	spiral0_13	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge10	, &	spiral0_14	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod4	, &	spiral0_15	); }
    
    
    
    
    
}


// use 512
void	spiralMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
        APL_list->addLightshow(p, interval, NULL, &wait);
    }
    
    
    
    if (f/ interval ==	0	) { APL_list->addLightshow(-1, interval*	1	,	edge7	, &	spiral0	); }
    if (f/ interval ==	1	) { APL_list->addLightshow(-1, interval*	1	,	edge8	, &	spiral1	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	1	,	edge6	, &	spiral2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod12	, &	spiral3	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod13	, &	spiral4	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod14	, &	spiral5	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod15	, &	spiral6	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	1	,	edge9	, &	spiral7	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	1	,	edge5	, &	spiral8	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod8	, &	spiral9	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod9	, &	spiral10	); }
    if (f/ interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod10	, &	spiral11	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod11	, &	spiral12	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	1	,	edge4	, &	spiral13	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge10	, &	spiral14	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod4	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod1	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod2	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod3	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod5	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod6	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod7	, &	spiral15	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge3	, &	spiral2	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge11	, &	spiral2	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	spiral2	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	spiral2	); }
    if (f/ interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	spiral2	); }
    

}


int	sparkriseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;


    
    if (f/ interval ==	0	) { APL_list->addLightshow(-1, interval*	10	,	edge7	, &	sparkrise0	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	8	,	edge8	, &	sparkrise1	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	8	,	edge6	, &	sparkrise2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	7	,	pod12	, &	sparkrise0	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	7	,	pod13	, &	sparkrise1	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	7	,	pod14	, &	sparkrise2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	7	,	pod15	, &	sparkrise0	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	sparkrise1	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	6	,	edge5	, &	sparkrise0	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	5	,	pod8	, &	sparkrise1	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	5	,	pod9	, &	sparkrise2	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	5	,	pod10	, &	sparkrise0	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	5	,	pod11	, &	sparkrise0	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	4	,	edge4	, &	sparkrise1	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	4	,	edge10	, &	sparkrise2	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	3	,	pod4	, &	sparkrise0	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	3	,	pod5	, &	sparkrise0	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	3	,	pod6	, &	sparkrise1	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	3	,	pod7	, &	sparkrise0	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	2	,	edge3	, &	sparkrise1	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	2	,	edge11	, &	sparkrise2	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	sparkrise0	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod1	, &	sparkrise1	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod2	, &	sparkrise0	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod3	, &	sparkrise1	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	sparkrise2	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	sparkrise0	); }
    if (f/ interval ==	11	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	sparkrise1	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge7	, &	sparkrise28	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	sparkrise29	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge6	, &	sparkrise30	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	3	,	pod12	, &	sparkrise28	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	4	,	pod13	, &	sparkrise29	); }
    if (f/ interval ==	12	) { APL_list->addLightshow(-1, interval*	3	,	pod14	, &	sparkrise30	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod15	, &	sparkrise28	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	edge9	, &	sparkrise29	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	edge5	, &	sparkrise30	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	3	,	pod8	, &	sparkrise28	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod9	, &	sparkrise29	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod10	, &	sparkrise30	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	3	,	pod11	, &	sparkrise28	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	3	,	edge4	, &	sparkrise29	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	3	,	edge10	, &	sparkrise30	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod4	, &	sparkrise28	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod5	, &	sparkrise29	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod6	, &	sparkrise30	); }
    if (f/ interval ==	13	) { APL_list->addLightshow(-1, interval*	2	,	pod7	, &	sparkrise30	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	2	,	edge3	, &	sparkrise28	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	2	,	edge11	, &	sparkrise29	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	2	,	pod0	, &	sparkrise30	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	sparkrise29	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod2	, &	sparkrise29	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod3	, &	sparkrise30	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	sparkrise28	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge2	, &	sparkrise29	); }
    if (f/ interval ==	14	) { APL_list->addLightshow(-1, interval*	1	,	edge1	, &	sparkrise30	); }

    return interval;

}

int	redriseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
    }
    
    
    
    
    
    
    
    
    if (f/ interval ==	0	) { APL_list->addLightshow(-1, interval*	14	,	edge7	, &	redrise0	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	12	,	edge8	, &	redrise1	); }
    if (f/ interval ==	2	) { APL_list->addLightshow(-1, interval*	12	,	edge6	, &	redrise2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	11	,	pod12	, &	redrise0	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	11	,	pod13	, &	redrise2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	11	,	pod14	, &	redrise2	); }
    if (f/ interval ==	3	) { APL_list->addLightshow(-1, interval*	11	,	pod15	, &	redrise0	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	10	,	edge9	, &	redrise1	); }
    if (f/ interval ==	4	) { APL_list->addLightshow(-1, interval*	10	,	edge5	, &	redrise1	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	9	,	pod8	, &	redrise0	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	9	,	pod9	, &	redrise2	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	9	,	pod10	, &	redrise1	); }
    if (f/ interval ==	5	) { APL_list->addLightshow(-1, interval*	9	,	pod11	, &	redrise2	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	8	,	edge4	, &	redrise1	); }
    if (f/ interval ==	6	) { APL_list->addLightshow(-1, interval*	8	,	edge10	, &	redrise1	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	7	,	pod4	, &	redrise0	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	7	,	pod5	, &	redrise2	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	7	,	pod6	, &	redrise1	); }
    if (f/ interval ==	7	) { APL_list->addLightshow(-1, interval*	7	,	pod7	, &	redrise0	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	6	,	edge3	, &	redrise1	); }
    if (f/ interval ==	8	) { APL_list->addLightshow(-1, interval*	6	,	edge11	, &	redrise1	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	5	,	pod0	, &	redrise0	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	5	,	pod1	, &	redrise1	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	5	,	pod2	, &	redrise0	); }
    if (f/ interval ==	9	) { APL_list->addLightshow(-1, interval*	5	,	pod3	, &	redrise2	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	4	,	edge0	, &	redrise1	); }
    if (f/ interval ==	10	) { APL_list->addLightshow(-1, interval*	4	,	edge2	, &	redrise1	); }
    if (f/ interval ==	11	) { APL_list->addLightshow(-1, interval*	3	,	edge1	, &	redrise1	); }
    return interval;

    
    
}


// use 512
void	riseMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
    }
    
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	16	,	edge7	, &	rise0	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	14	,	edge8	, &	rise1	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	14	,	edge6	, &	rise2	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	13	,	pod12	, &	rise0	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	13	,	pod13	, &	rise2	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	13	,	pod14	, &	rise1	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	13	,	pod15	, &	rise0	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	12	,	edge9	, &	rise2	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	12	,	edge5	, &	rise0	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	11	,	pod8	, &	rise0	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	11	,	pod9	, &	rise2	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	11	,	pod10	, &	rise1	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	11	,	pod11	, &	rise0	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	10	,	edge4	, &	rise2	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	10	,	edge10	, &	rise1	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	9	,	pod4	, &	rise0	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	9	,	pod5	, &	rise2	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	9	,	pod6	, &	rise1	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	9	,	pod7	, &	rise0	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	8	,	edge3	, &	rise2	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	8	,	edge11	, &	rise0	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	7	,	pod0	, &	rise0	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	7	,	pod1	, &	rise2	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	7	,	pod2	, &	rise1	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	7	,	pod3	, &	rise0	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	6	,	edge0	, &	rise2	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	6	,	edge2	, &	rise0	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	5	,	edge1	, &	rise1	); }
    

    
}
//
//
//
//
//
//
//
// use 128 to 412
void	windMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    int interval = duration / 16;
    if (f == 0) {
        APL_list->addLightshow(p, interval*1, NULL, &wait);
        APL_list->addLightshow(p, interval*2, NULL, &wait);
        APL_list->addLightshow(p, interval*3, NULL, &wait);
        APL_list->addLightshow(p, interval*4, NULL, &wait);
        APL_list->addLightshow(p, interval*5, NULL, &wait);
        APL_list->addLightshow(p, interval*6, NULL, &wait);
        APL_list->addLightshow(p, interval*7, NULL, &wait);
        APL_list->addLightshow(p, interval*8, NULL, &wait);
        APL_list->addLightshow(p, interval*9, NULL, &wait);
        APL_list->addLightshow(p, interval*10, NULL, &wait);
        APL_list->addLightshow(p, interval*11, NULL, &wait);
        APL_list->addLightshow(p, interval*12, NULL, &wait);
        APL_list->addLightshow(p, interval*13, NULL, &wait);
        APL_list->addLightshow(p, interval*14, NULL, &wait);
        APL_list->addLightshow(p, interval*15, NULL, &wait);
        APL_list->addLightshow(p, interval*16, NULL, &wait);
								
								
    }
    if (f/interval ==	0	) { APL_list->addLightshow(-1, interval*	16	,	edge4	, &	wind0	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	15	,	edge5	, &	wind0	); }
    if (f/interval ==	1	) { APL_list->addLightshow(-1, interval*	15	,	pod15	, &	wind0	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	9	,	edge6	, &	wind0	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	14	,	pod14	, &	wind0	); }
    if (f/interval ==	2	) { APL_list->addLightshow(-1, interval*	13	,	pod11	, &	wind0	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	9	,	edge7	, &	wind0	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	12	,	pod13	, &	wind0	); }
    if (f/interval ==	3	) { APL_list->addLightshow(-1, interval*	12	,	pod10	, &	wind0	); }
    if (f/interval ==	4	) { APL_list->addLightshow(-1, interval*	11	,	pod7	, &	wind0	); }
    if (f/interval ==	5	) { APL_list->addLightshow(-1, interval*	10	,	pod12	, &	wind0	); }
    if (f/interval ==	6	) { APL_list->addLightshow(-1, interval*	9	,	pod9	, &	wind0	); }
    if (f/interval ==	7	) { APL_list->addLightshow(-1, interval*	8	,	edge3	, &	wind0	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	6	,	pod3	, &	wind0	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	7	,	pod2	, &	wind0	); }
    if (f/interval ==	8	) { APL_list->addLightshow(-1, interval*	8	,	pod8	, &	wind0	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	6	,	pod4	, &	wind0	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	wind0	); }
    if (f/interval ==	9	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	wind0	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	4	,	edge10	, &	wind0	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	6	,	edge11	, &	wind0	); }
    if (f/interval ==	10	) { APL_list->addLightshow(-1, interval*	6	,	pod6	, &	wind0	); }
    if (f/interval ==	11	) { APL_list->addLightshow(-1, interval*	5	,	pod5	, &	wind0	); }
    if (f/interval ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge2	, &	wind0	); }
    if (f/interval ==	13	) { APL_list->addLightshow(-1, interval*	3	,	edge1	, &	wind0	); }
    if (f/interval ==	14	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	wind0	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	wind0	); }
    if (f/interval ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	wind0	); }
    

    
}
//
//
//int	windyellowMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 16;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//								
//								
//    }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	16	,	edge4	, &	windyellow0	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	15	,	edge5	, &	windyellow0	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	15	,	pod15	, &	windyellow0	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	9	,	edge6	, &	windyellow0	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	14	,	pod14	, &	windyellow0	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	13	,	pod11	, &	windyellow0	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	9	,	edge7	, &	windyellow0	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	12	,	pod13	, &	windyellow0	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	12	,	pod10	, &	windyellow0	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	11	,	pod7	, &	windyellow0	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	10	,	pod12	, &	windyellow0	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	9	,	pod9	, &	windyellow0	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	8	,	edge3	, &	windyellow0	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	6	,	pod3	, &	windyellow0	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	7	,	pod2	, &	windyellow0	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	8	,	pod8	, &	windyellow0	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	6	,	pod4	, &	windyellow0	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	4	,	edge8	, &	windyellow0	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	windyellow0	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	4	,	edge10	, &	windyellow0	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	6	,	edge11	, &	windyellow0	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	6	,	pod6	, &	windyellow0	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	5	,	pod5	, &	windyellow0	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge2	, &	windyellow0	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	3	,	edge1	, &	windyellow0	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	2	,	pod1	, &	windyellow0	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	windyellow0	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	edge0	, &	windyellow0	); }
//    
//    return interval;
//
//    
//}
//
//int	windwhiteMix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 16;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	16	,	edge1	, &	windwhite0	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	15	,	edge4	, &	windwhite1	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	15	,	pod13	, &	windwhite2	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	9	,	edge7	, &	windwhite0	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	14	,	edge2	, &	windwhite0	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	13	,	pod14	, &	windwhite1	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	9	,	edge0	, &	windwhite2	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	12	,	edge3	, &	windwhite1	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	12	,	pod2	, &	windwhite0	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	11	,	edge10	, &	windwhite0	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	10	,	pod0	, &	windwhite1	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	9	,	pod12	, &	windwhite2	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	8	,	pod15	, &	windwhite1	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	6	,	edge9	, &	windwhite0	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	7	,	pod10	, &	windwhite0	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	8	,	pod11	, &	windwhite1	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	6	,	edge11	, &	windwhite2	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	4	,	pod9	, &	windwhite1	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	6	,	edge5	, &	windwhite0	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	4	,	pod7	, &	windwhite0	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	6	,	pod1	, &	windwhite1	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	6	,	pod8	, &	windwhite2	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	5	,	pod6	, &	windwhite1	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	4	,	edge6	, &	windwhite0	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	3	,	edge8	, &	windwhite0	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	2	,	pod3	, &	windwhite1	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod4	, &	windwhite2	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod5	, &	windwhite1	); }
//    
//    return interval;
//
//    
//}
//
//
//
//
//int aussieMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    
//    int interval = duration / 8;
//    
//    
//    switch ( f ) {
//        case 0:
//            APL_list->addLightshow(p, interval*3, pod0, &aus0);
//            APL_list->addLightshow(-1, interval*3, pod1, &aus1);
//            APL_list->addLightshow(-1, interval*3, pod2, &aus2);
//            APL_list->addLightshow(-1, interval*3, pod3, &aus3);
//            APL_list->addLightshow(-1, interval*3, pod4, &aus4);
//            APL_list->addLightshow(-1, interval*3, pod5, &aus5);
//            APL_list->addLightshow(-1, interval*3, pod6, &aus6);
//            APL_list->addLightshow(-1, interval*3, pod7, &aus7);
//            
//            APL_list->addLightshow(-1, interval*3, pod8, &aus0);
//            APL_list->addLightshow(-1, interval*3, pod9, &aus1);
//            APL_list->addLightshow(-1, interval*3, pod10, &aus2);
//            APL_list->addLightshow(-1, interval*3, pod11, &aus3);
//            APL_list->addLightshow(-1, interval*3, pod12, &aus4);
//            APL_list->addLightshow(-1, interval*3, pod13, &aus5);
//            APL_list->addLightshow(-1, interval*3, pod14, &aus6);
//            APL_list->addLightshow(-1, interval*3, pod15, &aus7);
//            
//            APL_list->addLightshow(p, interval, edge0, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge1, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge2, &auswipe0);
//            
//            APL_list->addLightshow(-1, interval, edge3, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge4, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge5, &auswipe0);
//            
//            APL_list->addLightshow(-1, interval, edge6, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge7, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge8, &auswipe0);
//            
//            APL_list->addLightshow(-1, interval, edge9, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge10, &auswipe0);
//            APL_list->addLightshow(-1, interval, edge11, &auswipe0);
//            
//            
//            break;
//        case 1:
//            
//            
//            APL_list->addLightshow(p, interval, edge0, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge1, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge2, &auswipe2);
//            
//            
//            break;
//        case 2:
//            
//            
//            APL_list->addLightshow(p, interval, edge3, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge4, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge5, &auswipe2);
//            
//            
//            break;
//        case 3:
//            
//            APL_list->addLightshow(p, interval, edge6, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge7, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge8, &auswipe2);
//            
//            break;
//        case 4:
//            APL_list->addLightshow(p, interval, edge9, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge10, &auswipe1);
//            APL_list->addLightshow(-1, interval, edge11, &auswipe2);
//
//            APL_list->addLightshow(p, interval*4, pod0, &aus0);
//            APL_list->addLightshow(-1, interval*4, pod1, &aus1);
//            APL_list->addLightshow(-1, interval*4, pod2, &aus2);
//            APL_list->addLightshow(-1, interval*4, pod3, &aus3);
//            APL_list->addLightshow(-1, interval*4, pod4, &aus4);
//            APL_list->addLightshow(-1, interval*4, pod5, &aus5);
//            APL_list->addLightshow(-1, interval*4, pod6, &aus6);
//            APL_list->addLightshow(-1, interval*4, pod7, &aus7);
//            
//            APL_list->addLightshow(-1, interval*4, pod8, &aus0);
//            APL_list->addLightshow(-1, interval*4, pod9, &aus1);
//            APL_list->addLightshow(-1, interval*4, pod10, &aus2);
//            APL_list->addLightshow(-1, interval*4, pod11, &aus3);
//            APL_list->addLightshow(-1, interval*4, pod12, &aus4);
//            APL_list->addLightshow(-1, interval*4, pod13, &aus5);
//            APL_list->addLightshow(-1, interval*4, pod14, &aus6);
//            APL_list->addLightshow(-1, interval*4, pod15, &aus7);
//            break;
//                case 7:
//            
//            
//            APL_list->addLightshow(-1, interval, edge0, &auswipe30);
//            APL_list->addLightshow(-1, interval, edge1, &auswipe31);
//            APL_list->addLightshow(-1, interval, edge2, &auswipe31);
//            
//            APL_list->addLightshow(-1, interval, edge3, &auswipe30);
//            APL_list->addLightshow(-1, interval, edge4, &auswipe32);
//            APL_list->addLightshow(-1, interval, edge5, &auswipe30);
//            
//            APL_list->addLightshow(-1, interval, edge6, &auswipe31);
//            APL_list->addLightshow(-1, interval, edge7, &auswipe30);
//            APL_list->addLightshow(-1, interval, edge8, &auswipe31);
//            
//            APL_list->addLightshow(-1, interval, edge9, &auswipe31);
//            APL_list->addLightshow(-1, interval, edge10, &auswipe31);
//            APL_list->addLightshow(-1, interval, edge11, &auswipe32);
//            
//            break;
//            
//        default:
//            break;
//    }
//    return interval;
//
//}
//
//int masterMix(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 8;
//    
//
//    int edgeInterval = interval * 2;
//    
//    
//    switch ( f ) {
//        case 0:
//            APL_list->addLightshow(p, interval, pod0, &a0);
//            APL_list->addLightshow(-1, interval, pod1, &a1);
//            APL_list->addLightshow(-1, interval, pod2, &a2);
//            APL_list->addLightshow(-1, interval, pod3, &a3);
//            APL_list->addLightshow(-1, interval, pod4, &a4);
//            APL_list->addLightshow(-1, interval, pod5, &a5);
//            APL_list->addLightshow(-1, interval, pod6, &a6);
//            APL_list->addLightshow(-1, interval, pod7, &a7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &a0);
//            APL_list->addLightshow(-1, interval, pod9, &a1);
//            APL_list->addLightshow(-1, interval, pod10, &a2);
//            APL_list->addLightshow(-1, interval, pod11, &a3);
//            APL_list->addLightshow(-1, interval, pod12, &a4);
//            APL_list->addLightshow(-1, interval, pod13, &a5);
//            APL_list->addLightshow(-1, interval, pod14, &a6);
//            APL_list->addLightshow(-1, interval, pod15, &a7);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge0, &edgewipe0);
//            APL_list->addLightshow(-1, edgeInterval, edge1, &edgewipe1);
//            APL_list->addLightshow(-1, edgeInterval, edge2, &edgewipe2);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge3, &edgewipe0);
//            APL_list->addLightshow(-1, edgeInterval, edge4, &edgewipe1);
//            APL_list->addLightshow(-1, edgeInterval, edge5, &edgewipe2);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge6, &edgewipe0);
//            APL_list->addLightshow(-1, edgeInterval, edge7, &edgewipe1);
//            APL_list->addLightshow(-1, edgeInterval, edge8, &edgewipe2);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge9, &edgewipe0);
//            APL_list->addLightshow(-1, edgeInterval, edge10, &edgewipe1);
//            APL_list->addLightshow(-1, edgeInterval, edge11, &edgewipe2);
//            
//            
//            break;
//        case 1:
//
//            APL_list->addLightshow(p, interval, pod0, &b0);
//            APL_list->addLightshow(-1, interval, pod1, &b1);
//            APL_list->addLightshow(-1, interval, pod2, &b2);
//            APL_list->addLightshow(-1, interval, pod3, &b3);
//            APL_list->addLightshow(-1, interval, pod4, &b4);
//            APL_list->addLightshow(-1, interval, pod5, &b5);
//            APL_list->addLightshow(-1, interval, pod6, &b6);
//            APL_list->addLightshow(-1, interval, pod7, &b7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &b0);
//            APL_list->addLightshow(-1, interval, pod9, &b1);
//            APL_list->addLightshow(-1, interval, pod10, &b2);
//            APL_list->addLightshow(-1, interval, pod11, &b3);
//            APL_list->addLightshow(-1, interval, pod12, &b4);
//            APL_list->addLightshow(-1, interval, pod13, &b5);
//            APL_list->addLightshow(-1, interval, pod14, &b6);
//            APL_list->addLightshow(-1, interval, pod15, &b7);
//            break;
//        case 2:
//
//            APL_list->addLightshow(p, interval, pod0, &c0);
//            APL_list->addLightshow(-1, interval, pod1, &c1);
//            APL_list->addLightshow(-1, interval, pod2, &c2);
//            APL_list->addLightshow(-1, interval, pod3, &c3);
//            APL_list->addLightshow(-1, interval, pod4, &c4);
//            APL_list->addLightshow(-1, interval, pod5, &c5);
//            APL_list->addLightshow(-1, interval, pod6, &c6);
//            APL_list->addLightshow(-1, interval, pod7, &c7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &c0);
//            APL_list->addLightshow(-1, interval, pod9, &c1);
//            APL_list->addLightshow(-1, interval, pod10, &c2);
//            APL_list->addLightshow(-1, interval, pod11, &c3);
//            APL_list->addLightshow(-1, interval, pod12, &c4);
//            APL_list->addLightshow(-1, interval, pod13, &c5);
//            APL_list->addLightshow(-1, interval, pod14, &c6);
//            APL_list->addLightshow(-1, interval, pod15, &c7);
//            
//            APL_list->addLightshow(-1, interval, edge0, &edgewipe10);
//            APL_list->addLightshow(-1, interval, edge1, &edgewipe11);
//            APL_list->addLightshow(-1, interval, edge2, &edgewipe12);
//            
//            APL_list->addLightshow(-1, interval, edge3, &edgewipe10);
//            APL_list->addLightshow(-1, interval, edge4, &edgewipe11);
//            APL_list->addLightshow(-1, interval, edge5, &edgewipe12);
//            
//            APL_list->addLightshow(-1, interval, edge6, &edgewipe10);
//            APL_list->addLightshow(-1, interval, edge7, &edgewipe11);
//            APL_list->addLightshow(-1, interval, edge8, &edgewipe12);
//            
//            APL_list->addLightshow(-1, interval, edge9, &edgewipe10);
//            APL_list->addLightshow(-1, interval, edge10, &edgewipe11);
//            APL_list->addLightshow(-1, interval, edge11, &edgewipe12);
//            break;
//        case 3:
//            
//            //yin ynag
//            APL_list->addLightshow(p, interval, pod3, &f0);
//            APL_list->addLightshow(-1, interval, pod7, &f1);
//            APL_list->addLightshow(-1, interval, pod9, &f1);
//            APL_list->addLightshow(-1, interval, pod10, &f3);
//            APL_list->addLightshow(-1, interval, pod11, &f0);
//            APL_list->addLightshow(-1, interval, pod13, &f1);
//            APL_list->addLightshow(-1, interval, pod14, &f3);
//            APL_list->addLightshow(-1, interval, pod15, &f1);
//            
//            APL_list->addLightshow(-1, interval, edge0, &f3);
//            APL_list->addLightshow(-1, interval, edge1, &f0);
//            APL_list->addLightshow(-1, interval, edge2, &f3);
//            APL_list->addLightshow(-1, interval, edge3, &f2);
//            APL_list->addLightshow(-1, interval, edge4, &f0);
//            APL_list->addLightshow(-1, interval, edge5, &f3);
//            
//            
//            
//            APL_list->addLightshow(-1, interval, pod0, &h1);
//            APL_list->addLightshow(-1, interval, pod1, &h2);
//            APL_list->addLightshow(-1, interval, pod2, &h6);
//            APL_list->addLightshow(-1, interval, pod4, &h6);
//            APL_list->addLightshow(-1, interval, pod5, &h2);
//            APL_list->addLightshow(-1, interval, pod6, &h1);
//            APL_list->addLightshow(-1, interval, pod8, &h2);
//            APL_list->addLightshow(-1, interval, pod12, &h6);
//            
//            APL_list->addLightshow(-1, interval, edge6, &h6);
//            APL_list->addLightshow(-1, interval, edge7, &h2);
//            APL_list->addLightshow(-1, interval, edge8, &h2);
//            APL_list->addLightshow(-1, interval, edge9, &h2);
//            APL_list->addLightshow(-1, interval, edge10, &h6);
//            APL_list->addLightshow(-1, interval, edge11, &h6);
//            
//            
//            
//            //            APL_list->addLightshow(p, interval, pod0, &d0);
//            //            APL_list->addLightshow(-1, interval, pod1, &d1);
//            //            APL_list->addLightshow(-1, interval, pod2, &d2);
//            //            APL_list->addLightshow(-1, interval, pod3, &d3);
//            //            APL_list->addLightshow(-1, interval, pod4, &d4);
//            //            APL_list->addLightshow(-1, interval, pod5, &d5);
//            //            APL_list->addLightshow(-1, interval, pod6, &d6);
//            //            APL_list->addLightshow(-1, interval, pod7, &d7);
//            //
//            //            APL_list->addLightshow(-1, interval, pod8, &d0);
//            //            APL_list->addLightshow(-1, interval, pod9, &d1);
//            //            APL_list->addLightshow(-1, interval, pod10, &d2);
//            //            APL_list->addLightshow(-1, interval, pod11, &d3);
//            //            APL_list->addLightshow(-1, interval, pod12, &d4);
//            //            APL_list->addLightshow(-1, interval, pod13, &d5);
//            //            APL_list->addLightshow(-1, interval, pod14, &d6);
//            //            APL_list->addLightshow(-1, interval, pod15, &d7);
//            break;
//        case 4:
//            APL_list->addLightshow(p, interval, pod0, &e0);
//            APL_list->addLightshow(-1, interval, pod1, &e1);
//            APL_list->addLightshow(-1, interval, pod2, &e2);
//            APL_list->addLightshow(-1, interval, pod3, &e3);
//            APL_list->addLightshow(-1, interval, pod4, &e4);
//            APL_list->addLightshow(-1, interval, pod5, &e5);
//            APL_list->addLightshow(-1, interval, pod6, &e6);
//            APL_list->addLightshow(-1, interval, pod7, &e7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &e0);
//            APL_list->addLightshow(-1, interval, pod9, &e1);
//            APL_list->addLightshow(-1, interval, pod10, &e2);
//            APL_list->addLightshow(-1, interval, pod11, &e3);
//            APL_list->addLightshow(-1, interval, pod12, &e4);
//            APL_list->addLightshow(-1, interval, pod13, &e5);
//            APL_list->addLightshow(-1, interval, pod14, &e6);
//            APL_list->addLightshow(-1, interval, pod15, &e7);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge0, &edgewipe20);
//            APL_list->addLightshow(-1, edgeInterval, edge1, &edgewipe21);
//            APL_list->addLightshow(-1, edgeInterval, edge2, &edgewipe22);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge3, &edgewipe20);
//            APL_list->addLightshow(-1, edgeInterval, edge4, &edgewipe21);
//            APL_list->addLightshow(-1, edgeInterval, edge5, &edgewipe22);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge6, &edgewipe20);
//            APL_list->addLightshow(-1, edgeInterval, edge7, &edgewipe21);
//            APL_list->addLightshow(-1, edgeInterval, edge8, &edgewipe22);
//            
//            APL_list->addLightshow(-1, edgeInterval, edge9, &edgewipe20);
//            APL_list->addLightshow(-1, edgeInterval, edge10, &edgewipe21);
//            APL_list->addLightshow(-1, edgeInterval, edge11, &edgewipe22);
//            break;
//        case 5:
//            APL_list->addLightshow(p, interval, pod0, &f0);
//            APL_list->addLightshow(-1, interval, pod1, &f1);
//            APL_list->addLightshow(-1, interval, pod2, &f2);
//            APL_list->addLightshow(-1, interval, pod3, &f3);
//            APL_list->addLightshow(-1, interval, pod4, &f4);
//            APL_list->addLightshow(-1, interval, pod5, &f5);
//            APL_list->addLightshow(-1, interval, pod6, &f6);
//            APL_list->addLightshow(-1, interval, pod7, &f7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &f0);
//            APL_list->addLightshow(-1, interval, pod9, &f1);
//            APL_list->addLightshow(-1, interval, pod10, &f2);
//            APL_list->addLightshow(-1, interval, pod11, &f3);
//            APL_list->addLightshow(-1, interval, pod12, &f4);
//            APL_list->addLightshow(-1, interval, pod13, &f5);
//            APL_list->addLightshow(-1, interval, pod14, &f6);
//            APL_list->addLightshow(-1, interval, pod15, &f7);
//            break;
//        case 6:
//            APL_list->addLightshow(p, interval, pod0, &g0);
//            APL_list->addLightshow(-1, interval, pod1, &g1);
//            APL_list->addLightshow(-1, interval, pod2, &g2);
//            APL_list->addLightshow(-1, interval, pod3, &g3);
//            APL_list->addLightshow(-1, interval, pod4, &g4);
//            APL_list->addLightshow(-1, interval, pod5, &g5);
//            APL_list->addLightshow(-1, interval, pod6, &g6);
//            APL_list->addLightshow(-1, interval, pod7, &g7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &g0);
//            APL_list->addLightshow(-1, interval, pod9, &g1);
//            APL_list->addLightshow(-1, interval, pod10, &g2);
//            APL_list->addLightshow(-1, interval, pod11, &g3);
//            APL_list->addLightshow(-1, interval, pod12, &g4);
//            APL_list->addLightshow(-1, interval, pod13, &g5);
//            APL_list->addLightshow(-1, interval, pod14, &g6);
//            APL_list->addLightshow(-1, interval, pod15, &g7);
//            
//            APL_list->addLightshow(-1, interval, edge0, &g7);
//            APL_list->addLightshow(-1, interval, edge1, &g6);
//            APL_list->addLightshow(-1, interval, edge2, &g1);
//            
//            APL_list->addLightshow(-1, interval, edge3, &g4);
//            APL_list->addLightshow(-1, interval, edge4, &g3);
//            APL_list->addLightshow(-1, interval, edge5, &g3);
//            
//            APL_list->addLightshow(-1, interval, edge6, &g2);
//            APL_list->addLightshow(-1, interval, edge7, &g0);
//            APL_list->addLightshow(-1, interval, edge8, &g7);
//            
//            APL_list->addLightshow(-1, interval, edge9, &g1);
//            APL_list->addLightshow(-1, interval, edge10, &g3);
//            APL_list->addLightshow(-1, interval, edge11, &g7);
//            break;
//        case 7:
//            APL_list->addLightshow(p, interval, pod0, &h0);
//            APL_list->addLightshow(-1, interval, pod1, &h1);
//            APL_list->addLightshow(-1, interval, pod2, &h2);
//            APL_list->addLightshow(-1, interval, pod3, &h3);
//            APL_list->addLightshow(-1, interval, pod4, &h4);
//            APL_list->addLightshow(-1, interval, pod5, &h5);
//            APL_list->addLightshow(-1, interval, pod6, &h6);
//            APL_list->addLightshow(-1, interval, pod7, &h7);
//            
//            APL_list->addLightshow(-1, interval, pod8, &h0);
//            APL_list->addLightshow(-1, interval, pod9, &h1);
//            APL_list->addLightshow(-1, interval, pod10, &h2);
//            APL_list->addLightshow(-1, interval, pod11, &h3);
//            APL_list->addLightshow(-1, interval, pod12, &h4);
//            APL_list->addLightshow(-1, interval, pod13, &h5);
//            APL_list->addLightshow(-1, interval, pod14, &h6);
//            APL_list->addLightshow(-1, interval, pod15, &h7);
//            
//            APL_list->addLightshow(-1, interval, edge0, &edgewipe30);
//            APL_list->addLightshow(-1, interval, edge1, &edgewipe31);
//            APL_list->addLightshow(-1, interval, edge2, &edgewipe31);
//            
//            APL_list->addLightshow(-1, interval, edge3, &edgewipe30);
//            APL_list->addLightshow(-1, interval, edge4, &edgewipe32);
//            APL_list->addLightshow(-1, interval, edge5, &edgewipe30);
//            
//            APL_list->addLightshow(-1, interval, edge6, &edgewipe31);
//            APL_list->addLightshow(-1, interval, edge7, &edgewipe30);
//            APL_list->addLightshow(-1, interval, edge8, &edgewipe31);
//            
//            APL_list->addLightshow(-1, interval, edge9, &edgewipe31);
//            APL_list->addLightshow(-1, interval, edge10, &edgewipe31);
//            APL_list->addLightshow(-1, interval, edge11, &edgewipe32);
//            
//            break;
//            
//        default:
//            break;
//    }
//    return interval;
//
//    
//}
//
//
//
//
//
//
//int	pumpkin_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 32;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	0	) { addtoAllPods(interval*8, pumpkin_0); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_1	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_2	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_3	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_4	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_5	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_6	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_7	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_8	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_9	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_10	); }
//    if (f ==	12	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_11	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_12	); }
//    if (f ==	13	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_13	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_14	); }
//    if (f ==	14	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_15	); }
//    if (f ==	15	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_16	); }
//    if (f ==	16	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_17	); }
//    if (f ==	17	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_18	); }
//    if (f ==	18	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_19	); }
//    if (f ==	19	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_20	); }
//    if (f ==	20	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_21	); }
//    if (f ==	21	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_22	); }
//    if (f ==	22	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_23	); }
//    if (f ==	23	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_24	); }
//    if (f ==	24	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_25	); }
//    if (f ==	25	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_26	); }
//    if (f ==	26	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_27	); }
//    if (f ==	27	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_28	); }
//    if (f ==	28	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_29	); }
//    if (f ==	29	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_30	); }
//    if (f ==	30	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_31	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_32	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_33	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_34	); }
//    if (f ==	31	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	pumpkin_35	); }
//    return interval;								
//}								
//
//
//int	blackspot_Mix	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 16;
//    if (f == 0) {
//        APL_list->addLightshow(p, interval*1, NULL, &wait);
//        APL_list->addLightshow(p, interval*2, NULL, &wait);
//        APL_list->addLightshow(p, interval*3, NULL, &wait);
//        APL_list->addLightshow(p, interval*4, NULL, &wait);
//        APL_list->addLightshow(p, interval*5, NULL, &wait);
//        APL_list->addLightshow(p, interval*6, NULL, &wait);
//        APL_list->addLightshow(p, interval*7, NULL, &wait);
//        APL_list->addLightshow(p, interval*8, NULL, &wait);
//        APL_list->addLightshow(p, interval*9, NULL, &wait);
//        APL_list->addLightshow(p, interval*10, NULL, &wait);
//        APL_list->addLightshow(p, interval*11, NULL, &wait);
//        APL_list->addLightshow(p, interval*12, NULL, &wait);
//        APL_list->addLightshow(p, interval*13, NULL, &wait);
//        APL_list->addLightshow(p, interval*14, NULL, &wait);
//        APL_list->addLightshow(p, interval*15, NULL, &wait);
//        APL_list->addLightshow(p, interval*16, NULL, &wait);
//        APL_list->addLightshow(p, interval*17, NULL, &wait);
//        APL_list->addLightshow(p, interval*18, NULL, &wait);
//        APL_list->addLightshow(p, interval*19, NULL, &wait);
//        APL_list->addLightshow(p, interval*20, NULL, &wait);
//        APL_list->addLightshow(p, interval*21, NULL, &wait);
//        APL_list->addLightshow(p, interval*22, NULL, &wait);
//        APL_list->addLightshow(p, interval*23, NULL, &wait);
//        APL_list->addLightshow(p, interval*24, NULL, &wait);
//        APL_list->addLightshow(p, interval*25, NULL, &wait);
//        APL_list->addLightshow(p, interval*26, NULL, &wait);
//        APL_list->addLightshow(p, interval*27, NULL, &wait);
//        APL_list->addLightshow(p, interval*28, NULL, &wait);
//        APL_list->addLightshow(p, interval*29, NULL, &wait);
//        APL_list->addLightshow(p, interval*30, NULL, &wait);
//        APL_list->addLightshow(p, interval*31, NULL, &wait);
//        APL_list->addLightshow(p, interval*32, NULL, &wait);
//    }
//    
//    
//    
//    
//    
//    
//    
//    
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_0	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_1	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_2	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_3	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_4	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_5	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_6	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_7	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_8	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_9	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_10	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_11	); }
//    if (f ==	0	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_12	); }
//    if (f ==	1	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_13	); }
//    if (f ==	2	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_14	); }
//    if (f ==	3	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_15	); }
//    if (f ==	4	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_16	); }
//    if (f ==	5	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_17	); }
//    if (f ==	6	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_18	); }
//    if (f ==	7	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_19	); }
//    if (f ==	8	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_20	); }
//    if (f ==	9	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_21	); }
//    if (f ==	10	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_22	); }
//    if (f ==	11	) { APL_list->addLightshow(-1, interval*	1	,	pod0	, &	blackspot_23	); }
//    
//    
//    
//    
//    
//    
//    return interval;
//}								
//
//
//
//
