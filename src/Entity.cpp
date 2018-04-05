#include "Entity.hpp"

/** @brief Constructor.
  * Melakukan inisialisasi Entitas
  * @param integer, posisi entitas pada X
  * @param integer, posisi entitas pada Y
  * @param char, representasi tipe entitas.
  */
Entity::Entity(int x,int y,char kind){
  entityKind = kind;
  posX = x;
  posY = y;
}
//inisiasi lokasi dan jenis kelas
/** @brief Getter untuk posisi entitas pada X
  * @return Posisi X entitas.
  */
int Entity::getX(){
  return x;
}
/** @brief Getter untuk posisi entitas pada Y
  * @return Posisi Y entitas.
  */
int Entity::getY(){
  return y;
}
/** @brief Getter untuk tipe entitas
  * @return karakter representasi tipe entitas.
  */
char Entity::getKind(){
  return entityKind;
}

/** @brief Setter untuk posisi entitas pada X
 * @param integer, posisi di X.
  */
void Entity::setX(int x){
  posX = x;
}
/** @brief Setter untuk posisi entitas pada Y
 * @param integer, posisi di Y.
  */
void Entity::setY(int y){
  posY = y;
}
/** @brief Setter untuk tipe entitas
 * @param char, representasi tipe entitas.
  */
void Entity::setKind(char kind){
  entityKind = kind;
}
/** @brief fungsi abstrak untuk pergerakan entitas
  */
