#ifndef MAKANAN_HPP
#define MAKANAN_HPP

#include "Entity.hpp"

class Makanan : public Entity {
public:
  Makanan(int,int);//parameter x,y

  void move();//drop
};

#endif
