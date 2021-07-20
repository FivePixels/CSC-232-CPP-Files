/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    node.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Node specification.
 */

#ifndef MSU_CSC232_NODE_H__
#define MSU_CSC232_NODE_H__

template<class Object>
class Node
{
private:
    Object        item; // A data item
    Node<Object>* next; // Pointer to next node

public:
    explicit Node(const Object& anItem = Object{}, Node<Object>* nextNodePtr = nullptr);
    void setItem(const Object& anItem);
    void setNext(Node<Object>* nextNodePtr);
    Object getItem() const ;
    Node<Object>* getNext() const ;
}; // end Node

#endif //MSU_CSC232_NODE_H__
