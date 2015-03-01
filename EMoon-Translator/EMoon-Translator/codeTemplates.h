//
//  codeTemplates.h
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 28/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Translator__codeTemplates__
#define __EMoon_Translator__codeTemplates__

#include <stdio.h>
#include <stdio.h>
#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>

#include "parsing.h"


class codeTemplate {
    
public:
    codeTemplate();
    
    std::string token;
    std::string templateString;
    
    int numChildren;
    codeTemplate* childList[20];
    
    void replaceChild(int index);
    void replaceAllChildren();
    void replaceString(std::string token, std::string value);
    void replaceString(std::string token, int value);
    
    virtual void setup() = 0;
    void addChild(codeTemplate* child, std::string token);
    virtual std::string generate() = 0;

protected:
    std::string workingString;
};


class lightshowTemplate : public codeTemplate {

public:

    lightshowTemplate* parent;
    lightshow* currentLightshow;
    void addChild(lightshowTemplate* child, std::string token);
    virtual void setup() = 0;
    virtual std::string generate() = 0;
    
};

//class stripTemplate : public codeTemplate {
//    stripTemplate* parent;
//    void addChild(stripTemplate* child, std::string token);
//    virtual std::string generate() = 0;
//
//    
//};

class topLevelTemplate : public lightshowTemplate {
public:
    
    topLevelTemplate(int lCount, lightshow* lightshowList, int sCount, strip* stripList);
    int lCount, sCount;
    lightshow* lightshowList;
    strip* stripList;
    virtual void setup() = 0;
    virtual std::string generate() = 0;


    
};

//--------------------------------

class sigTemplate : public lightshowTemplate {
public:
    void setup();
    std::string generate();
};

class bodyTemplate : public lightshowTemplate {
public:
    void setup();
    std::string generate();
};

class colourArgList : public lightshowTemplate {
public:
    void setup();
    std::string generate();
};

class colourFunctionList : public lightshowTemplate {
public:
    void setup();
    std::string generate();
};

class primitiveLightshowDefinitions : public topLevelTemplate {
public:
    using topLevelTemplate::topLevelTemplate;
    void setup();
    std::string generate();
};


#endif /* defined(__EMoon_Translator__codeTemplates__) */
