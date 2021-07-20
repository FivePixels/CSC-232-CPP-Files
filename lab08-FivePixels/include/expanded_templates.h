/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    expanded_templates.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Class template expansions.
 */

#ifndef MSU_CSC232_EXPANDED_TEMPLATES_CPP__
#define MSU_CSC232_EXPANDED_TEMPLATES_CPP__

#include "node.cpp"
#include "linked_list.cpp"

/** Declare any template instantiations used in any targets here */

template
class Node<std::string>;

template
class List<std::string>;

template
class LinkedList<std::string>;

#endif //MSU_CSC232_EXPANDED_TEMPLATES_CPP__
