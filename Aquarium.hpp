#ifndef AQUARIUM_HPP
#define AQUARIUM_HPP

#include "Entity.hpp"

#include <iostream>
#include <cstdlib>
using namespace std;

class Aquarium {
  private:
    Entity ** matrix;
  public:
    Aquarium();

    char getEntity();
    void setEntity(Entity);
};

#endif
