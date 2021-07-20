/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2019
 *
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Dylan Bolger <dpb3446s@missouristate.edu>
 * @file    hw02.h
 * @brief   Function definitions for Homework 2.
 */

#ifndef CSC232_HW02_H
#define CSC232_HW02_H

#include <cassert>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE !FALSE
#endif

#define USE_MAIN_INPUT_FILE FALSE
#define USE_DEMO_INPUT_FILE FALSE
#define USE_TEST_INPUT_FILE FALSE

/**
 * Custom namespace for our work in CSC232.
 */
namespace csc232
{
    using integer_t = int;
    using real_t = double;

    /**
     * An iterative function used to compute x^n for some n >= 0.
     *
     * @param x a real number whose nth power is computed
     * @param n the power used in calculating x^n
     * @return x^n for n >= 0 is returned.
     * @pre n >= 0.
     * @post Power1(x, n) > 0 if n >= 0.
     */
    real_t Power1(real_t x, integer_t n)
    {
        assert(n >= 0);
        real_t result = 1;
        while (n > 0) {
            result *=x;
            n--;
        }
        return result;
    }


    /**
     * A recursive function used to compute x^n for some n >= 0 using the following
     * recursive formulation:
     *
     * @code{.cpp}
     * x^0 = 1
     * x^n = x * x^(n - 1) if n > 0
     * @endcode
     *
     * @param x a real number whose nth power is computed
     * @param n the power used in calculating x^n
     * @return x^n for n >= 0 is returned.
     * @pre n >= 0.
     * @post Power2(x, n) > 0 if n >= 0.
     */
    real_t Power2(real_t x, integer_t n)
    {
        assert(n >= 0);
        if (n == 0) {
            return 1;
        } else {
            return x * Power2(x, n-1);
        }
    }

    /**
     * Determines the evenness of a number.
     *
     * @param n the number under interrogation
     * @return True is returned if the given number is even, false otherwise.
     */
    bool isEven(integer_t n)
    {
        if (n % 2) {
            return false;
        }
        return true;
    }

    /**
     * A recursive function used to compute x^n for some n >= 0 using the following
     * recursive formulation:
     *
     * @code{.cpp}
     * x^0 = 1
     * x^n = (x^(n/2))^2 if n > 0 and n is even
     * x^n = x * (x^(n/2))^2 if n > 0 and n is odd
     * @endcode
     *
     * @param x a real number whose nth power is computed
     * @param n the power used in calculating x^n
     * @return x^n for n >= 0 is returned.
     * @pre n >= 0.
     * @post Power3(x, n) > 0 if n >= 0.
     */
    real_t Power3(real_t x, integer_t n)
    {
        assert(n >= 0);
        if (n == 0) {
            return 1;
        } else {
          real_t halfPower = Power3(x, n/2);
          if (isEven(n)) {
              return halfPower * halfPower;
          } else {
              return x * halfPower * halfPower;
          }
        }
    }
}

#endif //CSC232_HW02_H
