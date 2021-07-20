/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    StackInterface.h
 * @authors Frank M. Carrano
 *          Timothy M. Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 * @brief   StackInterface specification.
 */

#ifndef CSC232_STACKINTERFACE_H__
#define CSC232_STACKINTERFACE_H__

template<class ItemType>
class StackInterface
{
public:

    /**
     * @brief  Sees whether this stack is empty.
     * @return True if the stack is empty, or false if not.
     */
    virtual bool isEmpty() const = 0;

    /**
     * @brief  Adds a new entry to the top of this stack.
     * @post   If the operation was successful, newEntry is at the top
     *         of the stack.
     * @param  newEntry The object to be added as a new entry.
     * @return True if the addition is successful or false if not.
     */
    virtual bool push(const ItemType& newEntry) = 0;

    /**
     * @brief  Removes the top of this stack.
     * @post   If the operation was successful, the top of the stack
     *         has been removed.
     * @return True if the removal is successful or false if not.
     */
    virtual bool pop() = 0;

    /**
     * @brief  Returns a copy of the top of this stack.
     * @pre    The stack is not empty.
     * @post   A copy of the top of the stack has been returned, and
     *         the stack is unchanged.
     * @return A copy of the top of the stack.
     */
    virtual ItemType peek() const = 0;

    /**
     * @brief Destroys this stack and frees its assigned memory.
     */
    virtual ~StackInterface() = default;
}; // end StackInterface

#endif //CSC232_STACKINTERFACE_H__
