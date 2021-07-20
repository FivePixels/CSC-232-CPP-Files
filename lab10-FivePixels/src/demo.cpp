/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of lab10Demo target.
 */

#include "csc232.h"
#include "QueueInterface.h"
#include "STLQueueToQueueAdapter.h"

int main()
{
    std::cout << "Hello, Demo!" << std::endl;
    QueueInterface<std::string>* qPtr = new STLQueueToQueueAdapter<std::string>{std::queue<std::string>{}};
    if (qPtr->isEmpty()) {
        cout << "Queue is empty, as expected\n";
    } else {
        cerr << "Queue is not empty; this is unexpected!\n";
    }
    return EXIT_SUCCESS;
}
