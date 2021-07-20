/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of hwnDemo target.
 */

#include "csc232.h"

#include <functional> // access to bool operator() and less()
#include <strings.h>
#include <vector>

// Generic findMax, with a function object, C++ style
// Pre-condition: a.size() > 0
template <typename Object, typename Comparator>
const Object & findMax( const std::vector<Object>& arr, Comparator isLessThan )
{
    int maxIndex = 0;
    for ( int i = 1; i < arr.size(); ++i )
        if( isLessThan( arr[ maxIndex ], arr[ i ] ) )
            maxIndex = i;
    return arr[ maxIndex ];
}

// Generic findMax, using default ordering
template <typename Object>
const Object & findMax( const std::vector<Object>& arr )
{
    // Note: second parameter is a function object
    return findMax( arr, std::less<Object>{ } );
}

class CaseInsensitiveCompare
{
public:
    bool operator( )( const std::string & lhs, const std::string & rhs ) const
    {
        return strcasecmp(lhs.c_str( ), rhs.c_str( ) ) < 0;
    }
};

int main( )
{
    std::vector<std::string> arr = { "ZEBRA", "alligator", "crocodile" };
    // Note: second parameter is a function object
    std::cout << findMax( arr, CaseInsensitiveCompare{ } ) << std::endl;
    std::cout << findMax( arr ) << std::endl;
    return EXIT_SUCCESS;
}
