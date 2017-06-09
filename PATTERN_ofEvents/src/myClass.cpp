//
//  myClass.cpp
//  PATTERN_ofEvents
//
//  Created by Robert White III on 6/8/17.
//
//

#include "myClass.h"


//constructor
myClass::myClass(){
    
}


void myClass::keyPressed(int key){
    
    ofLog() << "myClass::keyPressed(" << key << ")";
    int pressed_key_code = key;                     //aparently you MUST set the variable first.
    
    //passes the key information back up to ofApp()
    ofNotifyEvent(events::event1().dataPassedByEvent, pressed_key_code);
    
}
