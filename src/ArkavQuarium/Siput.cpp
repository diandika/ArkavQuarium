#include "Siput.hpp"
#include "Koin.cpp"
#include <cmath>

Siput::Siput(int x, int y) : Entity(x,y,'S'){
}

void Siput::getCoin(Koin C){
    int targetX = C.getX();
    while (posX != targetX){
        move(targetX);
    }
}

void Siput::move(int x){
    float a;
    a = atan2(x - posX, 0);
    posX = posX + speed * cos(a);
}
