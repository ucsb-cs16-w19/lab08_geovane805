#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) 
{
  int sum = 0;
  sum = list->head->data;

  Node* tempHolder = new Node;
  tempHolder->data = list->head->data; // holds previous sum
  head = list->head->next; // points head to next address
  if (list->head == NULL)
  {
    return 0;
  }
  else
  {
  sum = tempHolder->data +list->head->data;

  Node* tempNode = new Node;
  tempNode->data = sum;
  tempNode->next = list->head->next;

  return (recursiveSum(tempNode));
  }
 // int sum = 0;
  //if (list->head == NULL) // end of the list
  //{
//	  return sum;
 // }//
}


//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {

  return -42;
}
