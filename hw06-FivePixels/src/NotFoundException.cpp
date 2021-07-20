/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    NotFoundException.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Custom exception class implementation.
 */

#include "NotFoundException.h"

NotFoundException::NotFoundException(const std::string& message)
        : std::logic_error("Not Found Exception: " + message)
{
}  // end constructor