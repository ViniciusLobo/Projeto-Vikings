//
//  Vikings_Inputs.hpp
//  Vikings_Unreal
//
//  Created by Vinicius A.M. Lobo on 20/09/15.
//  Copyright © 2015 EpicGames. All rights reserved.
//

#ifndef __INPUTS_H_
#define __INPUTS_H_

#include <iostream>
#include <string>
#include <map>

#include <stdio.h>

struct EventKeys {
    bool pressed_key_;  // Pressed Key;
    bool released_key_; // Released Key;
    bool held_key_;     // While Pressed Key;
};

struct KeyboardInput {
    
};

enum EventTypes {
    PRESSED,  // Key HIT Input
    RELEASED, // Key HIT Output
    HELD,     // Key Input
    NO_EVENT  // No Key Input or Output
};

struct EventList {
    EventTypes type;
    EventKeys key;
};

/* Entradas de Eventos */
struct Input {
    Input();
    
    void clearKeyFrames();
    
    bool getKeyboardInput(const KeyboardInput *keyn, EventTypes type=PRESSED); // Pega todas dentro do type;

private:
    EventKeys keyv;
};

#endif /* __INPUTS_H_ */
