#ifndef Singlell_h
#define Singlell_h

#include"Singlenode.h"

template <typename T>

class Singlell{
public:
 Singlell();
 ~Singlell();
 bool empty() const;
 const T& front() const;
 void addFront(const T &t);
 void insertPosition(int position, const T & t);
 void removeFront();
 void display();
private:
 Singlenode<T>* head;
};

//#include"Singlell.cpp"
#endif

