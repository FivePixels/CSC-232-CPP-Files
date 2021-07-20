/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    BinaryTree.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   BinaryTree implementation.
 */

// TODO: Replace these stubbed out implementations with actual source code. See pages482-491.

#include "BinaryTree.h"
#if EXECUTE_BLOCK
include <iostream>
#endif

template<typename ItemType>
BinaryTree<ItemType>::BinaryTree()
{
#if EXECUTE_BLOCK
    std::cout << "BinaryTree<ItemType>::BinaryTree()" << std::endl;
#endif
}

template<typename ItemType>
BinaryTree<ItemType>::BinaryTree(const BinaryTree<ItemType>& other)
{
#if EXECUTE_BLOCK
    std::cout << "BinaryTree<ItemType>::BinaryTree(const BinaryTree<ItemType>& other)" << std::endl;
#endif
}

template<typename ItemType>
BinaryTree<ItemType>& BinaryTree<ItemType>::operator=(const BinaryTree<ItemType>& rhs)
{
#if EXECUTE_BLOCK
    std::cout << "BinaryTree<ItemType>& BinaryTree<ItemType>::operator=(const BinaryTree<ItemType>& rhs)" << std::endl;
#endif
    return *this;
}

template<typename ItemType>
BinaryTree<ItemType>::~BinaryTree()
{
#if EXECUTE_BLOCK
    std::cout << "BinaryTree<ItemType>::~BinaryTree()" << std::endl;
#endif
}

template<typename ItemType>
bool BinaryTree<ItemType>::isEmpty() const
{
#if EXECUTE_BLOCK
    std::cout << "bool BinaryTree<ItemType>::isEmpty() const" << std::endl;
#endif
    return false;
}

template<typename ItemType>
int BinaryTree<ItemType>::getHeight() const
{
#if EXECUTE_BLOCK
    std::cout << "int BinaryTree<ItemType>::getHeight() const" << std::endl;
#endif
    return 0;
}

template<typename ItemType>
int BinaryTree<ItemType>::getNumberOfNodes() const
{
#if EXECUTE_BLOCK
    std::cout << "int BinaryTree<ItemType>::getNumberOfNodes() const" << std::endl;
#endif
    return 0;
}

template<typename ItemType>
ItemType BinaryTree<ItemType>::getRootData() const
{
#if EXECUTE_BLOCK
    std::cout << "ItemType BinaryTree<ItemType>::getRootData() const" << std::endl;
#endif
    return nullptr;
}

template<typename ItemType>
void BinaryTree<ItemType>::setRootData(const ItemType& newData) const
{
#if EXECUTE_BLOCK
    std::cout << "void BinaryTree<ItemType>::setRootData(const ItemType& newData) const" << std::endl;
#endif
}

template<typename ItemType>
bool BinaryTree<ItemType>::add(const ItemType& newData)
{
#if EXECUTE_BLOCK
    std::cout << "bool BinaryTree<ItemType>::add(const ItemType& newData)" << std::endl;
#endif
    return false;
}

template<typename ItemType>
bool BinaryTree<ItemType>::remove(const ItemType& target)
{
#if EXECUTE_BLOCK
    std::cout << "bool BinaryTree<ItemType>::remove(const ItemType& target)" << std::endl;
#endif
    return false;
}

template<typename ItemType>
void BinaryTree<ItemType>::clear()
{
#if EXECUTE_BLOCK
    std::cout << "void BinaryTree<ItemType>::clear()" << std::endl;
#endif
}

template<typename ItemType>
ItemType BinaryTree<ItemType>::getEntry(const ItemType& target) const noexcept( false )
{
#if EXECUTE_BLOCK
    std::cout << "ItemType BinaryTree<ItemType>::getEntry(const ItemType& target) const noexcept( false )" << std::endl;
#endif
    return ItemType{};
}

template<typename ItemType>
bool BinaryTree<ItemType>::contains(const ItemType& target) const
{
#if EXECUTE_BLOCK
    std::cout << "bool BinaryTree<ItemType>::contains(const ItemType& target)" << std::endl;
#endif
    return false;
}

template<typename ItemType>
void BinaryTree<ItemType>::preorderTraverse(void visit(ItemType&)) const
{
#if EXECUTE_BLOCK
    std::cout << "void BinaryTree<ItemType>::preorderTraverse(void (* visit)(ItemType&))" << std::endl;
#endif
}

template<typename ItemType>
void BinaryTree<ItemType>::inorderTraverse(void (* visit)(ItemType&)) const
{
#if EXECUTE_BLOCK
    std::cout << "void BinaryTree<ItemType>::inorderTraverse(void (* visit)(ItemType&))" << std::endl;
#endif
}

template<typename ItemType>
void BinaryTree<ItemType>::postOrderTraverse(void (* visit)(ItemType&)) const
{
#if EXECUTE_BLOCK
    std::cout << "void BinaryTree<ItemType>::postOrderTraverse(void (* visit)(ItemType&))" << std::endl;
#endif
}
