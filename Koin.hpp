#ifndef KOIN_HPP
#define KOIN_HPP

#include "Entity.h"

class Koin : public Entity {
private:
  int Nilai;
public:
  Koin(int,int,int); //parameter x,y,nilai
  void move(); //drop
};

#endif
