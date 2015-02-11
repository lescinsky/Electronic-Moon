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

class CSVRow
{
public:
    std::string const& operator[](std::size_t index) const
    {
        return m_data[index];
    }
    std::size_t size() const
    {
        return m_data.size();
    }
    void readNextRow(std::istream& str)
    {
        std::string         line;
        std::getline(str,line);
        
        std::stringstream   lineStream(line);
        std::string         cell;
        
        m_data.clear();
        while(std::getline(lineStream,cell,','))
        {
            m_data.push_back(cell);
        }
    }
private:
    std::vector<std::string>    m_data;
};

std::istream& operator>>(std::istream& str,CSVRow& data)
{
    data.readNextRow(str);
    return str;
}

//---------------------------------
struct colour {
    char name[64];
    int32_t value;
};
int maxColours = 256;
int32_t deltaValue(colour* clist, char* c0, char* c1) {

    int32_t cval0 = -9;
    int32_t cval1 = -77;
    char colourName[64];
    
    int i;
    for (i=0; i < maxColours; i++ ) {
        std::strcpy(colourName, clist[i].name);
        if (std::strcmp(colourName, c0) == 0) {
            cval0 = clist[i].value;
            break;
        }
    }
    for (i=0; i < maxColours; i++ ) {
        if (std::strcmp(clist[i].name, c1) == 0) {
            cval1 = clist[i].value;
            break;
        }
    }
    return cval1-cval0;
}
        
int32_t baseValue(colour* clist, char* c0) {
    
    int32_t cval0 = -10;
    char colourName[64];
    
    int i;
    for (i=0; i < maxColours; i++ ) {
        std::strcpy(colourName, clist[i].name);
        if (std::strcmp(clist[i].name, c0) == 0) {
            cval0 = clist[i].value;
            break;
        }
    }
    return cval0;
}

//---------------------------------
int main(int argc, char **argv)
{
    if (argc != 4) {
        return 0;
    }
    std::ifstream       colourFile(argv[1]);
    std::ifstream       stripFile(argv[2]);
    std::ifstream       lightshowFile(argv[3]);
    
    CSVRow  row;
    
    int maxColours = 256;
    int maxStrips = 64;
    int maxLightshows = 256;
    

    colour colourList[maxStrips];
    
    struct strip {
        char name[64];
        int pin;
        int count;
    };
    strip stripList[maxColours];
    
    struct lightshow {
        char name[64];
        char strip[64];
        char updateFunction[64];
        int duration;
        int transition;
        int colourCount;
        int32_t CX;
        int32_t C0;
        int32_t C1;
        int32_t C2;
        int32_t C3;
    };
    lightshow lightshowList[maxColours];
    
    int i = 0;
    
    // -----Parse colour
    // Name
    // Value
    colourFile >> row;   // read off first row
    while(i < maxColours)
    {
        if ( !(colourFile >> row) ) {
            break;
        }
        std::cout <<  row[0] << row[1] << row[2] << row[3] << "\n";
        std::strcpy(colourList[i].name, row[0].c_str());
        colourList[i].value = atoi(row[1].c_str())*65536*16;
        colourList[i].value += atoi(row[2].c_str())*256*16;
        colourList[i].value += atoi(row[3].c_str())*16;
        std::cout << colourList[i].value  << "\n";
        i++;
    }
   
    // ------Parse Strip
    // Name
    // Pin
    // Pixel Count
    stripFile >> row;
    while(i < maxStrips)
    {

        if ( !(stripFile >> row) ) {
            break;
        }
        std::cout <<  row[0] << row[1] << row[2] << "\n";
        std::strcpy(stripList[i].name, row[0].c_str());
        stripList[i].pin = atoi(row[1].c_str());
        stripList[i].count += atoi(row[2].c_str());
        i++;
    }

    // ------Lightshow Strip
    // Strip
    // Name
    // Function
    // Duration
    // Transition
    // C1
    // C2
    // C3
    // C4
    lightshowFile >> row;
    while(i < maxLightshows)
    {
        if ( !(lightshowFile >> row) ) {
            break;
        }
        std::cout <<  row[0] << row[1] << row[2] << row[3] << row[4] << row[5] << row[6] << row[7] << row[8] << "\n";
        std::strcpy(lightshowList[i].name, row[1].c_str());
        std::strcpy(lightshowList[i].strip, row[0].c_str());
        std::strcpy(lightshowList[i].updateFunction, row[2].c_str());
        lightshowList[i].duration = atoi(row[3].c_str());
        lightshowList[i].transition = atoi(row[4].c_str());
        
        lightshowList[i].CX = baseValue(colourList, (char *)row[5].c_str());
        std::cout << lightshowList[i].CX  << " (CX)\n";
        lightshowList[i].colourCount = 1;
        
        if (row.size() >= 7) {
            lightshowList[i].C0 = deltaValue(colourList, (char *)row[5].c_str(), (char *)row[6].c_str());
            std::cout << lightshowList[i].C0  << " (C0)\n";
            lightshowList[i].C1 = deltaValue(colourList, (char *)row[6].c_str(), (char *)row[7].c_str());
            std::cout << lightshowList[i].C1  << " (C1)\n";
            lightshowList[i].colourCount = 2;
        }
        
        if (row.size() >= 9) {
            lightshowList[i].C2 = deltaValue(colourList, (char *)row[7].c_str(), (char *)row[8].c_str());
            std::cout << lightshowList[i].C2  << " (C2)\n";
            lightshowList[i].C3 = deltaValue(colourList, (char *)row[8].c_str(), (char *)row[5].c_str());
            std::cout << lightshowList[i].C3  << " (C3)\n";
            lightshowList[i].colourCount = 4;
        }
        
        i++;
    }

}
