/****************************************************************
* File      :   Node.h
* Version   :   1.0
* Date      :   Winter, 2018
* Author    :   Madjid Allili (mallili@ubishops.ca)
* Subject   :   Declarations of class Node
 *****************************************************************/

#ifndef _Node_h
#define _Node_h

template <class TYPE> class LinkedList;
template <class TYPE>
class Node{
      friend class LinkedList<TYPE>;
      TYPE value;
      Node<TYPE> * next;
      Node (const  TYPE& t,  Node * n = NULL){
           value = t;
           next = n;
      }
};

#endif  
