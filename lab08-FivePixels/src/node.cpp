/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    node.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Listing 4-2
 */

#include "node.h"

template<class Object>
Node<Object>::Node(const Object& anItem, Node<Object>* nextNodePtr) :
        item(anItem), next(nextNodePtr)
{
} // end constructor

template<class Object>
void Node<Object>::setItem(const Object& anItem)
{
    item = anItem;
} // end setItem

template<class Object>
void Node<Object>::setNext(Node<Object>* nextNodePtr)
{
    next = nextNodePtr;
} // end setNext

template<class Object>
Object Node<Object>::getItem() const
{
    return item;
} // end getItem

template<class Object>
Node<Object>* Node<Object>::getNext() const
{
    return next;
} // end getNext
