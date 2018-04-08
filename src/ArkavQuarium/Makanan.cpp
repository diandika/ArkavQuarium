#include "Makanan.hpp"

Makanan::Makanan(int x, int y) : Entity(x,y,'M'){
}

void Makanan::move(){
    if (posY != 0){
        posY--;
    }
}

