//
//  parsing.h
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 19/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Translator__parsing__
#define __EMoon_Translator__parsing__

#include <stdio.h>




class CSVRow
{
public:
    std::string const& operator[](std::size_t index) const;
    std::size_t size() const;
    void readNextRow(std::istream& str);

private:
    std::vector<std::string>    m_data;
};

std::istream& operator>>(std::istream& str,CSVRow& data);

//------- Structures for parsing -------------


struct colour {
    char name[64];
    int32_t value;
};
const int maxColours = 256;


struct strip {
    char name[64];
    int pin;
    int count;
};
const int maxStrips = 64;

typedef int32_t colourType;
struct colourArray {
    int count;
    
};

struct lightshow {
    char name[64];
    char strip[64];
    char updateFunction[64];
    int duration;
    int transition;
    int colourCount;
    colourType CX;
    colourType colourArgs[5];
};
const int maxLightshows = 256;

class moonChunk {
    int lCount;
    lightshow* lsList;
    int sCount;
    strip* stripList;
    
};


void parseColours(char* colourFilename, colour *colourList);
int parseStrips(char* stripFilename, strip *stripList);
int parseLightshows(char* lightshowFilename, colour* colourList, lightshow *lightshowList);


#endif /* defined(__EMoon_Translator__parsing__) */
