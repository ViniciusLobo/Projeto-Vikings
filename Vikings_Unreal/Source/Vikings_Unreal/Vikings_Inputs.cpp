//
//  Vikings_Inputs.cpp
//  Vikings_Unreal
//
//  Created by Vinicius A.M. Lobo on 20/09/15.
//  Copyright © 2015 EpicGames. All rights reserved.
//

#include "Vikings_Inputs.h"

KeyboardInput::KeyboardInput() {
    
}


Input::Input() {
    
}

bool Input::getKeyboardInput(const KeyboardInput *keyn, EventTypes type) {
    
    if (type == PRESSED) {
        keyv.pressed_key_ = true;
        keyv.released_key_ = false;
        keyv.held_key_ = true;
        
        return (keyv.pressed_key_ == keyv.held_key_);
        
    } else if (type == HELD) {
        keyv.pressed_key_ = false;
        keyv.released_key_ = false;
        keyv.held_key_ = true;
        
        return (keyv.held_key_ == !keyv.pressed_key_);
        
    } else if (type == RELEASED) {
        keyv.pressed_key_ = false;
        keyv.released_key_ = true;
        keyv.held_key_ = false;
        
        return (keyv.released_key_);
        
    } else {
        keyv.pressed_key_ = false;
        keyv.released_key_ = false;
        keyv.held_key_ = false;
        
        return NULL;
    }
}

void Input::clearKeyFrames() {
    keyv.pressed_key_ = false;
    keyv.released_key_ = false;
}