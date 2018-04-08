#include "Aquarium.hpp"

Aquarium::Aquarium(){
}

Aquarium::getEntity(int x, int y){
    return matrix[x][y];
}

Aquarium::setEntity(Entity E, int x, int y){
    matrix[x][y] = E;
}