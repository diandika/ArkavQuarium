#include "Guppy.hpp"
#include "Makanan.cpp"
#include "Koin.cpp"
#include <cmath>

Guppy::Guppy(int x, int y, int lv, bool hunger, int s) : Entity(x, y, 'G'){
    level = lv;
    hungry = hunger;
    speed = s;
}

int Guppy::getLevel(){
    return level;
}

bool Guppy::isHungry(){
    return hungry;
}

int Guppy::getSpeed(){
    return speed;
}

void Guppy::setLevel(int lv){
    level = lv;
}

void Guppy::setHunger(bool hunger){
    hungry = hunger;
}

void Guppy::findFood(Makanan M){
    int targetX = M.getX();
    int targetY = M.getY();

    while ((posX != targetX) & (posY != targetY)){
        move(targetX, targetY);
    }
}

void Guppy::move(int x, int y){
    float a;
    a = atan2(x - posX, y - posY);
    posX = posX + speed * cos(a);
    posY = posY + speed * sin(a);
}

void Guppy::dropCoin(){
  //akses linked list
  //cari sampai list terakhir
  //item terakhir = new Coin()
}
