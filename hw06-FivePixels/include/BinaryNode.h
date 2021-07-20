/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    BinaryNode.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   A class of nodes for a link-based binary tree. Listing 16-2.
 */
 
#ifndef BINARY_NODE_
#define BINARY_NODE_

#include <memory>

template<typename ItemType>
class BinaryNode
{   
private:
   ItemType              item;           // Data portion
   std::shared_ptr<BinaryNode<ItemType>> leftChildPtr;   // Pointer to left child
   std::shared_ptr<BinaryNode<ItemType>> rightChildPtr;  // Pointer to right child

public:
   BinaryNode();
   BinaryNode(const ItemType& anItem);
   BinaryNode(const ItemType& anItem,
              std::shared_ptr<BinaryNode<ItemType>> leftPtr,
              std::shared_ptr<BinaryNode<ItemType>> rightPtr);

   void setItem(const ItemType& anItem);
   ItemType getItem() const;
   
   bool isLeaf() const;

   auto getLeftChildPtr() const;
   auto getRightChildPtr() const;
   
   void setLeftChildPtr(std::shared_ptr<BinaryNode<ItemType>> leftPtr);
   void setRightChildPtr(std::shared_ptr<BinaryNode<ItemType>> rightPtr);
}; // end BinaryNode

#endif 
