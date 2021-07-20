/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020.
 *
 * @file   STLQueueToQueueAdapter.h
 * @author Jim Daehn
 * @brief  Adapter specification.
 */

#ifndef CSC232_STL_QUEUE_TO_QUEUE_ADAPTER_H__
#define CSC232_STL_QUEUE_TO_QUEUE_ADAPTER_H__

#include <queue>
#include "QueueInterface.h"

template <typename ItemType>
class STLQueueToQueueAdapter : public QueueInterface<ItemType>
{
public:
    explicit STLQueueToQueueAdapter(const std::queue<ItemType>& queue);
    bool isEmpty() const override;
    bool enqueue(const ItemType& newEntry) override;
    bool dequeue() override;
    ItemType peekFront() const override;
private:
    std::queue<ItemType> stlQueue;
};

#endif //CSC232_STL_QUEUE_TO_QUEUE_ADAPTER_H__
