#ifndef SIPUT_HPP
#define SIPUT_HPP

#include "Entity.hpp"
#include "Koin.hpp"

class Siput : public Entity {
public:
	/**@brief Constructor.
	 * inisiasi kelas siput
	 * @param integer, posisi X entitas
	 * @param integer, posisi Y entitas
	 */
  Siput (int,int); // parameter x,y
	/**@brief instruksi pengambilan koin.
	 * @param Koin, koin yang akan diambil.
	 */
  void getCoin(Koin C);
  /**@brief instruksi pergerakan siput
   */
  void move();
};

#endif
