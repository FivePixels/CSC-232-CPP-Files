/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    BinaryTree.h
 * @author  Dylan Bolger <dpb3446s@missouristate.edu>
 * @brief   BinaryTree.h header file.
 */
#ifndef HW05_BINARYTREE_H
#define HW05_BINARYTREE_H
#include "BinaryTreeInterface.h"

template<typename ItemType>
class BinaryTree : public BinaryTreeInterface<ItemType> {
public:
    /**
     * @brief Tests whether this binary tree is empty.
     * @return true if this binary tree is empty, otherwise false.
     */
    bool isEmpty() const override;

    /**
     * @brief Gets the height of this binary tree.
     * @return the height of this binary tree.
     */
    int getHeight() const override;

    /**
     * @brief Gets the number of nodes in this binary tree.
     * @return the number of nodes in this binary tree.
     */
    int getNumberOfNodes() const override;

    /**
     * @brief Gets the data that is in the root of this binary tree.
     * @pre This binary tree is not empty
     * @post A copy of the root's data has been returned and this binary tree is unchanged.
     * @return the data in the root of this binary tree.
     */
    ItemType getRootData() const noexcept(false) override;
    /**
     * @brief Replace the data in the root of this binary tree with the given data if
     * this binary tree is not empty. However, if this tree is empty, inserts a new root
     * node containing the given data into this tree.
     * @pre None.
     * @post The data in the root of this binary tree is as given.
     * @param newData the data for the root
     */
    void setRootData(const ItemType& newData) const override;

    /**
     * @brief Adds the given data to this binary tree.
     * @post This binary tree contains the new data.
     * @param newData the data to add to this tree
     * @return true if the addition is successful; false otherwise.
     */
    bool add(const ItemType& newData) override;

    /**
     * @brief Removes the specified data from this binary tree.
     * @param target The data to remove from this binary tree.
     * @return true if the removal is successful; false otherwise.
     */
    bool remove(const ItemType& target) override;

    /**
     * @brief Removes all the data from this binary tree.
     */
    void clear() override;

    /**
     * @brief Retrieves the specified data from this binary tree.
     * @post A copy of the desired data has been returned, and this binary tree
     * is unchanged. If no such data was found, and exception is thrown.
     * @param target the data to locate
     * @return a copy of the data in the binary tree that matches the given data.
     * @throw NotFoundException when the target is not in this binary tree
     */
    ItemType getEntry(const ItemType& target) const noexcept(false) override;

    /**
     * @brief Tests whether the specified data occurs in this binary tree.
     * @post The binary tree is unchanged
     * @param target the data to find
     * @return true if data matching the target occurs in this binary tree; false otherwise
     */
    bool contains(const ItemType& target) const override;

    /**
     * @brief Traverses this binary tree in preorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void preorderTraverse(void visit(ItemType&)) const override;

    /**
     * @brief Traverses this binary tree in inorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void inorderTraverse(void visit(ItemType&)) const override;

    /**
     * @brief Traverses this binary tree in postorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void postOrderTraverse(void visit(ItemType&)) const override;

    /**
     * @brief Destroys this tree and frees its assigned memory.
     */
    ~BinaryTree() override = default;
};

template<typename ItemType>
bool BinaryTree<ItemType>::isEmpty() const {
    return false;
}

template<typename ItemType>
int BinaryTree<ItemType>::getHeight() const {
    return 0;
}

template<typename ItemType>
int BinaryTree<ItemType>::getNumberOfNodes() const {
    return 0;
}

template<typename ItemType>
ItemType BinaryTree<ItemType>::getRootData() const noexcept(false) {
    return ItemType{};
}

template<typename ItemType>
void BinaryTree<ItemType>::setRootData(const ItemType &newData) const {

}

template<typename ItemType>
bool BinaryTree<ItemType>::add(const ItemType &newData) {
    return false;
}

template<typename ItemType>
bool BinaryTree<ItemType>::remove(const ItemType &target) {
    return false;
}

template<typename ItemType>
void BinaryTree<ItemType>::clear() {

}

template<typename ItemType>
ItemType BinaryTree<ItemType>::getEntry(const ItemType &target) const noexcept(false) {
    return ItemType{};
}

template<typename ItemType>
bool BinaryTree<ItemType>::contains(const ItemType &target) const {
    return false;
}

template<typename ItemType>
void BinaryTree<ItemType>::preorderTraverse(void (*visit)(ItemType &)) const {

}

template<typename ItemType>
void BinaryTree<ItemType>::inorderTraverse(void (*visit)(ItemType &)) const {

}

template<typename ItemType>
void BinaryTree<ItemType>::postOrderTraverse(void (*visit)(ItemType &)) const {

}


#endif //HW05_BINARYTREE_H
