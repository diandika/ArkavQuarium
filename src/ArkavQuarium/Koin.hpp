#ifndef KOIN_HPP
#define KOIN_HPP

#include "Entity.hpp"

/** @class Koin
 * kelas Koin, sebuah tipe entitas di akuarium
 * turunan class Entity
 * */
class Koin : public Entity {
private:
  int nilai;
public:
	/**@brief Constructor.
	 * @param integer, posisi X entitas
	 * @param integer, posisi Y entitas
	 * @param integer, nilai dari koin
	 */
  Koin(int,int,int); //parameter x,y,nilai
  /**@brief instruksi pergerakan koin
   * hanya jatuh kebawah.
   */
  void move(); //drop
};

#endif
