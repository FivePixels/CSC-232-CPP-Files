/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of hwn target.
 */

#include "csc232.h"

template <typename ItemType>
void visit(ItemType& node)
{
    std::cout << node;
}

int main()
{
    BinaryTreeInterface<std::string>* binaryTree = new BinaryTree<std::string>{};

    std::cout << "Just created a new binary tree...\n" << std::endl;
    std::cout << "\tIs it empty? ";
    std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tDoes it have zero height? ";
    std::cout << (binaryTree->getHeight() == 0 ? "Yes" : "No") << " (it should say Yes, but this could be a false "
              << "positive)" << std::endl;
    std::cout << "\tDoes it have zero nodes? ";
    std::cout << (binaryTree->getNumberOfNodes() == 0 ? "Yes" : "No") << " (it should say Yes, but this could be a "
              << "false positive)" << std::endl;

    std::string data{ "Data Structures" };
    binaryTree->add( data );
    std::cout << "\nJust added the string \"Data Structures\" to the tree...\n" << std::endl;
    std::cout << "\tIs it empty? ";
    std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " (it should say No, but this could be a false positive)"
              << std::endl;
    std::cout << "\tDoes it have height 1? ";
    std::cout << (binaryTree->getHeight() == 1 ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tDoes it have one node? ";
    std::cout << (binaryTree->getNumberOfNodes() == 1 ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tIs the root data \"Data Structures\"? ";
    try
    {
        const std::string& expected = data;
        std::string actual = binaryTree->getRootData();
        std::cout << (actual == expected ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    }
    catch (const std::logic_error& e)
    {
        std::cerr << "\n\t\tLooks like calling getRootData() threw an exception... that was unexpected! "
                  << "\n\t\t(I was expecting to see Yes)" << std::endl;
    }

    std::string course{ "CSC232" };
    std::cout << "\nChanging root data to " << course << std::endl;
    std::cout << "\tIs the root data now \"" << course << "\"? ";
    try
    {
        const std::string& expected = course;
        binaryTree->setRootData( course );
        std::string actual = binaryTree->getRootData();
        std::cout << (actual == expected ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    }
    catch (const std::logic_error& e)
    {
        std::cerr << "\n\t\tLooks like calling getRootData() threw an exception... that was unexpected! "
                  << "\n\t\t(I was expecting to see Yes)" << std::endl;
    }

    data = "CSC131";
    binaryTree->add( data );
    std::cout << "\nJust added the string \"CSC131\" to the tree...\n" << std::endl;
    std::cout << "\tIs it empty? ";
    std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " (it should say No, but this could be a false positive)"
              << std::endl;
    std::cout << "\tDoes it have height 2? ";
    std::cout << (binaryTree->getHeight() == 2 ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tDoes it have two nodes? ";
    std::cout << (binaryTree->getNumberOfNodes() == 2 ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tIs the root data \"CSC232\"? ";
    try
    {
        const std::string& expected = data;
        std::string actual = binaryTree->getRootData();
        std::cout << (actual == expected ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    }
    catch (const std::logic_error& e)
    {
        std::cerr << "\n\t\tLooks like calling getRootData() threw an exception... that was unexpected! "
                  << "\n\t\t(I was expecting to see Yes)" << std::endl;
    }
    std::cout << "\tDoes the tree contain the string \"CSC131\"? ";
    std::cout << (binaryTree->contains( data ) ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tDoes the tree contain the string \"" << data.substr( 0, 3 ) << "\"? ";
    std::cout << (binaryTree->contains( data.substr( 0, 3 )) ? "Yes" : "No")
              << " (it should say No, but this could be a false positive)" << std::endl;

    binaryTree->clear();
    std::cout << "\nJust cleared the tree...\n" << std::endl;
    std::cout << "\tIs it empty? ";
    std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " (it should say Yes)" << std::endl;
    std::cout << "\tDoes it have zero height? ";
    std::cout << (binaryTree->getHeight() == 0 ? "Yes" : "No") << " (it should say Yes, but this could be a false "
              << "positive)" << std::endl;
    std::cout << "\tDoes it have zero nodes? ";
    std::cout << (binaryTree->getNumberOfNodes() == 0 ? "Yes" : "No") << " (it should say Yes, but this could be a "
              << "false positive)" << std::endl;

    binaryTree->add( "A" );
    std::cout << "\nJust added \"A\" to the tree...\n";
    binaryTree->add( "B" );
    std::cout << "Just added \"B\" to the tree...\n";
    binaryTree->add( "C" );
    std::cout << "Just added \"C\" to the tree...\n";
    binaryTree->add( "D" );
    std::cout << "Just added \"D\" to the tree...\n\n";

    std::string expectedLetter{ "D" };
    std::cout << "Retrieving \"D\" from the tree..." << std::endl;
    std::string actualLetter = binaryTree->getEntry( expectedLetter );
    std::cout << "\tIs it " << expectedLetter << "? ";
    std::cout << (expectedLetter == actualLetter ? "Yes" : "No") << " (it should say Yes)" << std::endl;

    try
    {
        expectedLetter = "E";
        std::cout << "\nRetrieving \"E\" from the tree..." << std::endl;
        std::cout << "\tDid this throw an exception? ";
        actualLetter = binaryTree->getEntry( expectedLetter );
        std::cout << "No (which is bad; it should throw an exception)" << std::endl;
    }
    catch (const NotFoundException& nfe)
    {
        std::cout << "Yes (which is to be expected!)\n" << std::endl;
    }

    std::cout << "\nConducting a pre-order traversal with a visit function that merely prints out the data in the "
              << "visited node.\n";
    binaryTree->preorderTraverse(visit);
    std::cout << "\tDid it print out ABDC?" << std::endl;

    std::cout << "\nConducting a in-order traversal with a visit function that merely prints out the data in the "
              << "visited node.\n";
    binaryTree->inorderTraverse(visit);
    std::cout << "\tDid it print out DBAC?" << std::endl;

    std::cout << "\nConducting a post-order traversal with a visit function that merely prints out the data in the "
              << "visited node.\n";
    binaryTree->postOrderTraverse(visit);
    std::cout << "\tDid it print out DBCA?" << std::endl;

    return EXIT_SUCCESS;
}
