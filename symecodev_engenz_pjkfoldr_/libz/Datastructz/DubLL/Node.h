/****************************************************************
* File      :   Node.h
* Version   :   1.0
* Date      :   Winter, 2018
* Author    :   Madjid Allili (mallili@ubishops.ca)//// EDITED by //Matthew E. Duffy & Thomas Collier for dlist!
* Subject   :   Declarations of class Node
 *****************************************************************/

#ifndef _Node_h
#define _Node_h

template <class TYPE> class DLinkedList;
template <class TYPE>
class Node{
      friend class DLinkedList<TYPE>;
      TYPE value;
      Node<TYPE> * next;
      Node <TYPE> * prev;
      Node (const  TYPE& t,  Node * n = NULL, Node* p = NULL ){
           value = t;
           next = n;
	   prev = p; 
      }
};

#endif  
