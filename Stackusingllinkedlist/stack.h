#ifndef stack_h
#define stack_h

#include"Singlenode.h"
#include"Singlell.h" 
#include "Exeption.h"

namespace ds{
template<typename T>    
class Stack {
	int n; //current size of the list
	Singlell<T> S;	//generic linked list type Elem 

public:
	Stack()	                                    //init Linked list in stack, and number of items
		: S(), n(0) {};
	int size() const;	                        //return number of elements in list
	bool isEmpty() const;	
	const T& top() const throw(Exeption);	         //invoke S.front()
	void push(const T& newElement);	                  //ivoke S.addFront()
	void pop() throw(Exeption);		            //invoke S.removeFront()
};

template<typename T >
int Stack<T>::size() const {
 return n;
}

template<typename T >
bool Stack<T>::isEmpty() const {
  return n == 0;
}

template<typename T >
const T& Stack<T>::top() const throw(Exeption) {
  if(isEmpty()){
      throw Exeption("Empty list!");
  }
  return S.front();
}

template<typename T >
void Stack<T>::push(const T &t)  {
  n++;
  S.addFront(t);
}

template<typename T >
void Stack<T>::pop() throw(Exeption) {
 try{
     if(!isEmpty()){
         n--;
         S.removeFront();
         return;
     }
     throw Exeption("empty list");}
 catch(Exeption& err){
     std::cout<<err.getError()<<"\n";
 }   
 }
}
#endif
