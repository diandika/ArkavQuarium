#include "Entity.hpp"

Entity::Entity(int x, int y, char kind){
    posX = x;
    posY = y;
    entityKind = kind;
}

int Entity::getX(){
    return posX;
}

int Entity::getY(){
    return posY;
}

char Entity::getKind(){
    return entityKind;
}

void Entity::setX(int x){
    posX = x;
}

void Entity::setY(int y){
    posY = y;
}

void Entity::setKind(char kind){
    entityKind = kind;
}
