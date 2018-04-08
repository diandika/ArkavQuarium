#include "Piranha.hpp"

Piranha::Piranha(int x, int y, int lv, bool hunger, int s) : Guppy(x,y,lv,hunger,s){
}

void Piranha::findFood(Guppy G){
    int targetX = G.getX();
    int targetY = G.getY();

    while ((posX != targetX) & (posY != targetY)){
        move(targetX, targetY);
    }
}