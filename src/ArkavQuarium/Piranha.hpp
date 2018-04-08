#ifndef PIRANHA_HPP
#define PIRANHA_HPP

#include "Guppy.hpp"
/** @class Koin
 * kelas Piranha, sebuah tipe entitas di akuarium
 * turunan class Guppy.
 * */
class Piranha : public Guppy{
public:
/** @brief Constructor.
* Melakukan inisialisasi Entitas Piranha.
* @param integer, posisi entitas pada X.
* @param integer, posisi entitas pada Y.
* @param integer, level pertumbuhan entitas Piranha.
* @param bool, status kekenyangan entitas Piranha.
*/
  Piranha(int,int,int,bool,int);
/**@brief instruksi mencari makan untuk Piranha
 */
  void findFood(Guppy);
 /**@brief instruksi mengeluarkan koin untuk piranha.
  */
  void dropCoin();
};

#endif
