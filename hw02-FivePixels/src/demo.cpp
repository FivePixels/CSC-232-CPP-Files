/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of hwnDemo target.
 */

#include "csc232.h"

int main()
{
    std::cout << "\nThis program demonstrates how to call the functions ";
    std::cout << "written in the hw02.h header file." << std::endl;
    std::cout << "For example, to call the Power1 function with arguments 2.3 and 2 ";
    std::cout << "respectfully, we write\n\n";

    std::cout << "csc232::Power1(2.3, 2)" << std::endl;

    std::cout << "\nIf called in a cout statement, it would evaluate to ";
    std::cout << csc232::Power1(2.3, 2) << std::endl;
    std::cout << "(The answer should be 5.29)\n";
    return 0;
}
