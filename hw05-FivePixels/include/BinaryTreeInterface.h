/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    BinaryTreeInterface.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Interface for the ADT binary tree.
 */

#ifndef CSC232_BINARY_TREE_INTERFACE_H__
#define CSC232_BINARY_TREE_INTERFACE_H__

#include "NotFoundException.h"

/**
 * @brief Listing 15-1 An interface template for the ADT binary tree.
 * @tparam ItemType template parameter of the type of object contained in this tree.
 */
template <typename ItemType>
class BinaryTreeInterface
{
public:
    /**
     * @brief Tests whether this binary tree is empty.
     * @return true if this binary tree is empty, otherwise false.
     */
    virtual bool isEmpty() const = 0;

    /**
     * @brief Gets the height of this binary tree.
     * @return the height of this binary tree.
     */
    virtual int getHeight() const = 0;

    /**
     * @brief Gets the number of nodes in this binary tree.
     * @return the number of nodes in this binary tree.
     */
    virtual int getNumberOfNodes() const = 0;

    /**
     * @brief Gets the data that is in the root of this binary tree.
     * @pre This binary tree is not empty
     * @post A copy of the root's data has been returned and this binary tree is unchanged.
     * @return the data in the root of this binary tree.
     */
    virtual ItemType getRootData() const = 0;

    /**
     * @brief Replace the data in the root of this binary tree with the given data if
     * this binary tree is not empty. However, if this tree is empty, inserts a new root
     * node containing the given data into this tree.
     * @pre None.
     * @post The data in the root of this binary tree is as given.
     * @param newData the data for the root
     */
    virtual void setRootData(const ItemType& newData) const = 0;

    /**
     * @brief Adds the given data to this binary tree.
     * @post This binary tree contains the new data.
     * @param newData the data to add to this tree
     * @return true if the addition is successful; false otherwise.
     */
    virtual bool add(const ItemType& newData) = 0;

    /**
     * @brief Removes the specified data from this binary tree.
     * @param target The data to remove from this binary tree.
     * @return true if the removal is successful; false otherwise.
     */
    virtual bool remove(const ItemType& target) = 0;

    /**
     * @brief Removes all the data from this binary tree.
     */
    virtual void clear() = 0;

    /**
     * @brief Retrieves the specified data from this binary tree.
     * @post A copy of the desired data has been returned, and this binary tree
     * is unchanged. If no such data was found, and exception is thrown.
     * @param target the data to locate
     * @return a copy of the data in the binary tree that matches the given data.
     * @throw NotFoundException when the target is not in this binary tree
     */
    virtual ItemType getEntry(const ItemType& target) const noexcept(false) = 0;

    /**
     * @brief Tests whether the specified data occurs in this binary tree.
     * @post The binary tree is unchanged
     * @param target the data to find
     * @return true if data matching the target occurs in this binary tree; false otherwise
     */
    virtual bool contains(const ItemType& target) const = 0;

    /**
     * @brief Traverses this binary tree in preorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    virtual void preorderTraverse(void visit(ItemType&)) const = 0;

    /**
     * @brief Traverses this binary tree in inorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    virtual void inorderTraverse(void visit(ItemType&)) const = 0;

    /**
     * @brief Traverses this binary tree in postorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    virtual void postOrderTraverse(void visit(ItemType&)) const = 0;

    /**
     * @brief Destroys this tree and frees its assigned memory.
     */
    virtual ~BinaryTreeInterface() = default;
}; // end BinaryTreeInterface

#endif //CSC232_BINARY_TREE_INTERFACE_H__
