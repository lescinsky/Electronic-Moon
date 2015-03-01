//
//  main.cpp
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 11/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//
//


#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>

#include "parsing.h"
#include "autocode.h"












//---------------------------------
int main(int argc, char **argv)
{
    if (argc != 4) {
        return 0;
    }
    std::ifstream       colourFile(argv[1]);
    std::ifstream       stripFile(argv[2]);
    std::ifstream       lightshowFile(argv[3]);
    std::ifstream       mixFile(argv[4]);
    std::ifstream       destinationFolder(argv[5]);
    int lCount, sCount;
    
    CSVRow  row;
    
    // Read the CSV files into arrays
    colour colourList[maxStrips];
    parseColours(argv[1], colourList);
    
    strip stripList[maxStrips];
    sCount = parseStrips(argv[2], stripList);
    
    lightshow lightshowList[maxLightshows];
    lCount = parseLightshows(argv[3], colourList, lightshowList);
    
//    lightshow mixList[maxLightshows];
    
    // Create the Strips source files
    
    // Create the Lightshows source files
    generateLightshows(lightshowList, lCount, stripList, sCount);
//    generateMixes(mixList, mCount, stripList, sCount);

}
