#ifndef SIPUT_HPP
#define SIPUT_HPP

#include "Entity.hpp"

class Siput : public Entity {
public:
	/**@brief Constructor.
	 * inisiasi kelas siput
	 * @param integer, posisi X entitas
	 * @param integer, posisi Y entitas
	 */
  Siput (int,int); // parameter x,y
	/**@brief instruksi pengambilan koin.
	 */
  void getCoin();
  /**@brief instruksi pergerakan siput
   */
  void move();
};

#endif
