/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    Deque.h
 * @author  Dylan Bolger <dpb3446s@missouristate.edu>
 * @brief   Header for the deque.
 */

#ifndef DEQUE_H__
#define DEQUE_H__
#include <deque>
#include <iterator>

/**
    * @brief give a brief description of this interface
    * @tparam T describe the template parameter
    */
template <typename T>
class Deque {
public:
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual void push_back(const T& item);
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual void push_front(const T& item);
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual void pop_back();
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual void pop_front();
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual T& back();
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual T& front();
    /**
     * @brief Returns the size of the deque.
     * @pre state any preconditions, including "None" if applicable
     * @post state the postconditions
     * @param someParameter describe this parameter
     * @return tell us what is returned
     */
    virtual Iterator insert(iterator, item);
};

#endif // DEQUE_H__