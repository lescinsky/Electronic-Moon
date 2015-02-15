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

//---------------------------------------------------------------------------------

void parseColours(char* colourFilename, colour *colourList) {
    
    std::ifstream       colourFile(colourFilename);
    
    CSVRow  row;
    
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
}

int parseStrips(char* stripFilename, strip *stripList) {
    
    std::ifstream       stripFile(stripFilename);
    
    CSVRow  row;
    
    int i = 0;
    
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
        stripList[i].count = atoi(row[2].c_str());
        i++;
    }
    return i;
}


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

int parseLightshows(char* lightshowFilename, colour* colourList, lightshow *lightshowList) {
    
    std::ifstream       lightshowFile(lightshowFilename);
    
    CSVRow  row;
    
    int i = 0;
    
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
        if (row.size() <= 8) {
            std::cout <<  row[0] << row[1] << row[2] << row[3] << row[4] << row[5] << row[6]  << "\n";
        }
        else if (row.size() <= 9) {
            std::cout <<  row[0] << row[1] << row[2] << row[3] << row[4] << row[5] << row[6] << row[7] << row[8] << "\n";
        }
        std::strcpy(lightshowList[i].name, row[1].c_str());
        std::strcpy(lightshowList[i].strip, row[0].c_str());
        std::strcpy(lightshowList[i].updateFunction, row[2].c_str());
        lightshowList[i].duration = atoi(row[3].c_str());
        lightshowList[i].transition = atoi(row[4].c_str());
        
        lightshowList[i].CX = baseValue(colourList, (char *)row[5].c_str());
        std::cout << lightshowList[i].CX  << " (CX)\n";
        lightshowList[i].colourCount = 0;
        
        if (row.size() >= 7) {
//            lightshowList[i].colourArgs[0] = deltaValue(colourList, (char *)row[5].c_str(), (char *)row[6].c_str());
            lightshowList[i].colourArgs[0] = baseValue(colourList, (char *)row[5].c_str());
            std::cout << lightshowList[i].colourArgs[0]  << " (C0)\n";
//            lightshowList[i].colourArgs[1] = deltaValue(colourList, (char *)row[6].c_str(), (char *)row[7].c_str());
            lightshowList[i].colourArgs[1] = baseValue(colourList, (char *)row[6].c_str());
            std::cout << lightshowList[i].colourArgs[1]  << " (C1)\n";
            lightshowList[i].colourCount = 2;
        }
        
        if (row.size() >= 9) {
//            lightshowList[i].colourArgs[2] = deltaValue(colourList, (char *)row[7].c_str(), (char *)row[8].c_str());
            lightshowList[i].colourArgs[2] = baseValue(colourList, (char *)row[7].c_str());
            std::cout << lightshowList[i].colourArgs[2]  << " (C2)\n";
//            lightshowList[i].colourArgs[3] = deltaValue(colourList, (char *)row[8].c_str(), (char *)row[5].c_str());
            lightshowList[i].colourArgs[3] = baseValue(colourList, (char *)row[8].c_str());
            std::cout << lightshowList[i].colourArgs[3]  << " (C3)\n";
            lightshowList[i].colourCount = 4;
        }
        
        i++;
    }
    return i;
}


//---------------------------------------------------------------------------------

//Generate Lightshow includes
 std::string headerTemplateTop = "Lightshows_header_top.txt";
 std::string headerTemplateEnd = "Lightshows_header_end.txt";
 std::string templateFolder = "/Users/gordon/GitHub/Electronic-Moon/EMoon-Translator/EMoon-Translator/";
std::string sourceFolder = "/Users/gordon/GitHub/Electronic-Moon/EMoon-Sketch/EMoon-Sketch/";



void generateLightshows(lightshow* lightshowList, int lCount, strip* stripList, int sCount) {

    std::string filePath;
//        std::ifstream infile(filePath) ;
//        if ( !infile ) {
//                      std::cout << "file not found!\n" ;
//            return;
//        }
//            std::string fileData( ( std::istreambuf_iterator<char> ( infile ) ) ,
//                                 std::istreambuf_iterator<char> ( ) ) ;
//            infile.close( ) ;
//               std::cout << fileData;

    

    
    // Start the output files, header and source
    
    filePath = sourceFolder + "lightshows.h";
    std::ofstream outHeader(filePath);
    if ( !outHeader ) {
        std::cout << "Header file not opened!\n" ;
        return;
    }
    
    filePath = sourceFolder + "lightshows.cpp";
    std::ofstream outSource(filePath);
    if ( !outSource ) {
        std::cout << "Source file not opened!\n" ;
        return;
    }
    // Write the top of header and source

    const std::string headerTop =
"//  Automatically Generated code  \n\n\
#ifndef __EMoon_Sketch__Lightshows__\n\
#define __EMoon_Sketch__Lightshows__\n\n\
#include <stdio.h>\n\
#include \"EMoonDesign.h\"\n\
#include \"Strips.h\"\n\n\n";
    
    outHeader <<  headerTop;
    
    const std::string sourceTop =
"//  Automatically Generated code  \n\n\
#include \"Lightshows.h\"\n\n\n\
extern masterLightshow* master;\
extern activePhysicalStripList* APS_list;";
    
    outSource <<  sourceTop;
    
    
    //-----Insert the lightshows---------
    //  Each lightshow defines a new void function.
    //  The Function signature is used in both header and source.
    std::string masterSetupTemplate =
    "void setupMasterLightshow() {\
    \n?masterAddList?\
    \n}";
    std::string masterAddList;
    
    
    for (int i=0; i < lCount; i++) {
        
        std::string functionName = lightshowList[i].name;
        std::string duration = std::to_string(lightshowList[i].duration);
        std::string strip = lightshowList[i].strip;
        std::string transition = std::to_string(lightshowList[i].transition);
        std::string basis = lightshowList[i].updateFunction;

        std::string sigTemplate = "void ?function?(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)";
        sigTemplate.replace(sigTemplate.find("?function?"),10, functionName);
        
        std::string bodyTemplate = "{\n    ?basis?(f, duration, strip, ?transition?, ?colourArgList?); }\n";
        
        
        
        std::string colourFunctionTemplate = "uint32_t ?colour?() {return(?value?);}\n";
        std::string colourValue = std::to_string(lightshowList[i].CX);
        std::string colourFunction = colourFunctionTemplate;
        std::string colourArg = functionName + "CX";
        std::string colourArgList = "&" + colourArg;

        colourFunction.replace(colourFunction.find("?colour?"), 8, colourArg);
        colourFunction.replace(colourFunction.find("?value?"), 7, colourValue);
        std::string colourFunctionList = "\n\n\n" + colourFunction;
        
        for (int j=0; j < lightshowList[i].colourCount; j++ ) {
            
            colourValue = std::to_string(lightshowList[i].colourArgs[j]);
            colourFunction = colourFunctionTemplate;
            colourArg = functionName + "C" + std::to_string(j);
            colourArgList += ", &" + colourArg;
            
            colourFunction.replace(colourFunction.find("?colour?"), 8, colourArg);
            colourFunction.replace(colourFunction.find("?value?"), 7, colourValue);
            colourFunctionList += colourFunction;
            
            std::cout << colourFunction;
        }
        bodyTemplate.replace(bodyTemplate.find("?basis?"), 7, basis);
        bodyTemplate.replace(bodyTemplate.find("?transition?"), 12, transition);
        bodyTemplate.replace(bodyTemplate.find("?colourArgList?"), 15, colourArgList);
        
        std::string masterSetupTemplate = "   master->addLightshow(?duration?, ?strip?, &?function?);\n";
        masterSetupTemplate.replace(masterSetupTemplate.find("?duration?"),10, duration);
         masterSetupTemplate.replace(masterSetupTemplate.find("?strip?"),7, strip);
         masterSetupTemplate.replace(masterSetupTemplate.find("?function?"),10, functionName);
        
        masterAddList += masterSetupTemplate;

        outHeader << sigTemplate << ";\n";
        
        outSource << colourFunctionList;
        outSource << sigTemplate << "\n" << bodyTemplate;
            std::cout << sigTemplate << bodyTemplate;
    }
    

    // Write the Strip declarations
    std::string stripDeclList;
    std::string stripSetupTemplate =
"void setupStrips() {\
\n?stripAddList?\
\n}";
    std::string stripAddList;
    
    
    for (int i=0; i < sCount; i++) {
        
        std::string stripName = stripList[i].name;
        std::string pin = std::to_string(stripList[i].pin);
        std::string sLength = std::to_string(stripList[i].count);
        
        std::string declTemplate = "Adafruit_NeoPixel* ?strip? = new Adafruit_NeoPixel(?length?, ?pin?, NEO_GRB + NEO_KHZ800);\n";
        declTemplate.replace(declTemplate.find("?strip?"),7, stripName);
        declTemplate.replace(declTemplate.find("?pin?"),5, pin);
        declTemplate.replace(declTemplate.find("?length?"),8, sLength);
        
        std::string stripSetupTemplate = "   APS_list->addStrip(?strip?);\n";
        stripSetupTemplate.replace(stripSetupTemplate.find("?strip?"),7, stripName);
        
        stripDeclList += declTemplate;
        stripAddList += stripSetupTemplate;

    }
    stripSetupTemplate.replace(stripSetupTemplate.find("?stripAddList?"),14, stripAddList);
    
    outSource << "\n" << stripDeclList << "\n";
    outSource << "\n" << stripSetupTemplate << "\n";
    std::cout << stripDeclList << stripSetupTemplate;

    // Write the master list setup
    masterSetupTemplate.replace(masterSetupTemplate.find("?masterAddList?"),15, masterAddList);
    outSource << "\n" << masterSetupTemplate << "\n";
    std::cout << masterSetupTemplate;

    
    // Write the end of header and source
    
    const std::string headerEnd =
"void setupStrips();\
void setupMasterLightshow();\n\n\n\n\
#endif\n";
    
    
    const std::string sourceEnd = "\n\n\n\n\n";
    
    outHeader <<  headerEnd;
    outSource <<  sourceEnd;
        
    outHeader.close();
    outSource.close();

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
    int lCount, sCount;
    
    CSVRow  row;
    
    // Read the CSV files into arrays
    colour colourList[maxStrips];
    parseColours(argv[1], colourList);
    
    strip stripList[maxStrips];
    sCount = parseStrips(argv[2], stripList);
    
    lightshow lightshowList[maxLightshows];
    lCount = parseLightshows(argv[3], colourList, lightshowList);
    
    // Create the Strips source files
    
    // Create the Lightshows source files
    generateLightshows(lightshowList, lCount, stripList, sCount);

}
