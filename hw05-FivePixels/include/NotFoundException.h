/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 *
 * @file    NotFoundException.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Custom exception class.
 */

#ifndef CSC232_NOT_FOUND_EXCEPTION_H__
#define CSC232_NOT_FOUND_EXCEPTION_H__

#include <stdexcept>

class NotFoundException : public std::logic_error
{
/* public:
    explicit NotFoundException(const std::string& message = "");
    */
}; // end NotFoundException

#endif //CSC232_NOT_FOUND_EXCEPTION_H__
