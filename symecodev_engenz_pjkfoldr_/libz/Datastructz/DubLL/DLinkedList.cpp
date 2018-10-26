
//Matthew E. Duffy & Thomas Collier


#include <iostream>
#include <fstream>
#include "DLinkedList.h"
//#include "Node.h"

using namespace std;

//Constructor
template <class TYPE>
DLinkedList<TYPE>::DLinkedList(){
     head = new Node<TYPE>(0, NULL, NULL);
     head->next =NULL;
     head->value = 0;
     head->prev=NULL;

}

//Destructor
template <class TYPE>
DLinkedList<TYPE>::~DLinkedList(){
  makeEmpty();

}

template <class TYPE>
Node<TYPE>* DLinkedList<TYPE>::isFirst()
{

    return head;
}




template <class TYPE>
void DLinkedList<TYPE>::makeEmpty(){
      Node<TYPE>* temp;

      while (head!=NULL){
          temp = head;
          head = head->next;
           delete temp;

      }
      tail=NULL;
  }



 template <class TYPE>
void DLinkedList<TYPE>::display (ostream & out)
{
Node<TYPE> *current;
current = head;

while (current != NULL)
{

out <<" "<<current->value << " ";
current = current->next;

}

}



//Assignment operator



template <class TYPE>
Node<TYPE>* DLinkedList<TYPE>::insert(const TYPE & e, Node<TYPE>* current){

    if (head == NULL)
    { cout<<"First Create the list."<<endl;
        return current;
    }
    Node<TYPE>*  temp = new Node<TYPE>(e, current -> next);

if (head->value != 0)
{    current -> next  = temp;
    temp->prev = head;}

    if (head->value == 0)
        {
        head = temp;

        }

                    cout<<"Element Inserted"<<endl;
	return temp;

}


template <class TYPE>
bool DLinkedList<TYPE>::isEmpty()const{
      return (head->next==NULL);
}




template <class TYPE>

Node<TYPE>*  DLinkedList<TYPE>:: Min(Node<TYPE>* H)
{   Node<TYPE>*  minval = new Node<TYPE>(0,NULL,NULL);

    if (H->next ==NULL)
    {cout << "list is empty no min";
        return H;}

   minval->value = H-> value;

 while(H != NULL)
  {
  if (H->value < minval->value)
         minval = H;
         H->next;
         cout << endl <<"the MIN value is:" << minval->value <<endl;
   return minval;
  }

}
template <class TYPE>
Node<TYPE>*  DLinkedList<TYPE>::precedent(Node<TYPE>* current ) const
{
    return (current->prev);

}

template <class TYPE>
Node<TYPE>*  DLinkedList<TYPE>::next(Node<TYPE>* current ) const

{
return (current->next);

}




template <class TYPE>
Node<TYPE>* DLinkedList<TYPE>::remove(Node<TYPE>* N) {


  if (isEmpty() == true)
        {cout << "list is empty can not remove";
            return N;
        }

Node<TYPE>*  temp= N;
   N  = N -> next->next ;
   delete temp;


  // return current->next;
     N->prev -> next = temp -> next;
                                                                                    /*
                                                                                    Node<TYPE>* temp = new Node<TYPE> (0, NULL, NULL);
                                                                                     temp =N;

                                                                                        while(temp -> value != N->value)
                                                                                          {   if(temp -> next == NULL)
                                                                                             { printf("\nGiven node is not found in the list!!!");
                                                                                                return N;
                                                                                            }

                                                                                          if(temp == head)
                                                                                          {
                                                                                             head = NULL;
                                                                                             tail== NULL;
                                                                                             delete temp;

                                                                                          }

                                                                                         else
                                                                                          {


                                                                                         delete temp;
                                                                                     }
                                                                                    temp = temp -> next;
                                                                                    }    */
      printf("\nDeletion success!!!");

        return  N->next;

}





template <class TYPE>
void DLinkedList<TYPE>::sort() {


        // traverse the entire list
        for (Node<TYPE> *list = head; list->next != NULL; list = list->next)
        {
            // compare to the list ahead
            for (Node<TYPE> *pass = list->next; pass != NULL; pass = pass->next)
            {
                // compare and swap
                if (list->value > pass->value)
                {
                    // swap
                    int temp = list->value;
                    list->value = pass->value;
                    pass->value = temp;
                }
            }
        }
    }


template class DLinkedList<int>;
