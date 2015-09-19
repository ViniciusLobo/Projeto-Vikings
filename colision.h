//
//  colision.h
//  Cave Story GLFW
//
//  Created by Vinicius A.M. Lobo on 18/09/15.
//  Copyright © 2015 Vinicius A.M. Lobo. All rights reserved.
//

#ifndef _COLISION_H_
#define _COLISION_H_

#define WORLD_GRAVITY 10

#include <stdio.h>

struct Player;

struct Colision {
    Colision();   // Constroi os eventos de colisão e aplica a objetos;
    ~Colision();  // Destroi os eventos de colisão
    
    void applyColisions(Player *object_colision); // Aplica as colisioes a um objeto
    void undefineColisions(Player *object_colisions); // Destroi as colision.
    
private:
    const float acceleration_g_;
    const float velocity_x_;
};

#endif //_COLISION_H_
