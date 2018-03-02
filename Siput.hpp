#ifndef SIPUT_HPP
#define SIPUT_HPP

#include "Entity.hpp"

class Siput : public Entity {
public:
  Siput (int,int); // parameter x,y

  void getCoin();
  void move();
};

#endif
