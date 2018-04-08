#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <class T>

/** @class LinkedList
 * kelas abstrak Linkedlist.
 * */

class LinkedList {
private:
  /* data */
  LinkedList nextItem;
  T item;

public:

  LinkedList();
  LinkedList(T value);

  T getItem();
  LinkedList getNext();

/**@brief Instruksi pencarian entitas pada linkedlist
 * @param template class untuk sebuah entitas
 */
  int find(T);
  /**@brief instruksi pengecekan
   * mengecek apakah kososng.
   */
  bool isEmpty();
  /**@brief instruksi menambah entitas pada linkedlist
   * @param template class untuk sebuah entitas.
   */
  void add(LinkedList);
  /**@brief instruksi penghapusan entitas dalam linked list
   * @param template class untuk sebuah entitas yang akan dihapus.
   */
  void remove(LinkedList);
  /**@brief instruksi pengambilan entitas dalam linked list
   * @param integer indeks entitas
   * @return template class entitas
   */
};

#endif
