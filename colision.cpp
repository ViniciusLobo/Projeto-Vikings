//
//  colision.cpp
//  Cave Story GLFW
//
//  Created by Vinicius A.M. Lobo on 18/09/15.
//  Copyright © 2015 Vinicius A.M. Lobo. All rights reserved.
//

#include "colision.h"

namespace {
    float kInstantColision;
    float kSpaceData;
}

Colision::Colision() : acceleration_g_(0.2f*WORLD_GRAVITY), velocity_x_(0.1f) {
    
}

Colision::~Colision() {
    // Destructor of class;
}

void Colision::applyColisions(Player *object_colision) {
    
}

void Colision::undefineColisions(Player *object_colisions) {
    
}