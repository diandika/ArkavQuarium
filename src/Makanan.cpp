#include "Makanan.hpp"

/**@brief Constructor.
* @param posisi entitas di X.
* @param posisi entitas di Y.
*/
Makanan::Makanan(int x,int y):Entity(x,y,'M'){}//parameter x,y
/**@brief instruksi pergerakan makanan
* makanan hanya bergerak turun.
*/
void Makanan::move(){
  int y = getY();
  setY(y+1);
}//drop
