/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of hwn target.
 */

#include "csc232.h"
template<typename ItemType>
void visit(ItemType& T) {
    std::cout << T << std::endl;
}

int main()
{
    BinaryTreeInterface<std::string>* binaryTree = new BinaryTree<std::string>{};
    std::cout << "\nFor the sake of the returns specified in the README, these values aren't actually 'true'" << std::endl;
    std::cout << "Just created a new binary tree...\n" << std::endl;

    std::cout << "\tIs it empty? ";
    std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " " << std::endl;
    std::cout << "\tWhat is the height? ";
    std::cout << (binaryTree->getHeight()) << " (should be 0)" << std::endl;
    std::cout << "\tHow many nodes? ";
    std::cout << (binaryTree->getNumberOfNodes()) << " (should be 0)" << std::endl;
    std::cout << "\tGetRootData(): (the returned data would be on the next line if it had any)" << std::endl;
    std::cout << (binaryTree->getRootData()) << std::endl; // returns ItemType
    binaryTree->setRootData(std::string("data"));
    std::cout << "\tSetRootData(): " << binaryTree->getRootData() << "(the returned data would be here if there was any)" << std::endl;
    std::cout << "\tAdding data:" << std::endl;
    std::cout << "\t" << binaryTree->add("DATA") << " (method is returning false)" << std::endl;
    std::cout << "\tRemoving data:" << std::endl;
    std::cout << "\t" << binaryTree->remove("DATA") << " (method is returning false)" << std::endl;
    std::cout << "\tClearing data:" << std::endl;
    binaryTree->clear();
    std::cout << "\tGetting entry:" << std::endl;
    std::cout << "\tgetEntry('DATA'): " << binaryTree->getEntry("DATA") << "(the returned data would be here if there was any)" << std::endl;
    std::cout << "\tChecking contains:" << std::endl;
    std::cout << "\t" << binaryTree->contains("DATA") << " (method is returning false)" << std::endl;
    std::cout << "\tTrying Preorder:" << std::endl;
    binaryTree->preorderTraverse(visit<std::string>);
    std::cout << "\t(preorder returns nothing)" << std::endl;
    std::cout << "\tTrying inorder:" << std::endl;
    binaryTree->inorderTraverse(visit<std::string>);
    std::cout << "\t(inorder returns nothing)" << std::endl;
    std::cout << "\tTrying postorder:" << std::endl;
    binaryTree->postOrderTraverse(visit<std::string>);
    std::cout << "\t(postorder returns nothing)" << std::endl;
}
