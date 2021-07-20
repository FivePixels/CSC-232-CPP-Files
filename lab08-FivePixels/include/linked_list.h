/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    linked_list.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   LinkedList specification.
 */

#ifndef MSU_CSC232_LINKED_LIST_H__
#define MSU_CSC232_LINKED_LIST_H__

#include "list.h"
#include "node.h"
#include "precond_violated_excep.h"

template<class Object>
class LinkedList : public List<Object>
{
private:
    Node<Object>* headPtr; // Pointer to first node in the chain;
    // (contains the first entry in the list)
    int itemCount;           // Current count of list items

    // Locates a specified node in this linked list.
    // @pre  position is the number of the desired node;
    //       position >= 1 and position <= itemCount.
    // @post  The node is found and a pointer to it is returned.
    // @param position  The number of the node to locate.
    // @return  A pointer to the node at the given position.
    Node<Object>* getNodeAt(int position) const noexcept( false );

public:
    LinkedList();
    LinkedList(const LinkedList<Object>& aList);
    virtual ~LinkedList();

    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const Object& newEntry);
    bool remove(int position);
    void clear();

    /** @throw PrecondViolatedExcep if position < 1 or
                                       position > getLength(). */
    Object getEntry(int position) const noexcept( false );

    /** @throw PrecondViolatedExcep if position < 1 or
                                       position > getLength(). */
    void replace(int position, const Object& newEntry) noexcept( false );
}; // end LinkedList

#endif //MSU_CSC232_LINKED_LIST_H__
