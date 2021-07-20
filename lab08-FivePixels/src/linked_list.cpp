/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    linked_list.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   LinkedList implementation.
 */

#include "linked_list.h"  // Header file
#include <cassert>

template<class Object>
LinkedList<Object>::LinkedList()
        : headPtr( nullptr ), itemCount( 0 )
{
}  // end default constructor

template<class Object>
LinkedList<Object>::LinkedList(const LinkedList<Object>& aList)
        : itemCount( aList.itemCount )
{
    Node<Object>* origChainPtr = aList.headPtr;  // Points to nodes in original chain

    if (origChainPtr == NULL)
        headPtr = NULL;  // Original bag is empty; so is copy
    else
    {
        // Copy first node
        headPtr = new Node<Object>();
        headPtr->setItem(origChainPtr->getItem());

        // Copy remaining nodes
        Node<Object>* newChainPtr = headPtr; // Last-node pointer
        while (origChainPtr->getNext() != NULL)
        {
            origChainPtr = origChainPtr ->getNext(); // Advance pointer

            // Get next item from original chain
            Object nextItem = origChainPtr->getItem();

            // Create a new node containing the next item
            Node<Object>* newNodePtr = new Node<Object>(nextItem, newChainPtr);

            // Link new node to end of new chain
            newChainPtr->setNext(newNodePtr);

            // Advance pointer to new last node
            newChainPtr = newChainPtr->getNext();
        } // end while

        newChainPtr->setNext(NULL); // Flag end of new chain
    } // end if
} // end copy constructor

template<class Object>
LinkedList<Object>::~LinkedList()
{
    clear();
}  // end destructor

template<class Object>
bool LinkedList<Object>::isEmpty() const
{
    return itemCount == 0;
}  // end isEmpty

template<class Object>
int LinkedList<Object>::getLength() const
{
    return itemCount;
}  // end getLength

template<class Object>
bool LinkedList<Object>::insert(int newPosition, const Object& newEntry)
{
    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1);
    if (ableToInsert)
    {
        // Create a new node containing the new entry
        auto newNodePtr = new Node<Object>( newEntry );

        // Attach new node to chain
        if (newPosition == 1)
        {
            // Insert new node at beginning of chain
            newNodePtr->setNext( headPtr );
            headPtr = newNodePtr;
        }
        else
        {
            // Find node that will be before new node
            Node<Object>* prevPtr = getNodeAt( newPosition - 1 );

            // Insert new node after node to which prevPtr points
            newNodePtr->setNext( prevPtr->getNext());
            prevPtr->setNext( newNodePtr );
        }  // end if

        itemCount++;  // Increase count of entries
    }  // end if

    return ableToInsert;
}  // end insert

template<class Object>
bool LinkedList<Object>::remove(int position)
{
    bool ableToRemove = (position >= 1) && (position <= itemCount);
    if (ableToRemove)
    {
        Node<Object>* curPtr = nullptr;
        if (position == 1)
        {
            // Remove the first node in the chain
            curPtr = headPtr; // Save pointer to node
            headPtr = headPtr->getNext();
        }
        else
        {
            // Find node that is before the one to delete
            Node<Object>* prevPtr = getNodeAt( position - 1 );

            // Point to node to delete
            curPtr = prevPtr->getNext();

            // Disconnect indicated node from chain by connecting the
            // prior node with the one after
            prevPtr->setNext( curPtr->getNext());
        }  // end if

        // Return node to system
        curPtr->setNext( nullptr );
        delete curPtr;
        curPtr = nullptr;

        itemCount--;  // Decrease count of entries
    }  // end if

    return ableToRemove;
}  // end remove

template<class Object>
void LinkedList<Object>::clear()
{
    while (!isEmpty())
        remove( 1 );
}  // end clear

template<class Object>
Object LinkedList<Object>::getEntry(int position) const noexcept( false )
{
    // Enforce precondition
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet)
    {
        Node<Object>* nodePtr = getNodeAt( position );
        return nodePtr->getItem();
    }
    else
    {
        std::string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw (PrecondViolatedExcep( message ));
    }  // end if
}  // end getEntry

template<class Object>
void LinkedList<Object>::replace(int position, const Object& newEntry) noexcept( false )
{
    if ((position < 1) || (position > itemCount)) {
        std::string message = "private helper method called with an invalid position";
        throw (PrecondViolatedExcep(message));
    }
    bool success = remove(position);
    if (success) {
        insert(position, newEntry);
    }
}  // end replace

template<class Object>
Node<Object>* LinkedList<Object>::getNodeAt(int position) const noexcept( false )
{
    // Check preconditions
    if ((position < 1) || (position > itemCount))
    {
        std::string message = "private helper method called with an invalid position";
        throw (PrecondViolatedExcep( message ));
    }

    // Count from the beginning of the chain
    Node<Object>* curPtr = headPtr;
    for (int skip = 1; skip < position; skip++)
    {
        curPtr = curPtr->getNext();
    }

    return curPtr;
}  // end getNodeAt
//  End of implementation file.
