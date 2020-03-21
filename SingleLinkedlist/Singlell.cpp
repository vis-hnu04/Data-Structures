#include"Singlell.h"

template<typename T> 
Singlell<T>::Singlell(){
  head = NULL ;}

template<typename T>
Singlell<T>::~Singlell(){}

template<typename T>
bool Singlell<T>::empty() const
 { return head== NULL;
 }

template<typename T>
const T& Singlell<T>::front() const
{ return head -> elem;}

template<typename T>
void Singlell<T>::addFront(const T& t)
{ Singlenode<T> * n = new Singlenode<T>;
  n -> elem = t; 
  n -> next = head;
  head =n;
}


template<typename T>
void Singlell<T>::removeFront()
{  
  if (head == NULL){std::cout<<"linkedlist is empty"<<std::endl;
       return; }
   
  Singlenode<T> * old = head;
  head = old -> next;
  delete old; 
 }

template<typename T>
void Singlell<T>::insertPosition(int p, const T& t)
{
  Singlenode<T> * prev = new Singlenode<T> ;
  Singlenode<T> * cur  = new Singlenode<T> ;
  Singlenode<T> * temp = new Singlenode<T> ;
  cur = head;
  if(p < 0)
  {   std::cout<<"Not a valid index"<<std::endl ;
      return;
         }
  for(int i=1; i <p ;i++)
   {
     prev =cur;
     cur = cur->next;
   }
  temp -> elem = t;
  prev -> next = temp ;
  temp -> next = cur;
}
template<typename T>
void Singlell<T>::display()
{
 Singlenode<T> *temp = new Singlenode<T>;
 temp = head;
 while(temp != NULL){
  std::cout << temp -> elem<<"\t";
  temp = temp -> next;
  }
 
} 

template class Singlell<int>;
template class Singlell<float>;
