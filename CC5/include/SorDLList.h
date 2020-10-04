//Fangcong Yin
//fyin2@nd.edu
//CC5: Sorted Doubly Linked list

#ifndef SORDLLIST
#define SORDLLIST
#include "DLList.h"

template <class T>
//Inherit doubly linked list
class SorDLList : public DLList<T>{
public:
  SorDLList(): DLList<T>(){}
  ~SorDLList(){}
  //MOdify the insert method from the doubly linked list
  void Insert (T value)
  {
     typename DLList<T>::node* temp = new typename DLList<T>:: node(value);
     if ( this -> IsEmpty() )
     {
       this -> head = temp;
       this -> tail = temp;
     }
     else
     {
      typename DLList<T>::node* prev =  NULL;
      typename DLList<T>::node* curr = this -> head;

      //While the element is less than the inserted value, continue iterating
      while ((curr != NULL) && ((curr -> data) < (temp -> data)))
      {

       prev = curr;
       curr = curr->next;
      }
      //If the inserted value sholud be inserted to the first of the list
      if(prev==NULL){
        curr -> prev = temp;
        curr -> prev -> next = curr;
        this -> head = temp;
      }
      else if(curr!=NULL){
        curr -> prev = temp;
        curr -> prev -> next = curr;
        prev -> next = temp;
        prev -> next -> prev = prev;
      }
      //If the inserted value sholud be inserted to the end of the list
      else{
      /* insert the node, temp, at the end */
      prev -> next = temp;
      prev -> next -> prev = prev;
      prev -> next -> next = curr;
      this -> tail = temp;

      /* Allocate tail */

    }
     }
  }
  friend std::ostream& operator<<( std::ostream& output, const SorDLList<T>& theList ){

     typename DLList<T>::node* curr;

     if (theList.IsEmpty())
     {
      output << "The list is empty" << std::endl;;
     }
     else
     {
      /* set the current pointer to the first
      ** node of the list */
      curr = theList.head;

      /* Until the end of the list */
      while (curr != NULL)
      {
        /* print the current data item */
        output << curr->data << " ";

        /* move to the next node */
        curr = curr -> next;
      }
     }

     return output;
  }

};
#endif
