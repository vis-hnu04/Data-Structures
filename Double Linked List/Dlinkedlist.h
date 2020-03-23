#ifndef Dlinkedlist_h
#define Dlinkedlist_h

#include"Doublenode.h"
namespace list{
        
    template <typename T>

    class Dlinkedlist{
        /*forward declaration of class */
        class iterator;
    public:
        Dlinkedlist();
        ~Dlinkedlist();
        bool empty() const;
        const T& front() const;
        const T& back() const;
        void addFront(const T &t);
        void addBack(const T &t);
        void removeBack();
        void removeFront();
        iterator begin();
    private:
        Doublenode<T>* head;
        Doublenode<T>* tail;
    protected:
        void add(Doublenode<T>* v, const T & t);
        void remove(Doublenode<T>* v); 
    };

    template <typename T>
    class<T>Dlinkedlist:: iterator{
        public:
        iterator(Doublenode<T>* n){
            current = n;
        }
        iterator& operator++(){
            current = current -> next;
            return this;
        }
        T operator* (){
            return current ->elem;
        }
        private:
        Doublenode<T> *current;
    }

    template <typename T>
    iterator Dlinkedlist<T>::begin(){
        return (iterator(head -> next));
    }

    template <typename T>
    bool Dlinkedlist<T>::empty(){
        return head -> next == tail;

    }
    template <typename T>
    Dlinkedlist<T>::Dlinkedlist(){
        head =new Doublenode;
        tail =new Doublenode;
        head -> next = tail;
        tail-> next = head;
    }

    template <typename T>
    Dlinkedlist<T>::~Dlinkedlist(){
        while (!empty())removeFront();
        delete head;
        delete tail;
    }

    template<typename T>
    const T & Dlinkedlist<T>::front()const{
        return head -> next -> elem;
    }

    template<typename T>
    const T & Dlinkedlist<T>::back()const{
        return tail -> prev -> elem;
    }

    template<typename T>
    void Dlinkedlist<T>::add(Doublenode<T>* v, const T & t){
        Doublenode* u = new Doublenode;
        u -> elem =t;
        u -> next =v;
        u -> prev = v-> prev;
        v -> prev -> next = v-> prev =u;
    }

    template<typename T>
    void Dlinkedlist<T>::addFront(const T &t){
        add(header ->next, t);
    }

    template<typename T>
    void Dlinkedlist<T>::addBack(const T &t){
        add(tail, e);
    }

    template<typename T>
    void Dlinkedlist<T>::remove(Doublenode<T>* v)
    {
    Doublenode<T>* u = v -> prev;
    Doublenode<T>* w = v -> next;
    u -> next = w;
    w -> prev = u;
    delete v;
    }

    template<typename T>
    void Dlinkedlist<T>::removeFront(){
        remove(head->next);
    }
    template<typename T>
    void Dlinkedlist<T>::removeBack(){
        remove(tail -> prev);
    }
}
#endif

