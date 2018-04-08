#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <class T>
class LinkedList {
private:
  /* data */
  T *element;
  int nb;
public:
  ~LinkedList();
  int find(T);
  bool isEmpty();
  void add(T);
  void remove(T);
  T getIndex(int);
};

template <class T>
LinkedList<T>::~LinkedList(){
  delete [] element;
}

template <class T>
int LinkedList<T>::find(T el){
  for (size_t i = 0; i < nb; i++) {
    if(element[i]==el){
      return i;
    }
  }
  return -1;
}

template <class T>
bool LinkedList<T>::isEmpty(){
  return nb==0;
}

template <class T>
void LinkedList<T>::add(T el){
  element[nb]=el;
  nb++;
}

template <class T>
void LinkedList<T>::remove(T el){
  int idx = find(el);
  if(idx!=-1){
    element[idx]==NULL;
  }
}

template <class T>
T LinkedList<T>::get(int idx){
  return element[idx];
}

#endif
