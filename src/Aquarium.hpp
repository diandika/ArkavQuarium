#ifndef AQUARIUM_HPP
#define AQUARIUM_HPP

#include "Entity.hpp"

#include <iostream>
#include <cstdlib>
using namespace std;

/** @class Aquarium
 * kelas untuk matriks akuarium
 * */
class Aquarium {
  private:
    Entity ** matrix;
  public:
  /** @brief Constructor.
      * Melakukan inisialisasi matriks kelas Aquarium
      */
    Aquarium();
/** @brief Getter untuk Entity dalam matriks
      * @return text dalam kelas.
      */
    char getEntity();
    /** @brief Setter untuk Entity dalam matrix
     * @param Sebuah Entitas
      */
    void setEntity(Entity);
};

#endif
