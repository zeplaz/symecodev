
//Matthew E. Duffy & Thomas Collier



#ifndef _DLinkedList_h
#define _DLinkedList_h

#include "Node.h"
#include <ostream>
#include <fstream>

//using namespace std;

template <class TYPE>
class DLinkedList {
   private:
      DLinkedList(const DLinkedList &);
      Node<TYPE> *head;
      Node<TYPE> *tail;

   public:
       DLinkedList();
      ~DLinkedList();
      const DLinkedList& operator=(const DLinkedList&);

//methods
void makeEmpty();
Node<TYPE>* insert(const TYPE &, Node<TYPE>* ); //inserts a node
Node<TYPE>* isFirst();//returns a reference to header node
Node<TYPE>* next(Node<TYPE>* ) const;//returns a reference to next node
Node<TYPE>* precedent(Node<TYPE>* ) const;//reference to previous node
Node<TYPE>* remove(Node<TYPE>* N);//removes the node to the right of N
bool isEmpty ( ) const;//returns true if the list is empty
void display (std::ostream &  );//writes to a file the elements of the linked list
Node<TYPE>* Min(Node<TYPE>* H);//finds the min value in a list headed by H
void sort();//sorts the list (selection sort)

};


#endif
