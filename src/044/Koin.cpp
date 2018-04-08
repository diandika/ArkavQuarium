#include "Koin.cpp"

/**@brief Constructor.
 * @param integer, posisi X entitas
 * @param integer, posisi Y entitas
 * @param integer, nilai dari koin
 */
Koin::Koin(int x,int y,int val):Entity(x,y,'K'){
  nilai = val;
} //parameter x,y,nilai
/**@brief instruksi pergerakan koin
 * hanya jatuh kebawah.
 */
void Koin::move(){
  int y = getY();
  setY(y+1);
} //drop
