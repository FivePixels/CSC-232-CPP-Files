/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of hw05Demo target.
 */

#include "csc232.h"
#include "linked_list.h" // ADT list operations

void displayList(List<std::string>* listPtr)
{
    std::cout << "The list contains " << std::endl;
    for (int pos = 1; pos <= listPtr->getLength(); pos++)
    {
        try
        {
            std::cout << listPtr->getEntry(pos) << " ";
        }
        catch(const PrecondViolatedExcep& except)
        {
            std::cout << "Exception thrown getting entry inserted at position " << pos << std::endl;
            std::cout << except.what() << std::endl;
        }
    } // end for
    std::cout << std::endl;
}  // end displayList

void copyConstructorTester()
{
    LinkedList<std::string> list;
    std::string items[] = {"zero", "one", "two", "three", "four", "five"};
    for (const auto & item : items)
    {
        std::cout << "Adding " << item << std::endl;
        bool success = list.insert(1, item);
        if (!success)
            std::cout << "Failed to add " << item << " to the list." << std::endl;
    }
    displayList(&list);

    LinkedList<std::string> copyOfList(list);
    std::cout << "Copy of list: ";
    displayList(&copyOfList);

    std::cout << "The copied list: ";
    displayList(&list);
}  // end copyConstructorTester

void listTester(List<std::string>* listPtr)
{
    std::string data[] = {"one", "two", "three", "four", "five", "six"};
    std::cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        if (listPtr->insert(i + 1, data[i]))
        {
            try
            {
                std::cout << "Inserted " << listPtr->getEntry(i + 1) << " at position " << (i + 1) << std::endl;
            } catch (const PrecondViolatedExcep& except)
            {
                std::cout << "Exception thrown getting entry inserted at list end!" << std::endl;
                std::cout << except.what() << std::endl;
            }
        }
        else
            std::cout << "Cannot insert " << data[i] << " at position " << (i + 1) << std::endl;
    }  // end for

    displayList(listPtr);

    std::cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 0 (false)" << std::endl;
    std::cout << "getLength returns : " << listPtr->getLength() << "; should be 6" << std::endl;

    try
    {
        std::cout << "The entry at position 4 is " << listPtr->getEntry(4) << "; should be four" << std::endl;
    }
    catch (const PrecondViolatedExcep& except)
    {
        std::cout << "Exception thrown getting entry at position 4!" << std::endl;
        std::cout << except.what() << std::endl;
    }
    std::cout << "After replacing the entry at position 3 with XXX: ";
    try
    {
        listPtr->replace(3, "XXX");
    }
    catch (const PrecondViolatedExcep& except)
    {
        std::cout << "Exception thrown getting entry at position 3!" << std::endl;
        std::cout << except.what() << std::endl;
    }
    displayList(listPtr);

    std::cout << "remove(2): returns " << listPtr->remove(2) << "; should be 1 (true)" << std::endl;
    std::cout << "remove(1): returns " << listPtr->remove(1) << "; should be 1 (true)" << std::endl;
    std::cout << "remove(6): returns " << listPtr->remove(6) << "; should be 0 (false)" << std::endl;
    displayList(listPtr);

    std::cout << "clear: " << std::endl;
    listPtr->clear();
    std::cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << std::endl;

    try
    {
        std::cout << "Attempt an illegal retrieval from position 6: " << std::endl;
        listPtr->getEntry(6);
    }
    catch(const PrecondViolatedExcep& e)
    {
        std::cout << e.what() << std::endl;
    }  // end try/catch

    try
    {
        std::cout << "Attempt an illegal replacement at position 6: " << std::endl;
        listPtr->replace(6, "YYY");
    }
    catch(const PrecondViolatedExcep& e)
    {
        std::cout << e.what() << std::endl;
    }  // end try/catch

} // end listTester

int main()
{
    List<std::string>* listPtr = new LinkedList<std::string>();
    listTester(listPtr);
    copyConstructorTester();
    return 0;
}  // end main

/*
 Adding zero
 Adding one
 Adding two
 Adding three
 Adding four
 Adding five
 The list contains
 five four three two one zero

 Copy of list: The list contains
 five four three two one zero

 The copied list: The list contains
 five four three two one zero

 Testing the Link-Based List:
 isEmpty: returns 1; should be 1 (true)
 Inserted one at position 1
 Inserted two at position 2
 Inserted three at position 3
 Inserted four at position 4
 Inserted five at position 5
 Inserted six at position 6
 The list contains
 one two three four five six

 isEmpty: returns 0; should be 0 (false)
 getLength returns : 6; should be 6
 The entry at position 4 is four; should be four
 After replacing the entry at position 3 with XXX: The list contains
 one two XXX four five six

 remove(2): returns 1; should be 1 (true)
 remove(1): returns 1; should be 1 (true)
 remove(6): returns 0; should be 0 (false)
 The list contains
 XXX four five six

 getLength returns : 4; should be 4
 clear:
 isEmpty: returns 1; should be 1 (true)
 Attempt an illegal retrieval from position 6:
 Precondition Violated Exception: getEntry() called with an empty list or invalid position.
 Attempt an illegal replacement at position 6:
 Precondition Violated Exception: replace() called with an invalid position.
*/