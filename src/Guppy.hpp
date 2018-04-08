#ifndef GUPPY_HPP
#define GUPPY_HPP

#include "Koin.hpp"
#include "Makanan.hpp"

/** @class Guppy
 * kelas Guppy, sebuah tipe entitas di akuarium.
 * turunan class Entity
 * */
class Guppy : public Entity{
  protected:
    int level;
    int speed;
    bool hungry;
  public:
  /** @brief Constructor.
      * Melakukan inisialisasi Entitas Guppy.
      * @param integer, posisi entitas pada X.
      * @param integer, posisi entitas pada Y.
      * @param integer, level pertumbuhan entitas Guppy.
      * @param integer, tingkat kekenyanhgan entitas Guppy.
      * @param integer, kecepatan gerak Guppy.
      */
    Guppy(int,int,int,bool,int);
	/**@brief Getter level pertumbuhan Guppy.
	 * @return level pertumbuhan.
	 */
    int getLevel();
    /**@brief instruksi untuk mengecek apakah Guppy lapar
	 * @return bool, apakah Guppy lapar
	 */
    bool isHungry();
    /**@brief Getter kecepatan gerak Guppy.
	 * @return kecepatan gerak.
	 */
    int getSpeed();
	
	/**@brief Setter untuk level pertumbuhan.
	 * @param integer, level pertumbuhan.
	 */
    void setLevel(int);
    /**@brief Setter untuk state kekenyangan Guppy
     * @param bool, state kekenyangan Guppy.
	 */
    void setHunger(bool);
    
	/**@brief instruksi untuk Guppy mencari makan.
     * @param Makanan, makanan yang dituju.
	 */
    void findFood(Makanan);
    /**@brief instruksi pergerakan Guppy
     * @param integer, posisi x dari tujuan
     * @param integer, posisi y dari tujuan
     */
    void move(int, int);
    /**@brief instruksi untuk Guppy menjatuhkan koin
     */
    void dropCoin();
};

#endif
