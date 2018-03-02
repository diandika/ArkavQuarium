#ifndef PIRANHA_HPP
#define PIRANHA_HPP

#include "Guppy.hpp"

class Piranha : public Guppy{
public:
  Piranha(int,int,int,int);

  void findFood();
  void dropCoin();
};

#endif
