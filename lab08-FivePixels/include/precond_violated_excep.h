/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    precond_violated_excep.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   LinkedList specification.
 */

#ifndef MSU_CSC232_PRECOND_VIOLATED_EXCEP_H__
#define MSU_CSC232_PRECOND_VIOLATED_EXCEP_H__

#include <stdexcept>
#include <string>

class PrecondViolatedExcep : public std::logic_error
{
public:
    explicit PrecondViolatedExcep(const std::string& message = "")
            :std::logic_error( "Precondition Violated Exception: " + message )
    {
        // Intentionally empty body
    }
}; // end PrecondViolatedExcep

#endif //MSU_CSC232_PRECOND_VIOLATED_EXCEP_H__
