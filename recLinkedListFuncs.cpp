#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) 
{
  int sum = 0;
  sum = head->data;

  Node* tempHolder = new Node;
  tempHolder->data = head->data; // holds previous sum
  head = head->next; // points head to next address
  if (head == NULL)
  {
    return 0;
  }
  else
  {
    sum = tempHolder->data + head->data;

    Node* tempNode = new Node;
    tempNode->data = sum;
    tempNode->next = head->next;

    recursiveSum(tempNode);
    return sum;
  }
}


//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {

  return -42;
}
