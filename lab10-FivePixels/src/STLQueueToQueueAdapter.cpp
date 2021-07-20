/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020.
 *
 * @file   STLQueueToQueueAdapter.cpp
 * @author //TODO: Add your name here
 * @brief  Adapter implementation.
 */

#include "STLQueueToQueueAdapter.h"

template<typename ItemType>
STLQueueToQueueAdapter<ItemType>::STLQueueToQueueAdapter(const std::queue<ItemType>& queue)
{
    stlQueue = queue;
}

template<typename ItemType>
bool STLQueueToQueueAdapter<ItemType>::isEmpty() const
{
    return stlQueue.empty();
}

template<typename ItemType>
bool STLQueueToQueueAdapter<ItemType>::enqueue(const ItemType& newEntry)
{
    stlQueue.push(newEntry);
    return true;
}

template<typename ItemType>
bool STLQueueToQueueAdapter<ItemType>::dequeue() {
    if (isEmpty()) {
        return false;
    }
    stlQueue.pop();
    return true;
}

template<typename ItemType>
ItemType STLQueueToQueueAdapter<ItemType>::peekFront() const {
    if (isEmpty()) {
        throw std::logic_error("Error");
    }

    return stlQueue.front();
}
