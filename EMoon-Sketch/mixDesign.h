//
//  mixDesign.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__mixDesign__
#define __EMoon_Sketch__mixDesign__

#include <stdio.h>
#include "LocalLibrary.h"


void	addtoAllPods	(eMoonFrame duration, eMoonUpdateFunction lightshow);

void	addtoAllQuads	(eMoonFrame duration, eMoonUpdateFunction lightshow);

void	addtoAllEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow);

void	addtoOuterEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow);

void	addtoInnerEdges	(eMoonFrame duration, eMoonUpdateFunction lightshow);
void  borderMarch(eMoonFrame duration, eMoonUpdateFunction prim0, eMoonUpdateFunction prim1, eMoonUpdateFunction prim2);


#endif /* defined(__EMoon_Sketch__mixDesign__) */
