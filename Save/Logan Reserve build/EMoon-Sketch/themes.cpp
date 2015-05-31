//
//  themes.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "themes.h"

void	tetriswipe	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
        everwipe4(f, duration, strip, 0, &yellow15150, &yellow15150, &brown1, &darkyellow, &brown1);
}


void	blackout	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4 (f, duration, strip, 	0	, &darkcyan033		, &	darkcyan033, &	grey3	, &	black000	, &	black000	);}

void	blackout1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4 (f, duration, strip, 	0	, &yellow15150		, &	yellow15150, &	grey4	, &	grey3	, &	black000	);}


void redfadeout(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
    {	fade4	(f, duration, strip, 	0	, &	red1500	, &red1500		, &red0700		, &	redblack100, &	black000	);}
}

void redfadein(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip){
    {	fade4	(f, duration, strip, 	0	, &	black000	, &black000		, &redblack100		, &	red0700, &	red1500	);}
}

void	borderspeck0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    quadsparklefill(f, duration, strip, 0, yellow15150, brown1, darkyellow, blue0015, blue0007);
}


void	borderspeck1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    quadsparklefill(f, duration, strip, 0, black000, blue0015, blue0007, blue0015, blue0007);
}

void	redsquare0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	bluesquare0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	blueblack001	, &	blueblack001	, &	blue0015	, &	blue0007	, &	blue0015	);}

void masterLightshow(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    
       if (f >= POPPY_S && f < POPPY_S + POPPY_T) {
    
        if (f == POPPY_S) {
            APL_list->addLightshow(p, POPPY_I*1, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*2, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*3, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*4, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*5, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*6, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*7, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*8, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*9, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*10, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*11, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*12, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*13, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*14, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*15, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*16, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*17, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*18, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*19, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*20, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*21, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*22, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*23, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*24, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*25, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*26, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*27, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*28, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*29, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*30, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*31, NULL, &wait);
            APL_list->addLightshow(p, POPPY_I*32, NULL, &wait);
        }
        
           if (f ==	POPPY_S	) { addtoAllPods(POPPY_I*1, & blackout1); }

        if (f ==	POPPY_S +POPPY_I	) { addtoAllPods(POPPY_I*1, & redfadein); }

        
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_0	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_1	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_2	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_3	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_4	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_5	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_6	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_7	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_8	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_9	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_10	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_11	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_12	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_13	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_14	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_15	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_16	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_17	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_18	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_19	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_20	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_21	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_22	); }
            if (f ==	POPPY_S + POPPY_I *3	) { APL_list->addLightshow(-1, POPPY_I*	1	,	pod0	, &	blackspot_23	); }
        
        
        if (f ==	POPPY_S + POPPY_I *30	) { addtoAllPods(POPPY_I * 2, & redfadeout); }
    }
 
     if (f >= MM_S && f < MM_S + MM_T) {

    if (f == MM_S) {
 
                APL_list->addLightshow(p, MM_I *1, NULL, &wait);
                APL_list->addLightshow(p, MM_I *2, NULL, &wait);
                APL_list->addLightshow(p, MM_I *3, NULL, &wait);
                APL_list->addLightshow(p, MM_I *4, NULL, &wait);
                APL_list->addLightshow(p, MM_I *5, NULL, &wait);
                APL_list->addLightshow(p, MM_I *6, NULL, &wait);
                APL_list->addLightshow(p, MM_I *7, NULL, &wait);
                APL_list->addLightshow(p, MM_I *8, NULL, &wait);
                APL_list->addLightshow(p, MM_I *9, NULL, &wait);
                APL_list->addLightshow(p, MM_I *10, NULL, &wait);
                APL_list->addLightshow(p, MM_I *11, NULL, &wait);
                APL_list->addLightshow(p, MM_I *12, NULL, &wait);
                APL_list->addLightshow(p, MM_I *13, NULL, &wait);
                APL_list->addLightshow(p, MM_I *14, NULL, &wait);
                APL_list->addLightshow(p, MM_I *15, NULL, &wait);
                APL_list->addLightshow(p, MM_I *16, NULL, &wait);
            }
        
        
            if (f ==	MM_S + MM_I *0	) { addtoAllPods(MM_I *6, &redsquare0);}
            if (f ==	MM_S + MM_I *6	) { addtoAllQuads(MM_I *6, &bluesquare0);}
            if (f ==	MM_S + MM_I *12	) { addtoAllQuads(MM_I *4, &redsquare0);}
        
            if (f ==	MM_S + MM_I *6	) { addtoAllEdges(MM_I, &borderspeck0);}
            if (f ==	MM_S + MM_I *7	) { addtoAllEdges(MM_I, &h6);}
            if (f ==	MM_S + MM_I *8	) { addtoAllEdges(MM_I, &h1);}
            if (f ==	MM_S + MM_I *9	) { addtoAllEdges(MM_I, &aus0);}
            if (f ==	MM_S + MM_I *10	) { addtoAllEdges(MM_I, &aus7);}
            if (f ==	MM_S + MM_I *11	) { addtoAllEdges(MM_I, &h6);}
            if (f ==	MM_S + MM_I *12	) { addtoAllEdges(MM_I, &c3);}
            if (f ==	MM_S + MM_I *13	) { addtoAllEdges(MM_I, &c6);}
            if (f ==	MM_S + MM_I *14	) { addtoAllEdges(MM_I, &h1);}
            if (f ==	MM_S + MM_I *15	) { addtoAllEdges(MM_I, &borderspeck1);}

}



        
    
    if (f >= TB_S && f < TB_S + TB_T) {
        
            if (f == TB_S) {
                APL_list->addLightshow(p, TB_I*1, NULL, &wait);
                APL_list->addLightshow(p, TB_I*2, NULL, &wait);
                APL_list->addLightshow(p, TB_I*3, NULL, &wait);
                APL_list->addLightshow(p, TB_I*4, NULL, &wait);
                APL_list->addLightshow(p, TB_I*5, NULL, &wait);
                APL_list->addLightshow(p, TB_I*6, NULL, &wait);
                APL_list->addLightshow(p, TB_I*7, NULL, &wait);
                APL_list->addLightshow(p, TB_I*8, NULL, &wait);
                APL_list->addLightshow(p, TB_I*9, NULL, &wait);
                APL_list->addLightshow(p, TB_I*10, NULL, &wait);
                APL_list->addLightshow(p, TB_I*11, NULL, &wait);
                APL_list->addLightshow(p, TB_I*12, NULL, &wait);
                APL_list->addLightshow(p, TB_I*13, NULL, &wait);
                APL_list->addLightshow(p, TB_I*14, NULL, &wait);
                APL_list->addLightshow(p, TB_I*15, NULL, &wait);
                APL_list->addLightshow(p, TB_I*16, NULL, &wait);
                APL_list->addLightshow(p, TB_I*17, NULL, &wait);
                APL_list->addLightshow(p, TB_I*18, NULL, &wait);
                APL_list->addLightshow(p, TB_I*19, NULL, &wait);
                APL_list->addLightshow(p, TB_I*20, NULL, &wait);
                APL_list->addLightshow(p, TB_I*21, NULL, &wait);
                APL_list->addLightshow(p, TB_I*22, NULL, &wait);
                APL_list->addLightshow(p, TB_I*23, NULL, &wait);
                APL_list->addLightshow(p, TB_I*24, NULL, &wait);
                APL_list->addLightshow(p, TB_I*25, NULL, &wait);
                APL_list->addLightshow(p, TB_I*26, NULL, &wait);
                APL_list->addLightshow(p, TB_I*27, NULL, &wait);
                APL_list->addLightshow(p, TB_I*28, NULL, &wait);
                APL_list->addLightshow(p, TB_I*29, NULL, &wait);
                APL_list->addLightshow(p, TB_I*30, NULL, &wait);
                APL_list->addLightshow(p, TB_I*31, NULL, &wait);
                APL_list->addLightshow(p, TB_I*32, NULL, &wait);
            }
        
        
        
            if (f ==	TB_S + TB_I * 0	) { addtoAllEdges(TB_I*1, &borderspeck1);}
            if (f ==	TB_S + TB_I * 1	) { addtoAllEdges(TB_I*15, &tetriswipe);}
        
            if (f ==	TB_S + TB_I * 16	) { addtoInnerEdges(TB_I, &	tetriswipe	); addtoOuterEdges(TB_I, &	g4	);}
            if (f ==	TB_S + TB_I * 17	) { addtoInnerEdges(TB_I, &	g4	); addtoOuterEdges(TB_I, &	c4	);}
            if (f ==	TB_S + TB_I * 18	) { addtoInnerEdges(TB_I, &	c4	); addtoOuterEdges(TB_I, &	g5	);}
            if (f ==	TB_S + TB_I * 19	) { addtoInnerEdges(TB_I, &	g5	); addtoOuterEdges(TB_I, &	c2	);}
            if (f ==	TB_S + TB_I * 20	) { addtoInnerEdges(TB_I, &	c2	); addtoOuterEdges(TB_I, &	c1	);}
            if (f ==	TB_S + TB_I * 21	) { addtoInnerEdges(TB_I, &	c1	); addtoOuterEdges(TB_I, &	edgewipe11	);}
            if (f ==	TB_S + TB_I * 22	) { addtoInnerEdges(TB_I, &	edgewipe11	); addtoOuterEdges(TB_I, &	e1	);}
            if (f ==	TB_S + TB_I * 23	) { addtoInnerEdges(TB_I, &	e1	); addtoOuterEdges(TB_I, &	edgewipe30	);}
            if (f ==	TB_S + TB_I * 24	) { addtoInnerEdges(TB_I, &	edgewipe30	); addtoOuterEdges(TB_I, &	aus2	);}
            if (f ==	TB_S + TB_I * 25	) { addtoInnerEdges(TB_I, &	aus2	); addtoOuterEdges(TB_I, &	aus6	);}
            if (f ==	TB_S + TB_I * 26	) { addtoInnerEdges(TB_I, &	aus6	); addtoOuterEdges(TB_I, &	aus1	);}
            if (f ==	TB_S + TB_I * 27	) { addtoInnerEdges(TB_I, &	tetriswipe	); addtoOuterEdges(TB_I, &	edgewipe12	);}
            if (f ==	TB_S + TB_I * 28	) { addtoInnerEdges(TB_I, &	edgewipe12	); addtoOuterEdges(TB_I, &	b7	);}
            if (f ==	TB_S + TB_I * 29	) { addtoInnerEdges(TB_I, &	b7	); addtoOuterEdges(TB_I, &	aus0	);}
            if (f ==	TB_S + TB_I * 30	) { addtoInnerEdges(TB_I, &	aus0	); addtoOuterEdges(TB_I, &	f0	);}
            if (f ==	TB_S + TB_I * 31	) { addtoInnerEdges(TB_I, &	f0	); addtoOuterEdges(TB_I, &	b5	);}
        
        
        }
        
        




    if (f >= TET1_S && f < TET1_S + TET1_T) {
        if (f == TET1_S) {
            APL_list->addLightshow(p, TET1_I*1, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*2, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*3, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*4, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*5, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*6, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*7, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*8, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*9, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*10, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*11, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*12, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*13, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*14, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*15, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*16, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*17, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*18, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*19, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*20, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*21, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*22, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*23, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*24, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*25, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*26, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*27, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*28, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*29, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*30, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*31, NULL, &wait);
            APL_list->addLightshow(p, TET1_I*32, NULL, &wait);
            
        }
        
        if (f == TET1_S + TET1_I * 	0	) { APL_list->addLightshow(-1, TET1_I*	32	,	pod0	, &	tetfall0_1	); }
        if (f == TET1_S + TET1_I * 	1	) { APL_list->addLightshow(-1, TET1_I*	4	,	pod0	, &	tetfall0_2	); }
        if (f == TET1_S + TET1_I * 	5	) { APL_list->addLightshow(-1, TET1_I*	4	,	pod0	, &	tetfall0_3	); }
        if (f == TET1_S + TET1_I * 	9	) { APL_list->addLightshow(-1, TET1_I*	3	,	pod0	, &	tetfall0_4	); }
        if (f == TET1_S + TET1_I * 	13	) { APL_list->addLightshow(-1, TET1_I*	3	,	pod0	, &	tetfall0_5	); }
        if (f == TET1_S + TET1_I * 	16	) { APL_list->addLightshow(-1, TET1_I*	3	,	pod0	, &	tetfall0_6	); }
        if (f == TET1_S + TET1_I * 	19	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_7	); }
        if (f == TET1_S + TET1_I * 	22	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_8	); }
        if (f == TET1_S + TET1_I * 	25	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_9	); }
        if (f == TET1_S + TET1_I * 	26	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_10	); }
        if (f == TET1_S + TET1_I * 	27	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_11	); }
        if (f == TET1_S + TET1_I * 	28	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_12	); }
        if (f == TET1_S + TET1_I * 	29	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_13	); }
        if (f == TET1_S + TET1_I * 	30	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_14	); }
        if (f == TET1_S + TET1_I * 	31	) { APL_list->addLightshow(-1, TET1_I*	2	,	pod0	, &	tetfall0_15	); }
        if (f == TET1_S + TET1_I * 	32	) { APL_list->addLightshow(-1, TET1_I*	1	,	pod0	, &	tetfall0_16	); }
        
        
    }
    
    if (f >= TET2_S && f < TET2_S + TET2_T) {
        if (f == TET2_S) {
            APL_list->addLightshow(p, TET2_I*1, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*2, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*3, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*4, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*5, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*6, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*7, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*8, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*9, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*10, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*11, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*12, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*13, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*14, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*15, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*16, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*17, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*18, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*19, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*20, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*21, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*22, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*23, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*24, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*25, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*26, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*27, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*28, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*29, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*30, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*31, NULL, &wait);
            APL_list->addLightshow(p, TET2_I*32, NULL, &wait);
            
        }
        
        if (f == TET2_S + TET2_I * 	0	) { APL_list->addLightshow(-1, TET2_I*	32	,	pod0	, &	tetfall0_1	); }
        if (f == TET2_S + TET2_I * 	1	) { APL_list->addLightshow(-1, TET2_I*	4	,	pod0	, &	tetfall0_2	); }
        if (f == TET2_S + TET2_I * 	5	) { APL_list->addLightshow(-1, TET2_I*	4	,	pod0	, &	tetfall0_3	); }
        if (f == TET2_S + TET2_I * 	9	) { APL_list->addLightshow(-1, TET2_I*	3	,	pod0	, &	tetfall0_4	); }
        if (f == TET2_S + TET2_I * 	13	) { APL_list->addLightshow(-1, TET2_I*	3	,	pod0	, &	tetfall0_5	); }
        if (f == TET2_S + TET2_I * 	16	) { APL_list->addLightshow(-1, TET2_I*	3	,	pod0	, &	tetfall0_6	); }
        if (f == TET2_S + TET2_I * 	19	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_7	); }
        if (f == TET2_S + TET2_I * 	22	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_8	); }
        if (f == TET2_S + TET2_I * 	25	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_9	); }
        if (f == TET2_S + TET2_I * 	26	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_10	); }
        if (f == TET2_S + TET2_I * 	27	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_11	); }
        if (f == TET2_S + TET2_I * 	28	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_12	); }
        if (f == TET2_S + TET2_I * 	29	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_13	); }
        if (f == TET2_S + TET2_I * 	30	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_14	); }
        if (f == TET2_S + TET2_I * 	31	) { APL_list->addLightshow(-1, TET2_I*	2	,	pod0	, &	tetfall0_15	); }
        if (f == TET2_S + TET2_I * 	32	) { APL_list->addLightshow(-1, TET2_I*	1	,	pod0	, &	tetfall0_16	); }
        
        
    }

    
    if (f >= TET3_S && f < TET3_S + TET3_T) {
        if (f == TET3_S) {
            APL_list->addLightshow(p, TET3_I*1, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*2, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*3, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*4, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*5, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*6, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*7, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*8, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*9, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*10, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*11, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*12, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*13, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*14, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*15, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*16, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*17, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*18, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*19, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*20, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*21, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*22, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*23, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*24, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*25, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*26, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*27, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*28, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*29, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*30, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*31, NULL, &wait);
            APL_list->addLightshow(p, TET3_I*32, NULL, &wait);
            
        }
        
        if (f == TET3_S + TET3_I * 	0	) { APL_list->addLightshow(-1, TET3_I*	32	,	pod0	, &	tetfall0_1	); }
        if (f == TET3_S + TET3_I * 	1	) { APL_list->addLightshow(-1, TET3_I*	4	,	pod0	, &	tetfall0_2	); }
        if (f == TET3_S + TET3_I * 	5	) { APL_list->addLightshow(-1, TET3_I*	4	,	pod0	, &	tetfall0_3	); }
        if (f == TET3_S + TET3_I * 	9	) { APL_list->addLightshow(-1, TET3_I*	3	,	pod0	, &	tetfall0_4	); }
        if (f == TET3_S + TET3_I * 	13	) { APL_list->addLightshow(-1, TET3_I*	3	,	pod0	, &	tetfall0_5	); }
        if (f == TET3_S + TET3_I * 	16	) { APL_list->addLightshow(-1, TET3_I*	3	,	pod0	, &	tetfall0_6	); }
        if (f == TET3_S + TET3_I * 	19	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_7	); }
        if (f == TET3_S + TET3_I * 	22	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_8	); }
        if (f == TET3_S + TET3_I * 	25	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_9	); }
        if (f == TET3_S + TET3_I * 	26	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_10	); }
        if (f == TET3_S + TET3_I * 	27	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_11	); }
        if (f == TET3_S + TET3_I * 	28	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_12	); }
        if (f == TET3_S + TET3_I * 	29	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_13	); }
        if (f == TET3_S + TET3_I * 	30	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_14	); }
        if (f == TET3_S + TET3_I * 	31	) { APL_list->addLightshow(-1, TET3_I*	2	,	pod0	, &	tetfall0_15	); }
        if (f == TET3_S + TET3_I * 	32	) { APL_list->addLightshow(-1, TET3_I*	1	,	pod0	, &	tetfall0_16	); }
        
        
    }




    
    if (f >= TET4_S && f < TET4_S + TET4_T) {
        
        if (f == TET4_S) {
            APL_list->addLightshow(p, TET4_I * 1, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *2, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *3, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *4, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *5, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *6, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *7, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *8, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *9, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *10, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *11, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *12, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *13, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *14, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *15, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *16, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *17, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *18, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *19, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *20, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *21, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *22, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *23, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *24, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *25, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *26, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *27, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *28, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *29, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *30, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *31, NULL, &wait);
            APL_list->addLightshow(p, TET4_I *32, NULL, &wait);
        }
    
    
        if (f ==	TET4_S + TET4_I *0	) { APL_list->addLightshow(-1, TET4_I *	1	,	pod0	, &	tetfall1_1	); }
        if (f ==	TET4_S + TET4_I *0	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_2	); }
        if (f ==	TET4_S + TET4_I *1	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_3	); }
        if (f ==	TET4_S + TET4_I *1	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_4	); }
        if (f ==	TET4_S + TET4_I *2	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_5	); }
        if (f ==	TET4_S + TET4_I *2	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_6	); }
        if (f ==	TET4_S + TET4_I *3	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_7	); }
        if (f ==	TET4_S + TET4_I *3	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_8	); }
        if (f ==	TET4_S + TET4_I *4	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_9	); }
        if (f ==	TET4_S + TET4_I *4	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_10	); }
        if (f ==	TET4_S + TET4_I *5	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_11	); }
        if (f ==	TET4_S + TET4_I *5	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_12	); }
        if (f ==	TET4_S + TET4_I *6	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_13	); }
        if (f ==	TET4_S + TET4_I *6	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_14	); }
        if (f ==	TET4_S + TET4_I *7	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_15	); }
        if (f ==	TET4_S + TET4_I *7	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_16	); }
        if (f ==	TET4_S + TET4_I *8	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_17	); }
        if (f ==	TET4_S + TET4_I *8	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_18	); }
        if (f ==	TET4_S + TET4_I *9	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_19	); }
        if (f ==	TET4_S + TET4_I *9	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_20	); }
        if (f ==	TET4_S + TET4_I *10	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_21	); }
        if (f ==	TET4_S + TET4_I *10	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_22	); }
        if (f ==	TET4_S + TET4_I *11	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_23	); }
        if (f ==	TET4_S + TET4_I *11	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_24	); }
        if (f ==	TET4_S + TET4_I *12	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_25	); }
        if (f ==	TET4_S + TET4_I *12	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_26	); }
        if (f ==	TET4_S + TET4_I *13	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_27	); }
        if (f ==	TET4_S + TET4_I *13	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_28	); }
        if (f ==	TET4_S + TET4_I *14	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_29	); }
        if (f ==	TET4_S + TET4_I *14	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_30	); }
        if (f ==	TET4_S + TET4_I *15	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_31	); }
        if (f ==	TET4_S + TET4_I *15	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_32	); }
        if (f ==	TET4_S + TET4_I *16	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_33	); }
        if (f ==	TET4_S + TET4_I *16	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_34	); }
        if (f ==	TET4_S + TET4_I *17	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_35	); }
        if (f ==	TET4_S + TET4_I *17	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_36	); }
        if (f ==	TET4_S + TET4_I *18	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_37	); }
        if (f ==	TET4_S + TET4_I *18	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_38	); }
        if (f ==	TET4_S + TET4_I *19	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_39	); }
        if (f ==	TET4_S + TET4_I *19	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_40	); }
        if (f ==	TET4_S + TET4_I *20	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_41	); }
        if (f ==	TET4_S + TET4_I *20	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_42	); }
        if (f ==	TET4_S + TET4_I *21	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_43	); }
        if (f ==	TET4_S + TET4_I *21	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_44	); }
        if (f ==	TET4_S + TET4_I *22	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_45	); }
        if (f ==	TET4_S + TET4_I *22	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_46	); }
        if (f ==	TET4_S + TET4_I *23	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_47	); }
        if (f ==	TET4_S + TET4_I *23	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_48	); }
        if (f ==	TET4_S + TET4_I *24	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_49	); }
        if (f ==	TET4_S + TET4_I *24	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_50	); }
        if (f ==	TET4_S + TET4_I *25	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_51	); }
        if (f ==	TET4_S + TET4_I *25	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_52	); }
        if (f ==	TET4_S + TET4_I *26	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_53	); }
        if (f ==	TET4_S + TET4_I *26	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_54	); }
        if (f ==	TET4_S + TET4_I *27	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_55	); }
        if (f ==	TET4_S + TET4_I *27	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_56	); }
        if (f ==	TET4_S + TET4_I *28	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_57	); }
        if (f ==	TET4_S + TET4_I *28	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_58	); }
        if (f ==	TET4_S + TET4_I *29	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_59	); }
        if (f ==	TET4_S + TET4_I *29	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_60	); }
        if (f ==	TET4_S + TET4_I *30	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_61	); }
        if (f ==	TET4_S + TET4_I *30	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_62	); }
        if (f ==	TET4_S + TET4_I *31	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_63	); }
        if (f ==	TET4_S + TET4_I *31	) { APL_list->addLightshow(-1, TET4_I *	4	,	pod0	, &	tetfall1_64	); }

    
    }
    
    
    if (f >= RISE_S && f < RISE_S + RISE_T) {
        
        if (f == RISE_S) {
            APL_list->addLightshow(p, RISE_I *1, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *2, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *3, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *4, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *5, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *6, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *7, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *8, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *9, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *10, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *11, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *12, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *13, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *14, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *15, NULL, &wait);
            APL_list->addLightshow(p, RISE_I *16, NULL, &wait);
        }
        
        if (f == RISE_S + RISE_I *	0	) { APL_list->addLightshow(-1, RISE_I *	16	,	edge7	, &	rise0	); }
        if (f == RISE_S + RISE_I *	2	) { APL_list->addLightshow(-1, RISE_I *	14	,	edge8	, &	rise1	); }
        if (f == RISE_S + RISE_I *	2	) { APL_list->addLightshow(-1, RISE_I *	14	,	edge6	, &	rise2	); }
        if (f == RISE_S + RISE_I *	3	) { APL_list->addLightshow(-1, RISE_I *	13	,	pod12	, &	rise0	); }
        if (f == RISE_S + RISE_I *	3	) { APL_list->addLightshow(-1, RISE_I *	13	,	pod13	, &	rise2	); }
        if (f == RISE_S + RISE_I *	3	) { APL_list->addLightshow(-1, RISE_I *	13	,	pod14	, &	rise1	); }
        if (f == RISE_S + RISE_I *	3	) { APL_list->addLightshow(-1, RISE_I *	13	,	pod15	, &	rise0	); }
        if (f == RISE_S + RISE_I *	4	) { APL_list->addLightshow(-1, RISE_I *	12	,	edge9	, &	rise2	); }
        if (f == RISE_S + RISE_I *	4	) { APL_list->addLightshow(-1, RISE_I *	12	,	edge5	, &	rise0	); }
        if (f == RISE_S + RISE_I *	5	) { APL_list->addLightshow(-1, RISE_I *	11	,	pod8	, &	rise0	); }
        if (f == RISE_S + RISE_I *	5	) { APL_list->addLightshow(-1, RISE_I *	11	,	pod9	, &	rise2	); }
        if (f == RISE_S + RISE_I *	5	) { APL_list->addLightshow(-1, RISE_I *	11	,	pod10	, &	rise1	); }
        if (f == RISE_S + RISE_I *	5	) { APL_list->addLightshow(-1, RISE_I *	11	,	pod11	, &	rise0	); }
        if (f == RISE_S + RISE_I *	6	) { APL_list->addLightshow(-1, RISE_I *	10	,	edge4	, &	rise2	); }
        if (f == RISE_S + RISE_I *	6	) { APL_list->addLightshow(-1, RISE_I *	10	,	edge10	, &	rise1	); }
        if (f == RISE_S + RISE_I *	7	) { APL_list->addLightshow(-1, RISE_I *	19	,	pod4	, &	rise0	); }
        if (f == RISE_S + RISE_I *	7	) { APL_list->addLightshow(-1, RISE_I *	19	,	pod5	, &	rise2	); }
        if (f == RISE_S + RISE_I *	7	) { APL_list->addLightshow(-1, RISE_I *	19	,	pod6	, &	rise1	); }
        if (f == RISE_S + RISE_I *	7	) { APL_list->addLightshow(-1, RISE_I *	19	,	pod7	, &	rise0	); }
        if (f == RISE_S + RISE_I *	8	) { APL_list->addLightshow(-1, RISE_I *	18	,	edge3	, &	rise2	); }
        if (f == RISE_S + RISE_I *	8	) { APL_list->addLightshow(-1, RISE_I *	18	,	edge11	, &	rise0	); }
        if (f == RISE_S + RISE_I *	9	) { APL_list->addLightshow(-1, RISE_I *	17	,	pod0	, &	rise0	); }
        if (f == RISE_S + RISE_I *	9	) { APL_list->addLightshow(-1, RISE_I *	17	,	pod1	, &	rise2	); }
        if (f == RISE_S + RISE_I *	9	) { APL_list->addLightshow(-1, RISE_I *	17	,	pod2	, &	rise1	); }
        if (f == RISE_S + RISE_I *	9	) { APL_list->addLightshow(-1, RISE_I *	17	,	pod3	, &	rise0	); }
        if (f == RISE_S + RISE_I *	10	) { APL_list->addLightshow(-1, RISE_I *	6	,	edge0	, &	rise2	); }
        if (f == RISE_S + RISE_I *	10	) { APL_list->addLightshow(-1, RISE_I *	6	,	edge2	, &	rise0	); }
        if (f == RISE_S + RISE_I *	11	) { APL_list->addLightshow(-1, RISE_I *	5	,	edge1	, &	rise1	); }
        
    }
    
    if (f >= REDRISE_S && f < REDRISE_S + REDRISE_T) {
        if (f == REDRISE_S) {
            APL_list->addLightshow(p, REDRISE_I *1, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *2, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *3, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *4, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *5, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *6, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *7, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *8, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *9, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *10, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *11, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *12, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *13, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *14, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *15, NULL, &wait);
            APL_list->addLightshow(p, REDRISE_I *16, NULL, &wait);
        }
        
        
        if (f == REDRISE_S + REDRISE_I *	0	) { APL_list->addLightshow(-1, REDRISE_I *	14	,	edge7	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	2	) { APL_list->addLightshow(-1, REDRISE_I *	12	,	edge8	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	2	) { APL_list->addLightshow(-1, REDRISE_I *	12	,	edge6	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	3	) { APL_list->addLightshow(-1, REDRISE_I *	11	,	pod12	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	3	) { APL_list->addLightshow(-1, REDRISE_I *	11	,	pod13	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	3	) { APL_list->addLightshow(-1, REDRISE_I *	11	,	pod14	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	3	) { APL_list->addLightshow(-1, REDRISE_I *	11	,	pod15	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	4	) { APL_list->addLightshow(-1, REDRISE_I *	10	,	edge9	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	4	) { APL_list->addLightshow(-1, REDRISE_I *	10	,	edge5	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	5	) { APL_list->addLightshow(-1, REDRISE_I *	9	,	pod8	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	5	) { APL_list->addLightshow(-1, REDRISE_I *	9	,	pod9	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	5	) { APL_list->addLightshow(-1, REDRISE_I *	9	,	pod10	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	5	) { APL_list->addLightshow(-1, REDRISE_I *	9	,	pod11	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	6	) { APL_list->addLightshow(-1, REDRISE_I *	8	,	edge4	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	6	) { APL_list->addLightshow(-1, REDRISE_I *	8	,	edge10	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	7	) { APL_list->addLightshow(-1, REDRISE_I *	7	,	pod4	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	7	) { APL_list->addLightshow(-1, REDRISE_I *	7	,	pod5	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	7	) { APL_list->addLightshow(-1, REDRISE_I *	7	,	pod6	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	7	) { APL_list->addLightshow(-1, REDRISE_I *	7	,	pod7	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	8	) { APL_list->addLightshow(-1, REDRISE_I *	6	,	edge3	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	8	) { APL_list->addLightshow(-1, REDRISE_I *	6	,	edge11	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	9	) { APL_list->addLightshow(-1, REDRISE_I *	5	,	pod0	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	9	) { APL_list->addLightshow(-1, REDRISE_I *	5	,	pod1	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	9	) { APL_list->addLightshow(-1, REDRISE_I *	5	,	pod2	, &	redrise0	); }
        if (f == REDRISE_S + REDRISE_I *	9	) { APL_list->addLightshow(-1, REDRISE_I *	5	,	pod3	, &	redrise2	); }
        if (f == REDRISE_S + REDRISE_I *	10	) { APL_list->addLightshow(-1, REDRISE_I *	4	,	edge0	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	10	) { APL_list->addLightshow(-1, REDRISE_I *	4	,	edge2	, &	redrise1	); }
        if (f == REDRISE_S + REDRISE_I *	11	) { APL_list->addLightshow(-1, REDRISE_I *	3	,	edge1	, &	redrise1	); }
        
        
    }
    
    if (f >= SPARKRISE_S && f < SPARKRISE_S + SPARKRISE_T) {
        
        if (f == SPARKRISE_S) {
            APL_list->addLightshow(p, SPARKRISE_I*1, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*2, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*3, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*4, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*5, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*6, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*7, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*8, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*9, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*10, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*11, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*12, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*13, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*14, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*15, NULL, &wait);
            APL_list->addLightshow(p, SPARKRISE_I*16, NULL, &wait);
        }
        
        if (f == SPARKRISE_S + SPARKRISE_I *	0	) { APL_list->addLightshow(-1, SPARKRISE_I *	10	,	edge7	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	2	) { APL_list->addLightshow(-1, SPARKRISE_I *	8	,	edge8	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	2	) { APL_list->addLightshow(-1, SPARKRISE_I *	8	,	edge6	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	3	) { APL_list->addLightshow(-1, SPARKRISE_I *	7	,	pod12	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	3	) { APL_list->addLightshow(-1, SPARKRISE_I *	7	,	pod13	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	3	) { APL_list->addLightshow(-1, SPARKRISE_I *	7	,	pod14	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	3	) { APL_list->addLightshow(-1, SPARKRISE_I *	7	,	pod15	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	4	) { APL_list->addLightshow(-1, SPARKRISE_I *	6	,	edge9	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	4	) { APL_list->addLightshow(-1, SPARKRISE_I *	6	,	edge5	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	5	) { APL_list->addLightshow(-1, SPARKRISE_I *	5	,	pod8	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	5	) { APL_list->addLightshow(-1, SPARKRISE_I *	5	,	pod9	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	5	) { APL_list->addLightshow(-1, SPARKRISE_I *	5	,	pod10	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	5	) { APL_list->addLightshow(-1, SPARKRISE_I *	5	,	pod11	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	6	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	edge4	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	6	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	edge10	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	7	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod4	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	7	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod5	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	7	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod6	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	7	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod7	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	8	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge3	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	8	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge11	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	9	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod0	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	9	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod1	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	9	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod2	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	9	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod3	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	10	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge0	, &	sparkrise2	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	10	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge2	, &	sparkrise0	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	11	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge1	, &	sparkrise1	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	edge7	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	edge8	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	edge6	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod12	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	4	,	pod13	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	12	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod14	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod15	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge9	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge5	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod8	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod9	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod10	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod11	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge4	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge10	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod4	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod5	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod6	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	13	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod7	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge3	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	edge11	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod0	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	2	,	pod1	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod2	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	pod3	, &	sparkrise30	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge0	, &	sparkrise28	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge2	, &	sparkrise29	); }
        if (f == SPARKRISE_S + SPARKRISE_I *	14	) { APL_list->addLightshow(-1, SPARKRISE_I *	3	,	edge1	, &	sparkrise30	); }
        
        
    }
    
    
    if (f >= SPIRAL2_S && f < SPIRAL2_S + SPIRAL2_T) {
        if (f == SPIRAL2_S) {
            APL_list->addLightshow(p, SPIRAL2_I*1, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*2, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*3, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*4, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*5, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*6, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*7, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*8, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*9, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*10, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*11, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*12, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*13, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*14, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*15, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*16, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*17, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*18, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*19, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*20, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*21, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*22, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*23, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*24, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*25, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*26, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*27, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*28, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*29, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*30, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*31, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL2_I*32, NULL, &wait);
        }
        
        
        if (f == SPIRAL2_S + SPIRAL2_I *	0	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_0	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	1	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_1	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	2	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_2	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_3	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	4	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_4	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	5	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_5	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	6	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_6	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	7	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_7	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	9	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_8	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	10	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_9	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	11	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_10	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_11	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	13	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_12	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	14	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_13	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	15	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_14	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	16	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_15	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	17	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_16	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	18	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_17	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	19	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_18	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_19	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	21	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_20	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	22	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_21	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	23	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_22	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	24	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_23	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	25	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_24	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	26	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_25	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	27	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_26	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_27	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	29	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_28	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	30	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_29	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	31	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_30	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	31	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_31	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	0	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_32	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	1	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_33	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	2	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_34	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_35	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	4	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_36	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	5	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_37	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	6	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_38	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	7	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_39	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	10	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_41	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	11	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_42	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_43	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	13	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_44	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	14	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_45	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	15	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_46	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	16	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_47	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	18	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_49	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	19	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_50	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_51	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	21	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_52	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	22	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_53	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	23	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_54	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	24	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_55	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	26	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_57	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	27	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_58	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_59	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	29	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_60	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	30	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_61	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	31	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_62	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	0	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_64	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	2	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_65	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_66	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	4	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_67	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	5	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_68	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	7	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_69	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	11	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_70	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_71	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	13	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_72	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	14	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_73	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	16	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_74	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	19	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_75	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_76	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	21	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_77	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	22	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_78	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	24	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_79	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	27	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_80	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_81	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	29	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_82	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	30	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_83	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	2	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_85	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_86	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	4	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_87	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	5	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_88	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	11	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_90	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_91	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	13	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_92	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	14	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_93	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	19	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_95	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_96	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	21	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_97	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	22	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_98	); }
        
        if (f == SPIRAL2_S + SPIRAL2_I *	27	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_100	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_101	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	29	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_102	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	30	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_103	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	0	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_104	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_105	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	4	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_106	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	7	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_107	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_108	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	13	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_109	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	16	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_110	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_111	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	21	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_112	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	24	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_113	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_114	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	29	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_115	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	3	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_116	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	12	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_117	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	20	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_118	); }
        if (f == SPIRAL2_S + SPIRAL2_I *	28	) { APL_list->addLightshow(-1, SPIRAL2_I*	1	,	pod0	, &	spiral2_119	); }
        
    }
    
    
    
    if (f >= SPIRAL1_S && f < SPIRAL1_S + SPIRAL1_T) {
        if (f == SPIRAL1_S) {
            APL_list->addLightshow(p, SPIRAL1_I*1, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*2, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*3, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*4, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*5, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*6, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*7, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*8, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*9, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*10, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*11, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*12, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*13, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*14, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*15, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL1_I*16, NULL, &wait);
            
        }
        
        if (f == SPIRAL1_S + SPIRAL1_I *	0	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_0	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	1	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_1	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	2	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_2	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	3	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_3	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	4	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_4	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	5	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_5	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	6	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_6	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	7	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_7	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	9	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_8	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	10	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_9	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	11	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_10	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	12	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_11	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	13	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_12	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	14	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_13	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	15	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_14	); }
        if (f == SPIRAL1_S + SPIRAL1_I *	15	) { APL_list->addLightshow(-1, SPIRAL1_I*	1	,	pod0	, &	spiral1_15	); }
        
        
        
        
        
    }
    
    
    
    if (f >= SPIRAL0_S && f < SPIRAL0_S + SPIRAL0_T) {
        if (f == SPIRAL0_S) {
            APL_list->addLightshow(p, SPIRAL0_I*1, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*2, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*3, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*4, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*5, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*6, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*7, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*8, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*9, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*10, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*11, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*12, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*13, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*14, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*15, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL0_I*16, NULL, &wait);
            
        }
        
        
        
        if (f == SPIRAL0_S + SPIRAL0_I *	0	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge7	, &	spiral0_0	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	1	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge8	, &	spiral0_1	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	2	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge6	, &	spiral0_2	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	3	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod12	, &	spiral0_3	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	4	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod13	, &	spiral0_4	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	5	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod14	, &	spiral0_5	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	6	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod15	, &	spiral0_6	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	7	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge9	, &	spiral0_7	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	8	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge5	, &	spiral0_8	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	9	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod8	, &	spiral0_9	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	10	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod9	, &	spiral0_10	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	11	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod10	, &	spiral0_11	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	12	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod11	, &	spiral0_12	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	13	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge4	, &	spiral0_13	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	14	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	edge10	, &	spiral0_14	); }
        if (f == SPIRAL0_S + SPIRAL0_I *	15	) { APL_list->addLightshow(-1, SPIRAL0_I*	1	,	pod4	, &	spiral0_15	); }
        
        
        
        
        
    }
    
    if (f >= SPIRAL_S && f < SPIRAL_S + SPIRAL_T) {
        if (f == SPIRAL_S) {
            APL_list->addLightshow(p, SPIRAL_I*1, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*2, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*3, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*4, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*5, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*6, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*7, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*8, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*9, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*10, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*11, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*12, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*13, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*14, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*15, NULL, &wait);
            APL_list->addLightshow(p, SPIRAL_I*16, NULL, &wait);
            
        }
        
        if (f == SPIRAL_S + SPIRAL_I *	0	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge7	, &	spiral0	); }
        if (f == SPIRAL_S + SPIRAL_I *	1	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge8	, &	spiral1	); }
        if (f == SPIRAL_S + SPIRAL_I *	2	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge6	, &	spiral2	); }
        if (f == SPIRAL_S + SPIRAL_I *	3	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod12	, &	spiral3	); }
        if (f == SPIRAL_S + SPIRAL_I *	4	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod13	, &	spiral4	); }
        if (f == SPIRAL_S + SPIRAL_I *	5	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod14	, &	spiral5	); }
        if (f == SPIRAL_S + SPIRAL_I *	6	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod15	, &	spiral6	); }
        if (f == SPIRAL_S + SPIRAL_I *	7	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge9	, &	spiral7	); }
        if (f == SPIRAL_S + SPIRAL_I *	8	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge5	, &	spiral8	); }
        if (f == SPIRAL_S + SPIRAL_I *	9	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod8	, &	spiral9	); }
        if (f == SPIRAL_S + SPIRAL_I *	10	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod9	, &	spiral10	); }
        if (f == SPIRAL_S + SPIRAL_I *	11	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod10	, &	spiral11	); }
        if (f == SPIRAL_S + SPIRAL_I *	12	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod11	, &	spiral12	); }
        if (f == SPIRAL_S + SPIRAL_I *	13	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge4	, &	spiral13	); }
        if (f == SPIRAL_S + SPIRAL_I *	14	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge10	, &	spiral14	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod4	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod0	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod1	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod2	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod3	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod5	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod6	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	pod7	, &	spiral15	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge3	, &	spiral2	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge11	, &	spiral2	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge0	, &	spiral2	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge1	, &	spiral2	); }
        if (f == SPIRAL_S + SPIRAL_I *	15	) { APL_list->addLightshow(-1, SPIRAL_I*	1	,	edge2	, &	spiral2	); }
    }
    
    
    
    if (f >= FLASHER_S && f < FLASHER_S + FLASHER_T) {
        if (f == FLASHER_S) {
            APL_list->addLightshow(p, FLASHER_I*1, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*2, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*3, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*4, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*5, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*6, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*7, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*8, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*9, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*10, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*11, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*12, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*13, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*14, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*15, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*16, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*17, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*18, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*19, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*20, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*21, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*22, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*23, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*24, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*25, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*26, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*27, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*28, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*29, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*30, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*31, NULL, &wait);
            APL_list->addLightshow(p, FLASHER_I*32, NULL, &wait);
        }
        
        if (f == FLASHER_S + FLASHER_I *	0	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_1	); }
        if (f == FLASHER_S + FLASHER_I *	2	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_2	); }
        if (f == FLASHER_S + FLASHER_I *	3	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_3	); }
        if (f == FLASHER_S + FLASHER_I *	4	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_4	); }
        if (f == FLASHER_S + FLASHER_I *	6	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_5	); }
        if (f == FLASHER_S + FLASHER_I *	8	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_6	); }
        if (f == FLASHER_S + FLASHER_I *	9	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_7	); }
        if (f == FLASHER_S + FLASHER_I *	11	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_8	); }
        if (f == FLASHER_S + FLASHER_I *	12	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_9	); }
        if (f == FLASHER_S + FLASHER_I *	17	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_10	); }
        if (f == FLASHER_S + FLASHER_I *	18	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_11	); }
        if (f == FLASHER_S + FLASHER_I *	24	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_12	); }
        if (f == FLASHER_S + FLASHER_I *	26	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_13	); }
        if (f == FLASHER_S + FLASHER_I *	28	) { APL_list->addLightshow(-1, FLASHER_I*	1	,	pod0	, &	flasher_14	); }
    }
    
    
    if (f >= MESSFALL_S && f < MESSFALL_S + MESSFALL_T) {
        if (f == MESSFALL_S) {
            APL_list->addLightshow(p, MESSFALL_I*1, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*2, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*3, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*4, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*5, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*6, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*7, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*8, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*9, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*10, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*11, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*12, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*13, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*14, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*15, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*16, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*17, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*18, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*19, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*20, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*21, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*22, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*23, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*24, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*25, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*26, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*27, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*28, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*29, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*30, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*31, NULL, &wait);
            APL_list->addLightshow(p, MESSFALL_I*32, NULL, &wait);
        }
        
        if (f == MESSFALL_S + MESSFALL_I * 	0	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall1	); }
        if (f == MESSFALL_S + MESSFALL_I * 	0	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall2	); }
        if (f == MESSFALL_S + MESSFALL_I * 	1	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall3	); }
        if (f == MESSFALL_S + MESSFALL_I * 	2	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall4	); }
        if (f == MESSFALL_S + MESSFALL_I * 	3	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall5	); }
        if (f == MESSFALL_S + MESSFALL_I * 	4	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall6	); }
        if (f == MESSFALL_S + MESSFALL_I * 	5	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall7	); }
        if (f == MESSFALL_S + MESSFALL_I * 	6	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall8	); }
        if (f == MESSFALL_S + MESSFALL_I * 	6	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall9	); }
        if (f == MESSFALL_S + MESSFALL_I * 	7	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall10	); }
        if (f == MESSFALL_S + MESSFALL_I * 	7	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall11	); }
        if (f == MESSFALL_S + MESSFALL_I * 	8	) { APL_list->addLightshow(-1, MESSFALL_I * 	5	,	pod0	, &	messfall12	); }
        if (f == MESSFALL_S + MESSFALL_I * 	8	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall13	); }
        if (f == MESSFALL_S + MESSFALL_I * 	8	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall14	); }
        if (f == MESSFALL_S + MESSFALL_I * 	9	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall15	); }
        if (f == MESSFALL_S + MESSFALL_I * 	9	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall16	); }
        if (f == MESSFALL_S + MESSFALL_I * 	9	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall17	); }
        if (f == MESSFALL_S + MESSFALL_I * 	10	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall18	); }
        if (f == MESSFALL_S + MESSFALL_I * 	10	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall19	); }
        if (f == MESSFALL_S + MESSFALL_I * 	10	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall20	); }
        if (f == MESSFALL_S + MESSFALL_I * 	10	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall21	); }
        if (f == MESSFALL_S + MESSFALL_I * 	10	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall22	); }
        if (f == MESSFALL_S + MESSFALL_I * 	11	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall23	); }
        if (f == MESSFALL_S + MESSFALL_I * 	11	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall24	); }
        if (f == MESSFALL_S + MESSFALL_I * 	12	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall25	); }
        if (f == MESSFALL_S + MESSFALL_I * 	12	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall26	); }
        if (f == MESSFALL_S + MESSFALL_I * 	13	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall27	); }
        if (f == MESSFALL_S + MESSFALL_I * 	13	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall28	); }
        if (f == MESSFALL_S + MESSFALL_I * 	14	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall29	); }
        if (f == MESSFALL_S + MESSFALL_I * 	14	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall30	); }
        if (f == MESSFALL_S + MESSFALL_I * 	15	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall31	); }
        if (f == MESSFALL_S + MESSFALL_I * 	15	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall32	); }
        if (f == MESSFALL_S + MESSFALL_I * 	16	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall33	); }
        if (f == MESSFALL_S + MESSFALL_I * 	16	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall34	); }
        if (f == MESSFALL_S + MESSFALL_I * 	17	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall35	); }
        if (f == MESSFALL_S + MESSFALL_I * 	17	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall36	); }
        if (f == MESSFALL_S + MESSFALL_I * 	18	) { APL_list->addLightshow(-1, MESSFALL_I * 	5	,	pod0	, &	messfall37	); }
        if (f == MESSFALL_S + MESSFALL_I * 	18	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall38	); }
        if (f == MESSFALL_S + MESSFALL_I * 	19	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall39	); }
        if (f == MESSFALL_S + MESSFALL_I * 	19	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall40	); }
        if (f == MESSFALL_S + MESSFALL_I * 	20	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall41	); }
        if (f == MESSFALL_S + MESSFALL_I * 	20	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall42	); }
        if (f == MESSFALL_S + MESSFALL_I * 	21	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall43	); }
        if (f == MESSFALL_S + MESSFALL_I * 	21	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall44	); }
        if (f == MESSFALL_S + MESSFALL_I * 	22	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall45	); }
        if (f == MESSFALL_S + MESSFALL_I * 	22	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall46	); }
        if (f == MESSFALL_S + MESSFALL_I * 	23	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall47	); }
        if (f == MESSFALL_S + MESSFALL_I * 	23	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall48	); }
        if (f == MESSFALL_S + MESSFALL_I * 	24	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall49	); }
        if (f == MESSFALL_S + MESSFALL_I * 	24	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall50	); }
        if (f == MESSFALL_S + MESSFALL_I * 	25	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall51	); }
        if (f == MESSFALL_S + MESSFALL_I * 	25	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall52	); }
        if (f == MESSFALL_S + MESSFALL_I * 	26	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall53	); }
        if (f == MESSFALL_S + MESSFALL_I * 	26	) { APL_list->addLightshow(-1, MESSFALL_I * 	4	,	pod0	, &	messfall54	); }
        if (f == MESSFALL_S + MESSFALL_I * 	27	) { APL_list->addLightshow(-1, MESSFALL_I * 	3	,	pod0	, &	messfall55	); }
        if (f == MESSFALL_S + MESSFALL_I * 	27	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall56	); }
        if (f == MESSFALL_S + MESSFALL_I * 	28	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall57	); }
        if (f == MESSFALL_S + MESSFALL_I * 	28	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall58	); }
        if (f == MESSFALL_S + MESSFALL_I * 	29	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall59	); }
        if (f == MESSFALL_S + MESSFALL_I * 	29	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall60	); }
        if (f == MESSFALL_S + MESSFALL_I * 	30	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall61	); }
        if (f == MESSFALL_S + MESSFALL_I * 	30	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall62	); }
        if (f == MESSFALL_S + MESSFALL_I * 	31	) { APL_list->addLightshow(-1, MESSFALL_I * 	2	,	pod0	, &	messfall63	); }
        if (f == MESSFALL_S + MESSFALL_I * 	31	) { APL_list->addLightshow(-1, MESSFALL_I * 	1	,	pod0	, &	messfall64	); }
    }
    
    
    // ============ MUCK (munge1)
    
    if (f >= MUCK_S && f < MUCK_S + MUCK_T) {
            if (f == MUCK_S) {
                APL_list->addLightshow(p, MUCK_I *1, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *2, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *3, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *4, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *5, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *6, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *7, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *8, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *9, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *10, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *11, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *12, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *13, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *14, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *15, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *16, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *17, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *18, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *19, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *20, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *21, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *22, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *23, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *24, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *25, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *26, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *27, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *28, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *29, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *30, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *31, NULL, &wait);
                APL_list->addLightshow(p, MUCK_I *32, NULL, &wait);
            }
        
        
        
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge0	, &	munge1_1	); }
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	8	,	edge11	, &	munge1_2	); }
            if (f ==	MUCK_S + 	MUCK_I * 	1	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge2	, &	munge1_3	); }
            if (f ==	MUCK_S + 	MUCK_I * 	2	) { APL_list->addLightshow(-1, MUCK_I *	5	,	edge10	, &	munge1_4	); }
            if (f ==	MUCK_S + 	MUCK_I * 	3	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge4	, &	munge1_5	); }
            if (f ==	MUCK_S + 	MUCK_I * 	4	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge5	, &	munge1_6	); }
            if (f ==	MUCK_S + 	MUCK_I * 	5	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge6	, &	munge1_7	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge7	, &	munge1_8	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	7	,	edge8	, &	munge1_9	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge9	, &	munge1_10	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod10	, &	munge1_11	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod11	, &	munge1_12	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod12	, &	munge1_13	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod13	, &	munge1_14	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	pod14	, &	munge1_15	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	edge11	, &	munge1_16	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod0	, &	munge1_17	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	16	,	pod1	, &	munge1_18	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod2	, &	munge1_19	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod3	, &	munge1_20	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge4	, &	munge1_21	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge5	, &	munge1_22	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod6	, &	munge1_23	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod7	, &	munge1_24	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod8	, &	munge1_25	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod9	, &	munge1_26	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge10	, &	munge1_27	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	7	,	pod11	, &	munge1_28	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod12	, &	munge1_29	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod13	, &	munge1_30	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod14	, &	munge1_31	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	8	,	edge11	, &	munge1_32	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge0	, &	munge1_33	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod1	, &	munge1_34	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge2	, &	munge1_35	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod3	, &	munge1_36	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod4	, &	munge1_37	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod5	, &	munge1_38	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge6	, &	munge1_39	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge7	, &	munge1_40	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod8	, &	munge1_41	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge9	, &	munge1_42	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge10	, &	munge1_43	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge11	, &	munge1_44	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_45	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge1	, &	munge1_46	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge2	, &	munge1_47	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge0	, &	munge1_48	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod1	, &	munge1_49	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge2	, &	munge1_50	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	5	,	edge3	, &	munge1_51	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge4	, &	munge1_52	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge5	, &	munge1_53	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	pod6	, &	munge1_54	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	edge7	, &	munge1_55	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod8	, &	munge1_56	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod9	, &	munge1_57	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod10	, &	munge1_58	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod11	, &	munge1_59	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod12	, &	munge1_60	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod13	, &	munge1_61	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod14	, &	munge1_62	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod15	, &	munge1_63	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod0	, &	munge1_64	); }
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge1	, &	munge1_65	); }
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge2	, &	munge1_66	); }
            if (f ==	MUCK_S + 	MUCK_I * 	1	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_67	); }
            if (f ==	MUCK_S + 	MUCK_I * 	2	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge4	, &	munge1_68	); }
            if (f ==	MUCK_S + 	MUCK_I * 	3	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge5	, &	munge1_69	); }
            if (f ==	MUCK_S + 	MUCK_I * 	4	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge6	, &	munge1_70	); }
            if (f ==	MUCK_S + 	MUCK_I * 	5	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge7	, &	munge1_71	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge8	, &	munge1_72	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	7	,	edge9	, &	munge1_73	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod10	, &	munge1_74	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge11	, &	munge1_75	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod12	, &	munge1_76	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge5	, &	munge1_77	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge4	, &	munge1_78	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	pod15	, &	munge1_79	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	pod0	, &	munge1_80	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge1	, &	munge1_81	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	16	,	pod2	, &	munge1_82	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_83	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod4	, &	munge1_84	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge5	, &	munge1_85	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge6	, &	munge1_86	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod7	, &	munge1_87	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge8	, &	munge1_88	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge9	, &	munge1_89	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod10	, &	munge1_90	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod11	, &	munge1_91	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	7	,	edge6	, &	munge1_92	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod13	, &	munge1_93	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge7	, &	munge1_94	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge8	, &	munge1_95	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod0	, &	munge1_96	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge1	, &	munge1_97	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod2	, &	munge1_98	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_99	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod4	, &	munge1_100	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod5	, &	munge1_101	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge6	, &	munge1_102	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge7	, &	munge1_103	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge8	, &	munge1_104	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod9	, &	munge1_105	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge10	, &	munge1_106	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod11	, &	munge1_107	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge4	, &	munge1_108	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod13	, &	munge1_109	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod14	, &	munge1_110	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge5	, &	munge1_111	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod0	, &	munge1_112	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod1	, &	munge1_113	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod2	, &	munge1_114	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	5	,	edge3	, &	munge1_115	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod4	, &	munge1_116	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	pod5	, &	munge1_117	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge6	, &	munge1_118	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	edge7	, &	munge1_119	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod8	, &	munge1_120	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod9	, &	munge1_121	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge10	, &	munge1_122	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod11	, &	munge1_123	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod12	, &	munge1_124	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod13	, &	munge1_125	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod14	, &	munge1_126	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge2	, &	munge1_127	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod0	, &	munge1_128	); }
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge1	, &	munge1_129	); }
            if (f ==	MUCK_S + 	MUCK_I * 	0	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge9	, &	munge1_130	); }
            if (f ==	MUCK_S + 	MUCK_I * 	1	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_131	); }
            if (f ==	MUCK_S + 	MUCK_I * 	2	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod4	, &	munge1_132	); }
            if (f ==	MUCK_S + 	MUCK_I * 	3	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge5	, &	munge1_133	); }
            if (f ==	MUCK_S + 	MUCK_I * 	4	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod6	, &	munge1_134	); }
            if (f ==	MUCK_S + 	MUCK_I * 	5	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge7	, &	munge1_135	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod8	, &	munge1_136	); }
            if (f ==	MUCK_S + 	MUCK_I * 	6	) { APL_list->addLightshow(-1, MUCK_I *	7	,	pod9	, &	munge1_137	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge10	, &	munge1_138	); }
            if (f ==	MUCK_S + 	MUCK_I * 	7	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod11	, &	munge1_139	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod12	, &	munge1_140	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge3	, &	munge1_141	); }
            if (f ==	MUCK_S + 	MUCK_I * 	8	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod14	, &	munge1_142	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	edge4	, &	munge1_143	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	8	,	pod0	, &	munge1_144	); }
            if (f ==	MUCK_S + 	MUCK_I * 	9	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod1	, &	munge1_145	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	16	,	pod2	, &	munge1_146	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod3	, &	munge1_147	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge4	, &	munge1_148	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod5	, &	munge1_149	); }
            if (f ==	MUCK_S + 	MUCK_I * 	10	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod6	, &	munge1_150	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod7	, &	munge1_151	); }
            if (f ==	MUCK_S + 	MUCK_I * 	11	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge8	, &	munge1_152	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod9	, &	munge1_153	); }
            if (f ==	MUCK_S + 	MUCK_I * 	12	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod10	, &	munge1_154	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge11	, &	munge1_155	); }
            if (f ==	MUCK_S + 	MUCK_I * 	13	) { APL_list->addLightshow(-1, MUCK_I *	7	,	pod12	, &	munge1_156	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge7	, &	munge1_157	); }
            if (f ==	MUCK_S + 	MUCK_I * 	14	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod14	, &	munge1_158	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod8	, &	munge1_159	); }
            if (f ==	MUCK_S + 	MUCK_I * 	15	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge0	, &	munge1_160	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod1	, &	munge1_161	); }
            if (f ==	MUCK_S + 	MUCK_I * 	16	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod2	, &	munge1_162	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge3	, &	munge1_163	); }
            if (f ==	MUCK_S + 	MUCK_I * 	17	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod4	, &	munge1_164	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod5	, &	munge1_165	); }
            if (f ==	MUCK_S + 	MUCK_I * 	18	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge6	, &	munge1_166	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod7	, &	munge1_167	); }
            if (f ==	MUCK_S + 	MUCK_I * 	19	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod8	, &	munge1_168	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod9	, &	munge1_169	); }
            if (f ==	MUCK_S + 	MUCK_I * 	20	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge10	, &	munge1_170	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod11	, &	munge1_171	); }
            if (f ==	MUCK_S + 	MUCK_I * 	21	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod12	, &	munge1_172	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge9	, &	munge1_173	); }
            if (f ==	MUCK_S + 	MUCK_I * 	22	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod14	, &	munge1_174	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod15	, &	munge1_175	); }
            if (f ==	MUCK_S + 	MUCK_I * 	23	) { APL_list->addLightshow(-1, MUCK_I *	4	,	edge0	, &	munge1_176	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod1	, &	munge1_177	); }
            if (f ==	MUCK_S + 	MUCK_I * 	24	) { APL_list->addLightshow(-1, MUCK_I *	2	,	edge2	, &	munge1_178	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod3	, &	munge1_179	); }
            if (f ==	MUCK_S + 	MUCK_I * 	25	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod4	, &	munge1_180	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	pod5	, &	munge1_181	); }
            if (f ==	MUCK_S + 	MUCK_I * 	26	) { APL_list->addLightshow(-1, MUCK_I *	6	,	edge6	, &	munge1_182	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod7	, &	munge1_183	); }
            if (f ==	MUCK_S + 	MUCK_I * 	27	) { APL_list->addLightshow(-1, MUCK_I *	5	,	pod8	, &	munge1_184	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod9	, &	munge1_185	); }
            if (f ==	MUCK_S + 	MUCK_I * 	28	) { APL_list->addLightshow(-1, MUCK_I *	4	,	pod10	, &	munge1_186	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	pod11	, &	munge1_187	); }
            if (f ==	MUCK_S + 	MUCK_I * 	29	) { APL_list->addLightshow(-1, MUCK_I *	3	,	edge3	, &	munge1_188	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	2	,	pod13	, &	munge1_189	); }
            if (f ==	MUCK_S + 	MUCK_I * 	30	) { APL_list->addLightshow(-1, MUCK_I *	1	,	edge2	, &	munge1_190	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod15	, &	munge1_191	); }
            if (f ==	MUCK_S + 	MUCK_I * 	31	) { APL_list->addLightshow(-1, MUCK_I *	1	,	pod0	, &	munge1_192	); }
        
        }

        if (f >= BLACKOUT0_S && f < BLACKOUT0_S + BLACKOUT0_T) {
            if (f == BLACKOUT0_S) APL_list->addLightshow(p, BLACKOUT0_T, NULL, &wait);
            if (f == BLACKOUT0_S) addtoAllPods(BLACKOUT0_I, &blackout );
        }
    

 
    if (f >= WIND_S && f < WIND_S + WIND_T) {

        if (f == WIND_S) {
            APL_list->addLightshow(p, WIND_I * 1, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 2, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 3, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 4, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 5, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 6, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 7, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 8, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 9, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 10, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 11, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 12, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 13, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 14, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 15, NULL, &wait);
            APL_list->addLightshow(p, WIND_I * 16, NULL, &wait);
    
    
        }
        if (f == WIND_S + WIND_I *	0	) { APL_list->addLightshow(-1, WIND_I * 	16	,	edge4	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	1	) { APL_list->addLightshow(-1, WIND_I * 	15	,	edge5	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	1	) { APL_list->addLightshow(-1, WIND_I * 	15	,	pod15	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	2	) { APL_list->addLightshow(-1, WIND_I * 	9	,	edge6	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	2	) { APL_list->addLightshow(-1, WIND_I * 	14	,	pod14	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	2	) { APL_list->addLightshow(-1, WIND_I * 	13	,	pod11	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	3	) { APL_list->addLightshow(-1, WIND_I * 	9	,	edge7	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	3	) { APL_list->addLightshow(-1, WIND_I * 	12	,	pod13	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	3	) { APL_list->addLightshow(-1, WIND_I * 	12	,	pod10	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	4	) { APL_list->addLightshow(-1, WIND_I * 	11	,	pod7	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	5	) { APL_list->addLightshow(-1, WIND_I * 	10	,	pod12	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	6	) { APL_list->addLightshow(-1, WIND_I * 	9	,	pod9	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	7	) { APL_list->addLightshow(-1, WIND_I * 	8	,	edge3	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	8	) { APL_list->addLightshow(-1, WIND_I * 	6	,	pod3	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	8	) { APL_list->addLightshow(-1, WIND_I * 	7	,	pod2	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	8	) { APL_list->addLightshow(-1, WIND_I * 	8	,	pod8	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	9	) { APL_list->addLightshow(-1, WIND_I * 	6	,	pod4	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	9	) { APL_list->addLightshow(-1, WIND_I * 	4	,	edge8	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	9	) { APL_list->addLightshow(-1, WIND_I * 	6	,	edge9	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	10	) { APL_list->addLightshow(-1, WIND_I * 	4	,	edge10	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	10	) { APL_list->addLightshow(-1, WIND_I * 	6	,	edge11	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	10	) { APL_list->addLightshow(-1, WIND_I * 	6	,	pod6	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	11	) { APL_list->addLightshow(-1, WIND_I * 	5	,	pod5	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	12	) { APL_list->addLightshow(-1, WIND_I * 	4	,	edge2	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	13	) { APL_list->addLightshow(-1, WIND_I * 	3	,	edge1	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	14	) { APL_list->addLightshow(-1, WIND_I * 	2	,	pod1	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	15	) { APL_list->addLightshow(-1, WIND_I * 	1	,	pod0	, &	wind0	); }
        if (f == WIND_S + WIND_I * 	15	) { APL_list->addLightshow(-1, WIND_I * 	1	,	edge0	, &	wind0	); }
        
  
    }

    
    
    // ============M 0 (First instance of Master Mix)
    
    if (f >= M0_S && f < M0_S + M0_T) {        
        
        switch ( f  ) {
                
                //============================= M0 MIX
            case M0_S:
                APL_list->addLightshow(p, M0_I, pod0, &a0);
                APL_list->addLightshow(-1, M0_I, pod1, &a1);
                APL_list->addLightshow(-1, M0_I, pod2, &a2);
                APL_list->addLightshow(-1, M0_I, pod3, &a3);
                APL_list->addLightshow(-1, M0_I, pod4, &a4);
                APL_list->addLightshow(-1, M0_I, pod5, &a5);
                APL_list->addLightshow(-1, M0_I, pod6, &a6);
                APL_list->addLightshow(-1, M0_I, pod7, &a7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &a0);
                APL_list->addLightshow(-1, M0_I, pod9, &a1);
                APL_list->addLightshow(-1, M0_I, pod10, &a2);
                APL_list->addLightshow(-1, M0_I, pod11, &a3);
                APL_list->addLightshow(-1, M0_I, pod12, &a4);
                APL_list->addLightshow(-1, M0_I, pod13, &a5);
                APL_list->addLightshow(-1, M0_I, pod14, &a6);
                APL_list->addLightshow(-1, M0_I, pod15, &a7);
                
                APL_list->addLightshow(-1, M0_I * 2, edge0, &edgewipe0);
                APL_list->addLightshow(-1, M0_I * 2, edge1, &edgewipe1);
                APL_list->addLightshow(-1, M0_I * 2, edge2, &edgewipe2);
                
                APL_list->addLightshow(-1, M0_I * 2, edge3, &edgewipe0);
                APL_list->addLightshow(-1, M0_I * 2, edge4, &edgewipe1);
                APL_list->addLightshow(-1, M0_I * 2, edge5, &edgewipe2);
                
                APL_list->addLightshow(-1, M0_I * 2, edge6, &edgewipe0);
                APL_list->addLightshow(-1, M0_I * 2, edge7, &edgewipe1);
                APL_list->addLightshow(-1, M0_I * 2, edge8, &edgewipe2);
                
                APL_list->addLightshow(-1, M0_I * 2, edge9, &edgewipe0);
                APL_list->addLightshow(-1, M0_I * 2, edge10, &edgewipe1);
                APL_list->addLightshow(-1, M0_I * 2, edge11, &edgewipe2);
                
                
                break;
            case M0_S + M0_I * 1:
                
                APL_list->addLightshow(p, M0_I, pod0, &b0);
                APL_list->addLightshow(-1, M0_I, pod1, &b1);
                APL_list->addLightshow(-1, M0_I, pod2, &b2);
                APL_list->addLightshow(-1, M0_I, pod3, &b3);
                APL_list->addLightshow(-1, M0_I, pod4, &b4);
                APL_list->addLightshow(-1, M0_I, pod5, &b5);
                APL_list->addLightshow(-1, M0_I, pod6, &b6);
                APL_list->addLightshow(-1, M0_I, pod7, &b7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &b0);
                APL_list->addLightshow(-1, M0_I, pod9, &b1);
                APL_list->addLightshow(-1, M0_I, pod10, &b2);
                APL_list->addLightshow(-1, M0_I, pod11, &b3);
                APL_list->addLightshow(-1, M0_I, pod12, &b4);
                APL_list->addLightshow(-1, M0_I, pod13, &b5);
                APL_list->addLightshow(-1, M0_I, pod14, &b6);
                APL_list->addLightshow(-1, M0_I, pod15, &b7);
                break;
            case M0_S + M0_I * 2:
                
                APL_list->addLightshow(p, M0_I, pod0, &c0);
                APL_list->addLightshow(-1, M0_I, pod1, &c1);
                APL_list->addLightshow(-1, M0_I, pod2, &c2);
                APL_list->addLightshow(-1, M0_I, pod3, &c3);
                APL_list->addLightshow(-1, M0_I, pod4, &c4);
                APL_list->addLightshow(-1, M0_I, pod5, &c5);
                APL_list->addLightshow(-1, M0_I, pod6, &c6);
                APL_list->addLightshow(-1, M0_I, pod7, &c7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &c0);
                APL_list->addLightshow(-1, M0_I, pod9, &c1);
                APL_list->addLightshow(-1, M0_I, pod10, &c2);
                APL_list->addLightshow(-1, M0_I, pod11, &c3);
                APL_list->addLightshow(-1, M0_I, pod12, &c4);
                APL_list->addLightshow(-1, M0_I, pod13, &c5);
                APL_list->addLightshow(-1, M0_I, pod14, &c6);
                APL_list->addLightshow(-1, M0_I, pod15, &c7);
                
                APL_list->addLightshow(-1, M0_I, edge0, &edgewipe10);
                APL_list->addLightshow(-1, M0_I, edge1, &edgewipe11);
                APL_list->addLightshow(-1, M0_I, edge2, &edgewipe12);
                
                APL_list->addLightshow(-1, M0_I, edge3, &edgewipe10);
                APL_list->addLightshow(-1, M0_I, edge4, &edgewipe11);
                APL_list->addLightshow(-1, M0_I, edge5, &edgewipe12);
                
                APL_list->addLightshow(-1, M0_I, edge6, &edgewipe10);
                APL_list->addLightshow(-1, M0_I, edge7, &edgewipe11);
                APL_list->addLightshow(-1, M0_I, edge8, &edgewipe12);
                
                APL_list->addLightshow(-1, M0_I, edge9, &edgewipe10);
                APL_list->addLightshow(-1, M0_I, edge10, &edgewipe11);
                APL_list->addLightshow(-1, M0_I, edge11, &edgewipe12);
                break;
            case M0_S + M0_I * 3:
                
                //yin ynag
                APL_list->addLightshow(p, M0_I, pod3, &f0);
                APL_list->addLightshow(-1, M0_I, pod7, &f1);
                APL_list->addLightshow(-1, M0_I, pod9, &f1);
                APL_list->addLightshow(-1, M0_I, pod10, &f3);
                APL_list->addLightshow(-1, M0_I, pod11, &f0);
                APL_list->addLightshow(-1, M0_I, pod13, &f1);
                APL_list->addLightshow(-1, M0_I, pod14, &f3);
                APL_list->addLightshow(-1, M0_I, pod15, &f1);
                
                APL_list->addLightshow(-1, M0_I, edge0, &f3);
                APL_list->addLightshow(-1, M0_I, edge1, &f0);
                APL_list->addLightshow(-1, M0_I, edge2, &f3);
                APL_list->addLightshow(-1, M0_I, edge3, &f2);
                APL_list->addLightshow(-1, M0_I, edge4, &f0);
                APL_list->addLightshow(-1, M0_I, edge5, &f3);
                
                
                
                APL_list->addLightshow(-1, M0_I, pod0, &h1);
                APL_list->addLightshow(-1, M0_I, pod1, &h2);
                APL_list->addLightshow(-1, M0_I, pod2, &h6);
                APL_list->addLightshow(-1, M0_I, pod4, &h6);
                APL_list->addLightshow(-1, M0_I, pod5, &h2);
                APL_list->addLightshow(-1, M0_I, pod6, &h1);
                APL_list->addLightshow(-1, M0_I, pod8, &h2);
                APL_list->addLightshow(-1, M0_I, pod12, &h6);
                
                APL_list->addLightshow(-1, M0_I, edge6, &h6);
                APL_list->addLightshow(-1, M0_I, edge7, &h2);
                APL_list->addLightshow(-1, M0_I, edge8, &h2);
                APL_list->addLightshow(-1, M0_I, edge9, &h2);
                APL_list->addLightshow(-1, M0_I, edge10, &h6);
                APL_list->addLightshow(-1, M0_I, edge11, &h6);
                
                break;
            case M0_S + M0_I * 4:
                APL_list->addLightshow(p, M0_I, pod0, &e0);
                APL_list->addLightshow(-1, M0_I, pod1, &e1);
                APL_list->addLightshow(-1, M0_I, pod2, &e2);
                APL_list->addLightshow(-1, M0_I, pod3, &e3);
                APL_list->addLightshow(-1, M0_I, pod4, &e4);
                APL_list->addLightshow(-1, M0_I, pod5, &e5);
                APL_list->addLightshow(-1, M0_I, pod6, &e6);
                APL_list->addLightshow(-1, M0_I, pod7, &e7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &e0);
                APL_list->addLightshow(-1, M0_I, pod9, &e1);
                APL_list->addLightshow(-1, M0_I, pod10, &e2);
                APL_list->addLightshow(-1, M0_I, pod11, &e3);
                APL_list->addLightshow(-1, M0_I, pod12, &e4);
                APL_list->addLightshow(-1, M0_I, pod13, &e5);
                APL_list->addLightshow(-1, M0_I, pod14, &e6);
                APL_list->addLightshow(-1, M0_I, pod15, &e7);
                
                APL_list->addLightshow(-1, M0_I * 2, edge0, &edgewipe20);
                APL_list->addLightshow(-1, M0_I * 2, edge1, &edgewipe21);
                APL_list->addLightshow(-1, M0_I * 2, edge2, &edgewipe22);
                
                APL_list->addLightshow(-1, M0_I * 2, edge3, &edgewipe20);
                APL_list->addLightshow(-1, M0_I * 2, edge4, &edgewipe21);
                APL_list->addLightshow(-1, M0_I * 2, edge5, &edgewipe22);
                
                APL_list->addLightshow(-1, M0_I * 2, edge6, &edgewipe20);
                APL_list->addLightshow(-1, M0_I * 2, edge7, &edgewipe21);
                APL_list->addLightshow(-1, M0_I * 2, edge8, &edgewipe22);
                
                APL_list->addLightshow(-1, M0_I * 2, edge9, &edgewipe20);
                APL_list->addLightshow(-1, M0_I * 2, edge10, &edgewipe21);
                APL_list->addLightshow(-1, M0_I * 2, edge11, &edgewipe22);
                break;
            case M0_S + M0_I * 5:
                APL_list->addLightshow(p, M0_I, pod0, &f0);
                APL_list->addLightshow(-1, M0_I, pod1, &f1);
                APL_list->addLightshow(-1, M0_I, pod2, &f2);
                APL_list->addLightshow(-1, M0_I, pod3, &f3);
                APL_list->addLightshow(-1, M0_I, pod4, &f4);
                APL_list->addLightshow(-1, M0_I, pod5, &f5);
                APL_list->addLightshow(-1, M0_I, pod6, &f6);
                APL_list->addLightshow(-1, M0_I, pod7, &f7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &f0);
                APL_list->addLightshow(-1, M0_I, pod9, &f1);
                APL_list->addLightshow(-1, M0_I, pod10, &f2);
                APL_list->addLightshow(-1, M0_I, pod11, &f3);
                APL_list->addLightshow(-1, M0_I, pod12, &f4);
                APL_list->addLightshow(-1, M0_I, pod13, &f5);
                APL_list->addLightshow(-1, M0_I, pod14, &f6);
                APL_list->addLightshow(-1, M0_I, pod15, &f7);
                break;
            case M0_S + M0_I * 6:
                APL_list->addLightshow(p, M0_I, pod0, &g0);
                APL_list->addLightshow(-1, M0_I, pod1, &g1);
                APL_list->addLightshow(-1, M0_I, pod2, &g2);
                APL_list->addLightshow(-1, M0_I, pod3, &g3);
                APL_list->addLightshow(-1, M0_I, pod4, &g4);
                APL_list->addLightshow(-1, M0_I, pod5, &g5);
                APL_list->addLightshow(-1, M0_I, pod6, &g6);
                APL_list->addLightshow(-1, M0_I, pod7, &g7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &g0);
                APL_list->addLightshow(-1, M0_I, pod9, &g1);
                APL_list->addLightshow(-1, M0_I, pod10, &g2);
                APL_list->addLightshow(-1, M0_I, pod11, &g3);
                APL_list->addLightshow(-1, M0_I, pod12, &g4);
                APL_list->addLightshow(-1, M0_I, pod13, &g5);
                APL_list->addLightshow(-1, M0_I, pod14, &g6);
                APL_list->addLightshow(-1, M0_I, pod15, &g7);
                
                APL_list->addLightshow(-1, M0_I, edge0, &g7);
                APL_list->addLightshow(-1, M0_I, edge1, &g6);
                APL_list->addLightshow(-1, M0_I, edge2, &g1);
                
                APL_list->addLightshow(-1, M0_I, edge3, &g4);
                APL_list->addLightshow(-1, M0_I, edge4, &g3);
                APL_list->addLightshow(-1, M0_I, edge5, &g3);
                
                APL_list->addLightshow(-1, M0_I, edge6, &g2);
                APL_list->addLightshow(-1, M0_I, edge7, &g0);
                APL_list->addLightshow(-1, M0_I, edge8, &g7);
                
                APL_list->addLightshow(-1, M0_I, edge9, &g1);
                APL_list->addLightshow(-1, M0_I, edge10, &g3);
                APL_list->addLightshow(-1, M0_I, edge11, &g7);
                break;
            case M0_S + M0_I * 7:
                APL_list->addLightshow(p, M0_I, pod0, &h0);
                APL_list->addLightshow(-1, M0_I, pod1, &h1);
                APL_list->addLightshow(-1, M0_I, pod2, &h2);
                APL_list->addLightshow(-1, M0_I, pod3, &h3);
                APL_list->addLightshow(-1, M0_I, pod4, &h4);
                APL_list->addLightshow(-1, M0_I, pod5, &h5);
                APL_list->addLightshow(-1, M0_I, pod6, &h6);
                APL_list->addLightshow(-1, M0_I, pod7, &h7);
                
                APL_list->addLightshow(-1, M0_I, pod8, &h0);
                APL_list->addLightshow(-1, M0_I, pod9, &h1);
                APL_list->addLightshow(-1, M0_I, pod10, &h2);
                APL_list->addLightshow(-1, M0_I, pod11, &h3);
                APL_list->addLightshow(-1, M0_I, pod12, &h4);
                APL_list->addLightshow(-1, M0_I, pod13, &h5);
                APL_list->addLightshow(-1, M0_I, pod14, &h6);
                APL_list->addLightshow(-1, M0_I, pod15, &h7);
                
                APL_list->addLightshow(-1, M0_I, edge0, &edgewipe30);
                APL_list->addLightshow(-1, M0_I, edge1, &edgewipe31);
                APL_list->addLightshow(-1, M0_I, edge2, &edgewipe31);
                
                APL_list->addLightshow(-1, M0_I, edge3, &edgewipe30);
                APL_list->addLightshow(-1, M0_I, edge4, &edgewipe32);
                APL_list->addLightshow(-1, M0_I, edge5, &edgewipe30);
                
                APL_list->addLightshow(-1, M0_I, edge6, &edgewipe31);
                APL_list->addLightshow(-1, M0_I, edge7, &edgewipe30);
                APL_list->addLightshow(-1, M0_I, edge8, &edgewipe31);
                
                APL_list->addLightshow(-1, M0_I, edge9, &edgewipe31);
                APL_list->addLightshow(-1, M0_I, edge10, &edgewipe31);
                APL_list->addLightshow(-1, M0_I, edge11, &edgewipe32);
                
                break;
                
            default:
                break;
        }
    }  // M0 (master Mix)
    
    
    if (f >= BLACKOUT1_S && f < BLACKOUT1_S + BLACKOUT1_T) {
        if (f == BLACKOUT1_S) APL_list->addLightshow(p, BLACKOUT1_T, NULL, &wait);
        if (f == BLACKOUT1_S) addtoAllPods(BLACKOUT1_I, &blackout );
    }
    
    
    //===============WINDYELLOW
    
    if (f >= WINDYELLOW_S && f < WINDYELLOW_S + WINDYELLOW_T) {
        if (f == WINDYELLOW_S) {
            APL_list->addLightshow(p,WINDYELLOW_I *  1, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  2, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  3, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  4, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  5, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  6, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  7, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  8, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  9, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  10, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  11, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  12, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  13, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  14, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  15, NULL, &wait);
            APL_list->addLightshow(p,WINDYELLOW_I *  16, NULL, &wait);
    
    
        }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 0	) { APL_list->addLightshow(-1,WINDYELLOW_I * 16	,	edge4	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 1	) { APL_list->addLightshow(-1,WINDYELLOW_I * 15	,	edge5	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 1	) { APL_list->addLightshow(-1,WINDYELLOW_I * 15	,	pod15	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 2	) { APL_list->addLightshow(-1,WINDYELLOW_I * 9	,	edge6	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 2	) { APL_list->addLightshow(-1,WINDYELLOW_I * 14	,	pod14	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 2	) { APL_list->addLightshow(-1,WINDYELLOW_I * 13	,	pod11	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 3	) { APL_list->addLightshow(-1,WINDYELLOW_I * 9	,	edge7	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 3	) { APL_list->addLightshow(-1,WINDYELLOW_I * 12	,	pod13	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 3	) { APL_list->addLightshow(-1,WINDYELLOW_I * 12	,	pod10	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 4	) { APL_list->addLightshow(-1,WINDYELLOW_I * 11	,	pod7	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 5	) { APL_list->addLightshow(-1,WINDYELLOW_I * 10	,	pod12	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 6	) { APL_list->addLightshow(-1,WINDYELLOW_I * 9	,	pod9	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 7	) { APL_list->addLightshow(-1,WINDYELLOW_I * 8	,	edge3	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 8	) { APL_list->addLightshow(-1,WINDYELLOW_I * 6	,	pod3	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 8	) { APL_list->addLightshow(-1,WINDYELLOW_I * 7	,	pod2	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 8	) { APL_list->addLightshow(-1,WINDYELLOW_I * 8	,	pod8	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 9	) { APL_list->addLightshow(-1,WINDYELLOW_I * 6	,	pod4	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 9	) { APL_list->addLightshow(-1,WINDYELLOW_I * 4	,	edge8	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 9	) { APL_list->addLightshow(-1,WINDYELLOW_I * 6	,	edge9	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 10	) { APL_list->addLightshow(-1,WINDYELLOW_I * 4	,	edge10	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 10	) { APL_list->addLightshow(-1,WINDYELLOW_I * 6	,	edge11	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 10	) { APL_list->addLightshow(-1,WINDYELLOW_I * 6	,	pod6	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 11	) { APL_list->addLightshow(-1,WINDYELLOW_I * 5	,	pod5	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 12	) { APL_list->addLightshow(-1,WINDYELLOW_I * 4	,	edge2	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 13	) { APL_list->addLightshow(-1,WINDYELLOW_I * 3	,	edge1	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 14	) { APL_list->addLightshow(-1,WINDYELLOW_I * 2	,	pod1	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 15	) { APL_list->addLightshow(-1,WINDYELLOW_I * 1	,	pod0	, &	windyellow0	); }
        if (f == WINDYELLOW_S + WINDYELLOW_I * 15	) { APL_list->addLightshow(-1,WINDYELLOW_I * 1	,	edge0	, &	windyellow0	); }
        
    
        
    }
    
    //================= PUMPKIN
    
    if (f >= PUMPKIN_S && f < PUMPKIN_S + PUMPKIN_T) {

        if (f == PUMPKIN_S) {
            APL_list->addLightshow(p, PUMPKIN_I * 1, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 2, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 3, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 4, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 5, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 6, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 7, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 8, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 9, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 10, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 11, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 12, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 13, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 14, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 15, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 16, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 17, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 18, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 19, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 20, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 21, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 22, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 23, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 24, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 25, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 26, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 27, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 28, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 29, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 30, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 31, NULL, &wait);
            APL_list->addLightshow(p, PUMPKIN_I * 32, NULL, &wait);
        }
            if (f == PUMPKIN_S + PUMPKIN_I * 0	) { addtoAllPods(PUMPKIN_I * 8, pumpkin_0); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_1	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_2	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_3	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_4	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_5	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_6	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 8	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_7	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 9	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_8	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 10	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_9	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 11	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_10	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 12	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_11	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 13	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_12	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 13	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_13	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 14	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_14	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 14	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_15	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 15	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_16	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 16	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_17	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 17	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_18	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 18	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_19	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 19	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_20	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 20	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_21	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 21	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_22	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 22	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_23	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 23	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_24	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 24	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_25	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 25	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_26	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 26	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_27	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 27	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_28	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 28	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_29	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 29	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_30	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 30	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_31	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 31	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_32	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 31	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_33	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 31	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_34	); }
            if (f == PUMPKIN_S + PUMPKIN_I * 31	) { APL_list->addLightshow(-1, PUMPKIN_I * 	1	,	pod0	, &	pumpkin_35	); }
        }
    
    // =============== WIND WHITE
    
    if (f >= WINDWHITE_S && f < WINDWHITE_S + WINDWHITE_T) {

        if (f == WINDWHITE_S) {
            APL_list->addLightshow(p, WINDWHITE_I*1, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*2, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*3, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*4, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*5, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*6, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*7, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*8, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*9, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*10, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*11, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*12, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*13, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*14, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*15, NULL, &wait);
            APL_list->addLightshow(p, WINDWHITE_I*16, NULL, &wait);
        }

        if (f == WINDWHITE_S + WINDWHITE_I * 0	) { APL_list->addLightshow(-1, WINDWHITE_I*	16	,	edge1	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 1	) { APL_list->addLightshow(-1, WINDWHITE_I*	15	,	edge4	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 1	) { APL_list->addLightshow(-1, WINDWHITE_I*	15	,	pod13	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 2	) { APL_list->addLightshow(-1, WINDWHITE_I*	9	,	edge7	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 2	) { APL_list->addLightshow(-1, WINDWHITE_I*	14	,	edge2	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 2	) { APL_list->addLightshow(-1, WINDWHITE_I*	13	,	pod14	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 3	) { APL_list->addLightshow(-1, WINDWHITE_I*	9	,	edge0	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 3	) { APL_list->addLightshow(-1, WINDWHITE_I*	12	,	edge3	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 3	) { APL_list->addLightshow(-1, WINDWHITE_I*	12	,	pod2	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 4	) { APL_list->addLightshow(-1, WINDWHITE_I*	11	,	edge10	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 5	) { APL_list->addLightshow(-1, WINDWHITE_I*	10	,	pod0	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 6	) { APL_list->addLightshow(-1, WINDWHITE_I*	9	,	pod12	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 7	) { APL_list->addLightshow(-1, WINDWHITE_I*	8	,	pod15	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 8	) { APL_list->addLightshow(-1, WINDWHITE_I*	6	,	edge9	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 8	) { APL_list->addLightshow(-1, WINDWHITE_I*	7	,	pod10	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 8	) { APL_list->addLightshow(-1, WINDWHITE_I*	8	,	pod11	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 9	) { APL_list->addLightshow(-1, WINDWHITE_I*	6	,	edge11	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 9	) { APL_list->addLightshow(-1, WINDWHITE_I*	4	,	pod9	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 9	) { APL_list->addLightshow(-1, WINDWHITE_I*	6	,	edge5	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 10	) { APL_list->addLightshow(-1, WINDWHITE_I*	4	,	pod7	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 10	) { APL_list->addLightshow(-1, WINDWHITE_I*	6	,	pod1	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 10	) { APL_list->addLightshow(-1, WINDWHITE_I*	6	,	pod8	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 11	) { APL_list->addLightshow(-1, WINDWHITE_I*	5	,	pod6	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 12	) { APL_list->addLightshow(-1, WINDWHITE_I*	4	,	edge6	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 13	) { APL_list->addLightshow(-1, WINDWHITE_I*	3	,	edge8	, &	windwhite0	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 14	) { APL_list->addLightshow(-1, WINDWHITE_I*	2	,	pod3	, &	windwhite1	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 15	) { APL_list->addLightshow(-1, WINDWHITE_I*	1	,	pod4	, &	windwhite2	); }
        if (f == WINDWHITE_S + WINDWHITE_I * 15	) { APL_list->addLightshow(-1, WINDWHITE_I*	1	,	pod5	, &	windwhite1	); }
        
    }


    // ===============AUSSIE
    
    if (f >= AUSSIE_S && f < AUSSIE_S + AUSSIE_T) {

        switch ( f ) {
            case AUSSIE_S:
                APL_list->addLightshow(p, AUSSIE_I*3, pod0, &aus0);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod1, &aus1);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod2, &aus2);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod3, &aus3);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod4, &aus4);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod5, &aus5);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod6, &aus6);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod7, &aus7);
    
                APL_list->addLightshow(-1, AUSSIE_I*3, pod8, &aus0);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod9, &aus1);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod10, &aus2);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod11, &aus3);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod12, &aus4);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod13, &aus5);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod14, &aus6);
                APL_list->addLightshow(-1, AUSSIE_I*3, pod15, &aus7);
    
                APL_list->addLightshow(p, AUSSIE_I, edge0, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge1, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge2, &auswipe0);
    
                APL_list->addLightshow(-1, AUSSIE_I, edge3, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge4, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge5, &auswipe0);
    
                APL_list->addLightshow(-1, AUSSIE_I, edge6, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge7, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge8, &auswipe0);
    
                APL_list->addLightshow(-1, AUSSIE_I, edge9, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge10, &auswipe0);
                APL_list->addLightshow(-1, AUSSIE_I, edge11, &auswipe0);
    
    
                break;
            case AUSSIE_S + AUSSIE_I * 1:
    
    
                APL_list->addLightshow(p, AUSSIE_I, edge0, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge1, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge2, &auswipe2);
    
    
                break;
            case AUSSIE_S + AUSSIE_I * 2:
    
    
                APL_list->addLightshow(p, AUSSIE_I, edge3, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge4, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge5, &auswipe2);
    
    
                break;
            case AUSSIE_S + AUSSIE_I * 3:
    
                APL_list->addLightshow(p, AUSSIE_I, edge6, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge7, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge8, &auswipe2);
    
                break;
            case AUSSIE_S + AUSSIE_I * 4:
                APL_list->addLightshow(p, AUSSIE_I, edge9, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge10, &auswipe1);
                APL_list->addLightshow(-1, AUSSIE_I, edge11, &auswipe2);
    
                APL_list->addLightshow(p, AUSSIE_I*4, pod0, &aus0);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod1, &aus1);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod2, &aus2);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod3, &aus3);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod4, &aus4);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod5, &aus5);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod6, &aus6);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod7, &aus7);
    
                APL_list->addLightshow(-1, AUSSIE_I*4, pod8, &aus0);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod9, &aus1);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod10, &aus2);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod11, &aus3);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod12, &aus4);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod13, &aus5);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod14, &aus6);
                APL_list->addLightshow(-1, AUSSIE_I*4, pod15, &aus7);
                break;
                    case AUSSIE_S + AUSSIE_I * 7:
    
    
                APL_list->addLightshow(-1, AUSSIE_I, edge0, &auswipe30);
                APL_list->addLightshow(-1, AUSSIE_I, edge1, &auswipe31);
                APL_list->addLightshow(-1, AUSSIE_I, edge2, &auswipe31);
    
                APL_list->addLightshow(-1, AUSSIE_I, edge3, &auswipe30);
                APL_list->addLightshow(-1, AUSSIE_I, edge4, &auswipe32);
                APL_list->addLightshow(-1, AUSSIE_I, edge5, &auswipe30);
    
                APL_list->addLightshow(-1, AUSSIE_I, edge6, &auswipe31);
                APL_list->addLightshow(-1, AUSSIE_I, edge7, &auswipe30);
                APL_list->addLightshow(-1, AUSSIE_I, edge8, &auswipe31);
                
                APL_list->addLightshow(-1, AUSSIE_I, edge9, &auswipe31);
                APL_list->addLightshow(-1, AUSSIE_I, edge10, &auswipe31);
                APL_list->addLightshow(-1, AUSSIE_I, edge11, &auswipe32);
                
                break;
                
            default:
                break;
        }

}

                //===================MUNGE
                
    if (f >= MUNGE_S && f < MUNGE_S + MUNGE_T) {
 
                    if (f == MUNGE_S) {
                        APL_list->addLightshow(p, MUNGE_I*1, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*2, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*3, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*4, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*5, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*6, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*7, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*8, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*9, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*10, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*11, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*12, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*13, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*14, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*15, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*16, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*17, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*18, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*19, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*20, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*21, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*22, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*23, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*24, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*25, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*26, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*27, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*28, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*29, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*30, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*31, NULL, &wait);
                        APL_list->addLightshow(p, MUNGE_I*32, NULL, &wait);
                    }
                
                    if (f == MUNGE_S + MUNGE_I * 0	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod1	, &	munge1	); }
                    if (f == MUNGE_S + MUNGE_I * 0	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	pod2	, &	munge2	); }
                    if (f == MUNGE_S + MUNGE_I * 1	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod13	, &	munge3	); }
                    if (f == MUNGE_S + MUNGE_I * 2	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod4	, &	munge4	); }
                    if (f == MUNGE_S + MUNGE_I * 3	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	edge7	, &	munge5	); }
                    if (f == MUNGE_S + MUNGE_I * 4	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod6	, &	munge6	); }
                    if (f == MUNGE_S + MUNGE_I * 5	) { APL_list->addLightshow(-1, MUNGE_I*	6	,	edge11	, &	munge7	); }
                    if (f == MUNGE_S + MUNGE_I * 6	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge5	, &	munge8	); }
                    if (f == MUNGE_S + MUNGE_I * 6	) { APL_list->addLightshow(-1, MUNGE_I*	7	,	edge3	, &	munge9	); }
                    if (f == MUNGE_S + MUNGE_I * 7	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	pod0	, &	munge10	); }
                    if (f == MUNGE_S + MUNGE_I * 7	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod12	, &	munge11	); }
                    if (f == MUNGE_S + MUNGE_I * 8	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	pod8	, &	munge12	); }
                    if (f == MUNGE_S + MUNGE_I * 8	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	pod10	, &	munge13	); }
                    if (f == MUNGE_S + MUNGE_I * 8	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod11	, &	munge14	); }
                    if (f == MUNGE_S + MUNGE_I * 9	) { APL_list->addLightshow(-1, MUNGE_I*	8	,	pod14	, &	munge15	); }
                    if (f == MUNGE_S + MUNGE_I * 9	) { APL_list->addLightshow(-1, MUNGE_I*	8	,	edge1	, &	munge16	); }
                    if (f == MUNGE_S + MUNGE_I * 9	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod5	, &	munge17	); }
                    if (f == MUNGE_S + MUNGE_I * 10	) { APL_list->addLightshow(-1, MUNGE_I*	16	,	edge2	, &	munge18	); }
                    if (f == MUNGE_S + MUNGE_I * 10	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	edge0	, &	munge19	); }
                    if (f == MUNGE_S + MUNGE_I * 10	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge4	, &	munge20	); }
                    if (f == MUNGE_S + MUNGE_I * 10	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod15	, &	munge21	); }
                    if (f == MUNGE_S + MUNGE_I * 10	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod3	, &	munge22	); }
                    if (f == MUNGE_S + MUNGE_I * 11	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	pod7	, &	munge23	); }
                    if (f == MUNGE_S + MUNGE_I * 11	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	edge8	, &	munge24	); }
                    if (f == MUNGE_S + MUNGE_I * 12	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge9	, &	munge25	); }
                    if (f == MUNGE_S + MUNGE_I * 12	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	edge10	, &	munge26	); }
                    if (f == MUNGE_S + MUNGE_I * 13	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod9	, &	munge27	); }
                    if (f == MUNGE_S + MUNGE_I * 13	) { APL_list->addLightshow(-1, MUNGE_I*	7	,	edge11	, &	munge28	); }
                    if (f == MUNGE_S + MUNGE_I * 14	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	edge6	, &	munge29	); }
                    if (f == MUNGE_S + MUNGE_I * 14	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	pod1	, &	munge30	); }
                    if (f == MUNGE_S + MUNGE_I * 15	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	pod2	, &	munge31	); }
                    if (f == MUNGE_S + MUNGE_I * 15	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod13	, &	munge32	); }
                    if (f == MUNGE_S + MUNGE_I * 16	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod4	, &	munge33	); }
                    if (f == MUNGE_S + MUNGE_I * 16	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge7	, &	munge34	); }
                    if (f == MUNGE_S + MUNGE_I * 17	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod6	, &	munge35	); }
                    if (f == MUNGE_S + MUNGE_I * 17	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	edge11	, &	munge36	); }
                    if (f == MUNGE_S + MUNGE_I * 18	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	edge5	, &	munge37	); }
                    if (f == MUNGE_S + MUNGE_I * 18	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	edge3	, &	munge38	); }
                    if (f == MUNGE_S + MUNGE_I * 19	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	pod0	, &	munge39	); }
                    if (f == MUNGE_S + MUNGE_I * 19	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod12	, &	munge40	); }
                    if (f == MUNGE_S + MUNGE_I * 20	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod8	, &	munge41	); }
                    if (f == MUNGE_S + MUNGE_I * 20	) { APL_list->addLightshow(-1, MUNGE_I*	6	,	pod10	, &	munge42	); }
                    if (f == MUNGE_S + MUNGE_I * 21	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod11	, &	munge43	); }
                    if (f == MUNGE_S + MUNGE_I * 21	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	pod14	, &	munge44	); }
                    if (f == MUNGE_S + MUNGE_I * 22	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	edge1	, &	munge45	); }
                    if (f == MUNGE_S + MUNGE_I * 22	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod5	, &	munge46	); }
                    if (f == MUNGE_S + MUNGE_I * 23	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge2	, &	munge47	); }
                    if (f == MUNGE_S + MUNGE_I * 23	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	edge0	, &	munge48	); }
                    if (f == MUNGE_S + MUNGE_I * 24	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	edge4	, &	munge49	); }
                    if (f == MUNGE_S + MUNGE_I * 24	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod15	, &	munge50	); }
                    if (f == MUNGE_S + MUNGE_I * 25	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	pod3	, &	munge51	); }
                    if (f == MUNGE_S + MUNGE_I * 25	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	pod7	, &	munge52	); }
                    if (f == MUNGE_S + MUNGE_I * 26	) { APL_list->addLightshow(-1, MUNGE_I*	6	,	edge8	, &	munge53	); }
                    if (f == MUNGE_S + MUNGE_I * 26	) { APL_list->addLightshow(-1, MUNGE_I*	6	,	edge9	, &	munge54	); }
                    if (f == MUNGE_S + MUNGE_I * 27	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	edge10	, &	munge55	); }
                    if (f == MUNGE_S + MUNGE_I * 27	) { APL_list->addLightshow(-1, MUNGE_I*	5	,	pod9	, &	munge56	); }
                    if (f == MUNGE_S + MUNGE_I * 28	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	edge0	, &	munge57	); }
                    if (f == MUNGE_S + MUNGE_I * 28	) { APL_list->addLightshow(-1, MUNGE_I*	4	,	edge6	, &	munge58	); }
                    if (f == MUNGE_S + MUNGE_I * 29	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	pod7	, &	munge59	); }
                    if (f == MUNGE_S + MUNGE_I * 29	) { APL_list->addLightshow(-1, MUNGE_I*	3	,	edge2	, &	munge60	); }
                    if (f == MUNGE_S + MUNGE_I * 30	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod8	, &	munge61	); }
                    if (f == MUNGE_S + MUNGE_I * 30	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod8	, &	munge62	); }
                    if (f == MUNGE_S + MUNGE_I * 31	) { APL_list->addLightshow(-1, MUNGE_I*	2	,	pod14	, &	munge63	); }
                    if (f == MUNGE_S + MUNGE_I * 31	) { APL_list->addLightshow(-1, MUNGE_I*	1	,	edge0	, &	munge64	); }
        
    }

    if (f >= MASTER_S && f < MASTER_S + MASTER_T) {

    
            switch ( f  ) {
                
            //============================= MASTER MIX
            case MASTER_S:
                APL_list->addLightshow(p, MASTER_I, pod0, &a0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &a1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &a2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &a3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &a4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &a5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &a6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &a7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &a0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &a1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &a2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &a3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &a4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &a5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &a6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &a7);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge0, &edgewipe0);
                APL_list->addLightshow(-1, MASTER_I * 2, edge1, &edgewipe1);
                APL_list->addLightshow(-1, MASTER_I * 2, edge2, &edgewipe2);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge3, &edgewipe0);
                APL_list->addLightshow(-1, MASTER_I * 2, edge4, &edgewipe1);
                APL_list->addLightshow(-1, MASTER_I * 2, edge5, &edgewipe2);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge6, &edgewipe0);
                APL_list->addLightshow(-1, MASTER_I * 2, edge7, &edgewipe1);
                APL_list->addLightshow(-1, MASTER_I * 2, edge8, &edgewipe2);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge9, &edgewipe0);
                APL_list->addLightshow(-1, MASTER_I * 2, edge10, &edgewipe1);
                APL_list->addLightshow(-1, MASTER_I * 2, edge11, &edgewipe2);
    
    
                break;
            case MASTER_S + MASTER_I * 1:
    
                APL_list->addLightshow(p, MASTER_I, pod0, &b0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &b1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &b2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &b3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &b4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &b5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &b6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &b7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &b0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &b1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &b2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &b3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &b4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &b5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &b6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &b7);
                break;
            case MASTER_S + MASTER_I * 2:
    
                APL_list->addLightshow(p, MASTER_I, pod0, &c0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &c1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &c2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &c3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &c4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &c5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &c6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &c7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &c0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &c1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &c2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &c3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &c4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &c5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &c6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &c7);
    
                APL_list->addLightshow(-1, MASTER_I, edge0, &edgewipe10);
                APL_list->addLightshow(-1, MASTER_I, edge1, &edgewipe11);
                APL_list->addLightshow(-1, MASTER_I, edge2, &edgewipe12);
    
                APL_list->addLightshow(-1, MASTER_I, edge3, &edgewipe10);
                APL_list->addLightshow(-1, MASTER_I, edge4, &edgewipe11);
                APL_list->addLightshow(-1, MASTER_I, edge5, &edgewipe12);
    
                APL_list->addLightshow(-1, MASTER_I, edge6, &edgewipe10);
                APL_list->addLightshow(-1, MASTER_I, edge7, &edgewipe11);
                APL_list->addLightshow(-1, MASTER_I, edge8, &edgewipe12);
    
                APL_list->addLightshow(-1, MASTER_I, edge9, &edgewipe10);
                APL_list->addLightshow(-1, MASTER_I, edge10, &edgewipe11);
                APL_list->addLightshow(-1, MASTER_I, edge11, &edgewipe12);
                break;
            case MASTER_S + MASTER_I * 3:
    
                //yin ynag
                APL_list->addLightshow(p, MASTER_I, pod3, &f0);
                APL_list->addLightshow(-1, MASTER_I, pod7, &f1);
                APL_list->addLightshow(-1, MASTER_I, pod9, &f1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &f3);
                APL_list->addLightshow(-1, MASTER_I, pod11, &f0);
                APL_list->addLightshow(-1, MASTER_I, pod13, &f1);
                APL_list->addLightshow(-1, MASTER_I, pod14, &f3);
                APL_list->addLightshow(-1, MASTER_I, pod15, &f1);
    
                APL_list->addLightshow(-1, MASTER_I, edge0, &f3);
                APL_list->addLightshow(-1, MASTER_I, edge1, &f0);
                APL_list->addLightshow(-1, MASTER_I, edge2, &f3);
                APL_list->addLightshow(-1, MASTER_I, edge3, &f2);
                APL_list->addLightshow(-1, MASTER_I, edge4, &f0);
                APL_list->addLightshow(-1, MASTER_I, edge5, &f3);
    
    
    
                APL_list->addLightshow(-1, MASTER_I, pod0, &h1);
                APL_list->addLightshow(-1, MASTER_I, pod1, &h2);
                APL_list->addLightshow(-1, MASTER_I, pod2, &h6);
                APL_list->addLightshow(-1, MASTER_I, pod4, &h6);
                APL_list->addLightshow(-1, MASTER_I, pod5, &h2);
                APL_list->addLightshow(-1, MASTER_I, pod6, &h1);
                APL_list->addLightshow(-1, MASTER_I, pod8, &h2);
                APL_list->addLightshow(-1, MASTER_I, pod12, &h6);
    
                APL_list->addLightshow(-1, MASTER_I, edge6, &h6);
                APL_list->addLightshow(-1, MASTER_I, edge7, &h2);
                APL_list->addLightshow(-1, MASTER_I, edge8, &h2);
                APL_list->addLightshow(-1, MASTER_I, edge9, &h2);
                APL_list->addLightshow(-1, MASTER_I, edge10, &h6);
                APL_list->addLightshow(-1, MASTER_I, edge11, &h6);
    
                break;
            case MASTER_S + MASTER_I * 4:
                APL_list->addLightshow(p, MASTER_I, pod0, &e0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &e1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &e2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &e3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &e4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &e5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &e6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &e7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &e0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &e1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &e2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &e3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &e4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &e5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &e6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &e7);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge0, &edgewipe20);
                APL_list->addLightshow(-1, MASTER_I * 2, edge1, &edgewipe21);
                APL_list->addLightshow(-1, MASTER_I * 2, edge2, &edgewipe22);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge3, &edgewipe20);
                APL_list->addLightshow(-1, MASTER_I * 2, edge4, &edgewipe21);
                APL_list->addLightshow(-1, MASTER_I * 2, edge5, &edgewipe22);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge6, &edgewipe20);
                APL_list->addLightshow(-1, MASTER_I * 2, edge7, &edgewipe21);
                APL_list->addLightshow(-1, MASTER_I * 2, edge8, &edgewipe22);
    
                APL_list->addLightshow(-1, MASTER_I * 2, edge9, &edgewipe20);
                APL_list->addLightshow(-1, MASTER_I * 2, edge10, &edgewipe21);
                APL_list->addLightshow(-1, MASTER_I * 2, edge11, &edgewipe22);
                break;
            case MASTER_S + MASTER_I * 5:
                APL_list->addLightshow(p, MASTER_I, pod0, &f0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &f1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &f2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &f3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &f4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &f5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &f6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &f7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &f0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &f1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &f2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &f3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &f4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &f5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &f6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &f7);
                break;
            case MASTER_S + MASTER_I * 6:
                APL_list->addLightshow(p, MASTER_I, pod0, &g0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &g1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &g2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &g3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &g4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &g5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &g6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &g7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &g0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &g1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &g2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &g3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &g4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &g5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &g6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &g7);
    
                APL_list->addLightshow(-1, MASTER_I, edge0, &g7);
                APL_list->addLightshow(-1, MASTER_I, edge1, &g6);
                APL_list->addLightshow(-1, MASTER_I, edge2, &g1);
    
                APL_list->addLightshow(-1, MASTER_I, edge3, &g4);
                APL_list->addLightshow(-1, MASTER_I, edge4, &g3);
                APL_list->addLightshow(-1, MASTER_I, edge5, &g3);
    
                APL_list->addLightshow(-1, MASTER_I, edge6, &g2);
                APL_list->addLightshow(-1, MASTER_I, edge7, &g0);
                APL_list->addLightshow(-1, MASTER_I, edge8, &g7);
    
                APL_list->addLightshow(-1, MASTER_I, edge9, &g1);
                APL_list->addLightshow(-1, MASTER_I, edge10, &g3);
                APL_list->addLightshow(-1, MASTER_I, edge11, &g7);
                break;
            case MASTER_S + MASTER_I * 7:
                APL_list->addLightshow(p, MASTER_I, pod0, &h0);
                APL_list->addLightshow(-1, MASTER_I, pod1, &h1);
                APL_list->addLightshow(-1, MASTER_I, pod2, &h2);
                APL_list->addLightshow(-1, MASTER_I, pod3, &h3);
                APL_list->addLightshow(-1, MASTER_I, pod4, &h4);
                APL_list->addLightshow(-1, MASTER_I, pod5, &h5);
                APL_list->addLightshow(-1, MASTER_I, pod6, &h6);
                APL_list->addLightshow(-1, MASTER_I, pod7, &h7);
    
                APL_list->addLightshow(-1, MASTER_I, pod8, &h0);
                APL_list->addLightshow(-1, MASTER_I, pod9, &h1);
                APL_list->addLightshow(-1, MASTER_I, pod10, &h2);
                APL_list->addLightshow(-1, MASTER_I, pod11, &h3);
                APL_list->addLightshow(-1, MASTER_I, pod12, &h4);
                APL_list->addLightshow(-1, MASTER_I, pod13, &h5);
                APL_list->addLightshow(-1, MASTER_I, pod14, &h6);
                APL_list->addLightshow(-1, MASTER_I, pod15, &h7);
    
                APL_list->addLightshow(-1, MASTER_I, edge0, &edgewipe30);
                APL_list->addLightshow(-1, MASTER_I, edge1, &edgewipe31);
                APL_list->addLightshow(-1, MASTER_I, edge2, &edgewipe31);
                
                APL_list->addLightshow(-1, MASTER_I, edge3, &edgewipe30);
                APL_list->addLightshow(-1, MASTER_I, edge4, &edgewipe32);
                APL_list->addLightshow(-1, MASTER_I, edge5, &edgewipe30);
                
                APL_list->addLightshow(-1, MASTER_I, edge6, &edgewipe31);
                APL_list->addLightshow(-1, MASTER_I, edge7, &edgewipe30);
                APL_list->addLightshow(-1, MASTER_I, edge8, &edgewipe31);
                
                APL_list->addLightshow(-1, MASTER_I, edge9, &edgewipe31);
                APL_list->addLightshow(-1, MASTER_I, edge10, &edgewipe31);
                APL_list->addLightshow(-1, MASTER_I, edge11, &edgewipe32);
                
                break;
                
            default:
                break;
        }
    }  // master Mix
    
        
    }