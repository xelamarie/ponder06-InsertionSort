/***********************************************************************
 * Header:
 *    INSERTION SORT
 * Summary:
 *    This will contain just the prototype for insertionSortTest(). You may
 *    want to put other class definitions here as well.
 * Author
 *    Shayla Nelson
 ************************************************************************/

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "node.h"

/***********************************************
 * INSERTION SORT
 * Sort the items in the array
 **********************************************/
template <class T>
void sortInsertion(T array[], int num)
{
   // create a new node to start the linked list (with first array item)
   Node <T> * pHead = new Node <T> (array[0]);

   // create a node to signify previous node
   Node <T> * pPrev = pHead;

   // loop through array and compare to values in linked list
   for (int i = 1; i < num; i++)
   {
      for (Node <T> * p = pHead; p; p = p->pNext)
      {
         if (array[i] < p->data && p == pHead)     // item goes at beginning
         {
            insert(array[i], p, true);
            pHead = p;
            break;
         }
         else if (array[i] < p->data)              // item goes between
         {
            insert(array[i], pPrev);
            break;
         }
         else if (p->pNext == NULL)                // item goes at end
         {
            insert(array[i], p);
            break;
         }
         else
         {
            pPrev = p;                             // increment previous
         }
      }
   }

   // repopulate input array with sorted data
   int i = 0;
   for (Node <T> * p = pHead; p; p = p->pNext)
   {
      array[i] = p->data;
      i++;
   }
}

#endif // INSERTION_SORT_H
