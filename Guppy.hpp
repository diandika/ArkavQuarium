#ifndef GUPPY_HPP
#define GUPPY_HPP

#include "Koin.hpp"

class Guppy : public Entity{
  protected:
    int level;
    int kenyang;
  public:
    Guppy(int,int,int,int);

    int getLevel();
    bool isKenyang();
    bool isLapar();

    void setLevel(int);
    void setKenyang(int);

    virtual `void findFood();
    void move();
    virtual dropCoin();
};

#endif
