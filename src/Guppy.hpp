#ifndef GUPPY_HPP
#define GUPPY_HPP

#include "Koin.hpp"

/** @class Guppy
 * kelas Guppy, sebuah tipe entitas di akuarium.
 * turunan class Entity
 * */
class Guppy : public Entity{
  protected:
    int level;
    int kenyang;
  public:
  /** @brief Constructor.
      * Melakukan inisialisasi Entitas Guppy.
      * @param integer, posisi entitas pada X.
      * @param integer, posisi entitas pada Y.
      * @param integer, level pertumbuhan entitas Guppy.
      * @param integer, tingkat kekenyanhgan entitas Guppy.
      */
    Guppy(int,int,int,int);
	/**@brief Getter level pertumbuhan Guppy.
	 * @return level pertumbuhan.
	 */
    int getLevel();
    /**@brief instruksi untuk mengecek apakah Guppy kenyang
	 * @return bool, apakah Guppy kenyang
	 */
    bool isKenyang();
    /**@brief instruksi untuk mengecek apakah Guppy lapar
	 * @return bool, apakah Guppy lapar
	 */
    bool isLapar();
	
	/**@brief Setter untuk level pertumbuhan.
	 * @param integer, level pertumbuhan.
	 */
    void setLevel(int);
    /**@brief Setter untuk tingkat kekenyangan Guppy
     * @param integer, tingkat kekenyangan Guppy.
	 */
    void setKenyang(int);
    
	/**@brief instruksi untuk Guppy mencari makan.
	 */
    virtual `void findFood();
    /**@brief instruksi pergerakan Guppy
     */
    void move();
    /**@brief instruksi untuk Guppy menjatuhkan koin
     */
    virtual dropCoin();
};

#endif
