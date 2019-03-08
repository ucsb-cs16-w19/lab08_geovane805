#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) 
{
  int sum = 0;
  sum = head->data; //holds the previous sum data being added per recursion

  Node* tempHolder = new Node;
  tempHolder->data = head->data; // holds previous sum
  head = head->next; // points head to next address

  if (head == NULL)
  {
    return sum;
  }
  else
  {
    sum = tempHolder->data + head->data; // old sum + new sum

    Node* tempNode = new Node; // new node with updated sum
    tempNode->data = sum; // updated sum
    tempNode->next = head->next; // and address of next data node

    return(recursiveSum(tempNode));
    return 0; // once the recursive breaks, break it, and return the sum
  }
}


//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) 
{
  int max = 0;
  max = head->data; //holds the previous largest value

  Node* tempHolder = new Node;
  tempHolder->data = head->data; // holds previous largest value
  head = head->next; // points head to next address

  if (head == NULL)
  {
    return max; //return largest value
  }
  else
  {
    if (max < head->data)
    {
      max = head->data; // new largest value
    }

    Node* tempNode = new Node; // new node with updated largest value
    tempNode->data = max; // updated largest value
    tempNode->next = head->next; // and address of next data node

    return(recursiveLargestValue(tempNode));
    return 0; 
  }
}
