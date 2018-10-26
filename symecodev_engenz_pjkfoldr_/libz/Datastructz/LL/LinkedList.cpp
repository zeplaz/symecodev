/****************************************************************
* File      :   LinkedList.cpp (Linked list with a header node)
* Version   :   1.0
* Date      :   Winter, 2018
* Author    :   Madjid Allili (mallili@ubishops.ca)
* Subject   :   Methods of class LinkedList
 *****************************************************************/
 
#include <iostream>
#include <assert.h>
#include "LinkedList.h"

using namespace std;


//Constructor
template <class TYPE>
LinkedList<TYPE>::LinkedList(){   
     head = new Node<TYPE>(0, NULL);     

}

//Destructor
template <class TYPE>
LinkedList<TYPE>::~LinkedList(){         
  makeEmpty();

}

//Assignment operator
template <class TYPE> 
const LinkedList<TYPE>& LinkedList<TYPE>::operator=(const LinkedList<TYPE>& Rhs){  
    if (this == &Rhs)return Rhs;
    makeEmpty();
    if(Rhs.isEmpty()) return *this;
    Node<TYPE> *temp;
    temp=Rhs.head;
    do{
           insertFirst(temp->value);
           temp=temp->next;
           
           
    }while(temp!=NULL);
    return *this;
    
}


//Put item on top of LinkedList
template <class TYPE>
Node<TYPE>* LinkedList<TYPE>::isFirst( )const{  
   
    return head;
}

//General Insertion
template <class TYPE>
Node<TYPE>* LinkedList<TYPE>::insert(const TYPE & e, Node<TYPE>* current){
    Node<TYPE>*  temp= new Node<TYPE>(e, current -> next);
    current -> next  = temp;
    
	return temp;

}

//General Removal
template <class TYPE>
Node<TYPE>* LinkedList<TYPE>::remove(Node<TYPE>* current){
   
   Node<TYPE>*  temp= current -> next;
   current -> next  = current -> next -> next;
   delete temp;
   return current->next;	
}

//Delete node holding item
template <class TYPE>
void LinkedList<TYPE>::deleteEL(TYPE& el){
   Node<TYPE>* temp = head;
   Node<TYPE>* prev = NULL;
   bool found = false;
   while (!found && temp!=NULL)
      if (temp->value== el)
         found = true;
      else {
         prev = temp;
         temp = temp->next;
      }
   if (found){
      if (temp==head)
         head = head->next;
      else prev->next = temp->next;
      delete temp;
   }
}

//Find an item
template <class TYPE>
Node<TYPE>* LinkedList<TYPE>::find(TYPE & el){
   Node<TYPE>* temp = head;
   bool found = false;
   while (!found && temp!=NULL)
      if (temp->value == el)
         found = true;
      else temp = temp->next;
   return temp;
}

//True if LinkedList is empty
template <class TYPE>
bool LinkedList<TYPE>::isEmpty()const{    
      return (head->next==NULL);
}

//Make empty
template <class TYPE>
void LinkedList<TYPE>::makeEmpty(){    
      Node<TYPE>* temp=head->next;
      while (temp!=NULL){
            temp=remove(temp);
      }
}

//Display
template <class TYPE>
void LinkedList<TYPE>::display(){
   cout << "\nDisplaying: ";
   if(head->next==NULL) cout<<"The list is empty"<<endl;
   else{
        Node<TYPE>* curr = head->next;
        while (curr!=NULL){
        cout << curr->value << " ";
        curr=curr->next;
        }
   }
   cout << endl << endl;;
}
