/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    BinaryTree.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   BinaryTree specification.
 */

#ifndef CSC232_BINARY_TREE_H__
#define CSC232_BINARY_TREE_H__

#include "BinaryTreeInterface.h"
#include "BinaryNode.h"
#include "NotFoundException.h"
#include <memory>

template<typename ItemType>
class BinaryTree : public BinaryTreeInterface<ItemType> {
private:
    std::shared_ptr<BinaryNode<ItemType>> rootPtr;
    // TODO: Add as needed, see page 480 -- You'll have to create the BinaryNode class too

protected:
    int getHeightHelper(std::shared_ptr<BinaryNode<ItemType>> subTreePtr) const;

    int getNumberOfNodesHelper(std::shared_ptr<BinaryNode<ItemType>> subTreePtr) const;

    auto balancedAdd(std::shared_ptr<BinaryNode<ItemType>> subTreePtr,
                     std::shared_ptr<BinaryNode<ItemType>> newNodePtr);

// Removes the target value from the tree.
    virtual auto removeValue(std::shared_ptr<BinaryNode<ItemType>> subTreePtr,
                             const ItemType target, bool &isSuccessful);

    // Copies values up the tree to overwrite value in current node until
    // a leaf is reached; the leaf is then removed, since its value is stored in the parent.
    auto moveValuesUpTree(std::shared_ptr<BinaryNode<ItemType>> subTreePtr);

    // Recursively searches for target value.
    virtual auto findNode(std::shared_ptr<BinaryNode<ItemType>> treePtr,
                          const ItemType &target, bool &isSuccessful) const;

    // Copies the tree rooted at treePtr and returns a pointer to the root of the copy.
public:
    /**
     * @brief Default constructor.
     */
    BinaryTree();

    /**
     * @brief Copy constructor.
     * @param other a reference to another (l-value) tree of which a deep copy will be made
     */
    BinaryTree(const BinaryTree<ItemType> &other);

    /**
     * @brief Move constructor; this constructor is made unavailable to clients.
     * @param other a reference to another (r-value) tree
     */
    BinaryTree(BinaryTree<ItemType> &&other) noexcept = delete;

    /**
     * @brief Copy assignment operator.
     * @param rhs a reference to another (l-value) tree of which a deep copy will be made
     * @return a reference to a newly created tree that is identical to the given tree.
     */
    BinaryTree<ItemType> &operator=(const BinaryTree<ItemType> &rhs);

    /**
     * @brief Move assignment operator; this assignment operator is made unavailable to clients.
     * @param rhs a reference to another (r-value) tree
     * @return a reference to a newly created tree that would be identical to the given tree
     */
    BinaryTree<ItemType> &operator=(BinaryTree<ItemType> &&rhs) = delete;

    /**
     * @brief Destructor.
     */
    ~BinaryTree();

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
    ItemType getRootData() const override;

    /**
     * @brief Replace the data in the root of this binary tree with the given data if
     * this binary tree is not empty. However, if this tree is empty, inserts a new root
     * node containing the given data into this tree.
     * @pre None.
     * @post The data in the root of this binary tree is as given.
     * @param newData the data for the root
     */
    void setRootData(const ItemType &newData) const override;

    /**
     * @brief Adds the given data to this binary tree.
     * @post This binary tree contains the new data.
     * @param newData the data to add to this tree
     * @return true if the addition is successful; false otherwise.
     */
    bool add(const ItemType &newData) override;

    /**
     * @brief Removes the specified data from this binary tree.
     * @param target The data to remove from this binary tree.
     * @return true if the removal is successful; false otherwise.
     */
    bool remove(const ItemType &target) override;

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
    ItemType getEntry(const ItemType &target) const noexcept(false) override;

    /**
     * @brief Tests whether the specified data occurs in this binary tree.
     * @post The binary tree is unchanged
     * @param target the data to find
     * @return true if data matching the target occurs in this binary tree; false otherwise
     */
    bool contains(const ItemType &target) const override;

    /**
     * @brief Traverses this binary tree in preorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void preorderTraverse(void visit(ItemType &)) const override;

    /**
     * @brief Traverses this binary tree in inorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void inorderTraverse(void visit(ItemType &)) const override;

    /**
     * @brief Traverses this binary tree in postorder and calls the function visit once for
     * each node.
     * @param visit a client-defined function that performs an operation on either each visited
     * node or its data.
     */
    void postOrderTraverse(void visit(ItemType &)) const override;
};

#endif //CSC232_BINARY_TREE_H__
