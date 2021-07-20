/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    ResizableArrayStack.h
 * @authors Dylan Bolger <dpb3446s@missouristate.edu>
 * @brief   ResizableArrayStack specification.
 */

#ifndef RESIZABLE_ARRAY_STACK_H__
#define RESIZABLE_ARRAY_STACK_H__
#include "StackInterface.h"

template<class ItemType>
class ResizableArrayStack : public StackInterface<ItemType> {
private:
    int arraySize = 50;
    double *anArray = new double[arraySize];
    int top;
public:
    /**
     * @brief  Sees whether this stack is empty.
     * @return True if the stack is empty, or false if not.
     */
    bool isEmpty() const override = 0;

    /**
     * @brief  Adds a new entry to the top of this stack.
     * @post   If the operation was successful, newEntry is at the top
     *         of the stack.
     * @param  newEntry The object to be added as a new entry.
     * @return True if the addition is successful or false if not.
     */
    bool push(const ItemType& newEntry) override = 0;

    /**
     * @brief  Removes the top of this stack.
     * @post   If the operation was successful, the top of the stack
     *         has been removed.
     * @return True if the removal is successful or false if not.
     */
    bool pop() override = 0;

    /**
     * @brief  Returns a copy of the top of this stack.
     * @pre    The stack is not empty.
     * @post   A copy of the top of the stack has been returned, and
     *         the stack is unchanged.
     * @return A copy of the top of the stack.
     */
    ItemType peek() const override = 0;

    /**
    * @brief Destroys this stack and frees its assigned memory.
    */
    ~ResizableArrayStack() override = default;
};

#endif // RESIZABLE_ARRAY_STACK_H__