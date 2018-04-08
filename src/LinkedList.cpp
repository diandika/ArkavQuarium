#include "LinkedList.hpp"

LinkedList::LinkedList(){
  item = NULL;
  nextItem = NULL;
}

LinkedList::LinkedList(T value){
  item = value;
  nextItem = NULL;
}
/**@brief Instruksi pencarian entitas pada linkedlist
* @param template class untuk sebuah entitas
*/
T LinkedList::find(T value){
  if (item == NULL){
    return -1;
  }else{
    if (item == value){
      return item;
    }else{
      return nextItem.find(value);
    }
  }
}

T LinkedList::getItem(){
  return item;
}

LinkedList LinkedList::getNext(){
  return nextItem;
}

/**@brief instruksi pengecekan
 * mengecek apakah kososng.
 */
bool LinkedList::isEmpty(){
  return item==NULL;
}
/**@brief instruksi menambah entitas pada linkedlist
 * @param template class untuk sebuah entitas.
 */
void LinkedList::add(LinkedList nItem){
  if (item == NULL){
    item = nItem;
  }else{
    nextItem.add(nItem);
  }
}
/**@brief instruksi penghapusan entitas dalam linked list
 * @param template class untuk sebuah entitas yang akan dihapus.
 */
void LinkedList::remove(T value){
  if (item == NULL){}
  else if (nextItem.item == NULL) {}
  else if (nextItem.item == value){
    nextItem.item = nextItem.nextItem.item;
  }else{
    nextItem.remove(value);
  }
}
/**@brief instruksi pengambilan entitas dalam linked list
 * @param integer indeks entitas
 * @return template class entitas
 */
