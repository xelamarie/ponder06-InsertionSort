/***********************************************************************
* Header:
*    NODE
* Summary:
*    This contains the node class which are used to created linked lists.
* Author
*    Shayla Nelson, Matthew Burr, Kimberly Stowe, Bryan Lopez
************************************************************************/

#ifndef NODE_H
#define NODE_H
template <class T>
class Node
{
public:
   // default contructor
   Node() : pNext(NULL). numItems(0) {}

   // non-default constructor
   Node(const T & t) : pNext(NULL), data(t), numItems(0) {}

   // copy function
   Node <T> * copy(const Node <T> * pSource)
   {
      Node <T> * new1 = NULL;
      for (int i = 0; i < numItems; i++)
         new1 = insert(new1, i);
      Node <T> * new2 = NULL;
      
      new2 = copy(new1);
      
      clear(new1);
   }

   // insert function
   void insert(Node <T> * pNext, const T & data, bool after = false)
   {
      Node <T> * pNext = new Node <T>;
      if (after == True)
      {
         t->data = data;
         t->pNext = tHead;
         tHead = t;
         numItems++;
      }
   }

   // insertion operator
   //Node & operator << (const Node &);

   //freeData()
   void freeData(Node <T> * & pHead)
   {
      Node <T> * n = NULL;
      for (int i = 0; i <= numItems; i++)
         n = insert(n, i); 
   }

   //bool head
   bool isFirst(Node * pHead)
   {
      if (head == NULL)
         return true;
      else 
         return false;
   }

   T data;
   Node * pNext;
   Node * pPrev;
   int numItems;
};

#endif // NODE_H