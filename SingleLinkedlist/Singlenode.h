#ifndef Singlenode_h
#define Singlenode_h
#include <iostream>

template<typename T>
class Singlenode
{
private:
  T elem;
  Singlenode<T> * next;
  template <typename> friend class Singlell;
};

#endif
