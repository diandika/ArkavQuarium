#ifndef MAKANAN_HPP
#define MAKANAN_HPP

#include "Entity.hpp"
/** @class Koin
 * kelas Koin, sebuah tipe entitas di akuarium
 * turunan class Entity
 * */
class Makanan : public Entity {
  public:
  /**@brief Constructor.
   * @param posisi entitas di X.
   * @param posisi entitas di Y.
   */
    Makanan(int,int);//parameter x,y
  /**@brief instruksi pergerakan makanan
   * makanan hanya bergerak turun.
   */
    void move();//drop
};

#endif
