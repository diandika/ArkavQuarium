#include "Koin.hpp"

Koin::Koin(int x, int y, int val) : Entity(x,y,'K'){
    nilai = val;
}

void Koin::move(){
    if (posY != 0){
        posY--;
    }
}