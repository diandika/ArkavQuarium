#ifndef GUPPY_HPP
#define GUPPY_HPP

#include "Entity.hpp"
#include "Koin.hpp"

class Guppy : public Entity{
  protected:
    int level;
    int kenyang;
  public:
    Guppy();

    int getLevel();
    bool isKenyang();
    bool isLapar();

    void setLevel(int);
    void setKenyang(int);

    void findFood();
    void move();
};

#endif
