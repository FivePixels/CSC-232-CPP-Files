/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    expanded_templates.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Class template expansions.
 */

#ifndef MSU_CSC232_EXPANDED_TEMPLATES_H__
#define MSU_CSC232_EXPANDED_TEMPLATES_H__

/* Include class template implementation files as needed */
#include "BinaryNode.cpp"
#include "BinaryTree.cpp"

template class BinaryNode<std::string>;
template class BinaryTree<std::string>;

#endif // MSU_CSC232_EXPANDED_TEMPLATES_H__
