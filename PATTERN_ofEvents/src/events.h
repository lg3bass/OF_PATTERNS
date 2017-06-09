#pragma once

#include "ofEvents.h"

class events {
    
public:
    
    ofEvent<int> dataPassedByEvent;
    
    //this is a singleton
    static events & event1(){
        static events instance;
        return instance;
    }
    
};

