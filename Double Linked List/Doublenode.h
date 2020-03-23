#ifndef Doublenode_h
#define Doublenode_h

#include <iostream>

template<typename T>
class Doublenode
{
private:
  T elem;
  Doublenode<T> * next;
  Doublenode<T> * prev;
  template <typename> friend class DLinkedlist;
};

#endif