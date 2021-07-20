# HW04 - Double-Ended Queues

In this homework assignment we devlop an ADT similar to the Queue.

## Background

_This assignment is a variation of Exercise 8 found in Chapter 13 - Queues and Priority Queues_.

Consider a slight variation of the ADT queue. In this variation, new items can be added to and removed from either end. This ADT is commonly called a **double-ended queue**, or **deque**.

## Objectives

Upon successful completion of this assignment, the student 

* has gained further experience developing ADTs to specifications
* is comfortable specifying the details of methods using javadoc-style Doxygen comments
* will have developed a deque

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment link](https://classroom.github.com/a/DrQ2o0Aa), clone this repository. Push all your changes to this `master` branch. GitHub Classroom automatically creates a _pull request_ that seeks to merge the changes in your `master` branch into your `feedback` branch.

## Tasks

There are essentially two tasks in this assignment. Firstly, you will _specify_ the ADT `Deque` interface. Secondly, you will implement the `Deque` interface in a class named `LinkedDeque`. This implementation will use a link-chain of nodes to hold its data.

### Part 1 - Specifying the `Deque` Interface

1. In the [include](include) folder, create a header file named `Deque.h`.
1. Add a `#include "Deque.h"` entry at the bottom of [include/cscs232.h](include/csc232.h) (under the `TODO` comment).
1. Add header comments similar to what you find in [include/csc232.h](include/csc232.h) to your newly created `Deque.h` header file.
1. Create a macro guard block which will encapsulate your `Deque` class declaration.
   ```c++
   #ifndef DEQUE_H__
   #define DEQUE_H__

   #endif // DEQUE_H__
   ```
1. Declare the C++ template interface (`Deque`). Specify each (pure virtual) method of the deque by stating the method's purpose, by describing its parameters; and by writing preconditions, and postconditions using javadoc-style Doxygen comments. Not writing comments will negatively affect the code style element of your grade. For example:
   ```c++
   /**
    * @brief give a brief description of this interface
    * @tparam T describe the template parameter
    */
   template <typename T>
   class WhatEver {
   public:
       /**
        * @brief state the method's purpose
        * @pre state any preconditions, including "None" if applicable
        * @post state the postconditions
        * @param someParameter describe this parameter
        * @return tell us what is returned
        */
       virtual T calculateSomething(const T& someParameter) = 0;
   };
   ```
    
1. Commit your changes (directly on your master branch).

### Part  2 - Implementing the `Deque` Interface

1. In the [include](include) folder, create a header file named `LinkedDeque.h`.
1. Add a `#include "LinkedDeque.h"` entry at the bottom of [include/cscs232.h](include/csc232.h) (under the `TODO` comment).
1. Add header comments similar to what you find in [include/csc232.h](include/csc232.h) to your newly created `LinkedDeque.h` header file.
1. Create a macro guard block which will encapsulate your `LinkedDeque` class declaration.
   ```c++
   #ifndef LINKED_DEQUE_H__
   #define LINKED_DEQUE_H__

   #endif // LINKED_DEQUE_H__
   ```
1. Within your macro guard block, `#include "Deque.h`.
1. Write your `LinkedDeque` class declaration such that it implements the `Deque` interface in a manner similar to the way the `LinkedBag` implements the `BagInterface`. Be sure to declare all the methods you're inheriting from the `Deque` as an `override` and add Doxygen comments as needed (for the inherited methods, you may simply have one annotation as shown below). Not writing comments will negatively affect the code style element of your grade.
   ```c++
   /**
    * @brief give a brief description of this interface
    * @tparam T describe the template parameter
    */
   template <typename T>
   class YouKnowIt : public WhatEver<T> {
   public:
       /**
        * @copyDoc WhatEver<T>::calculateSomething(const T&)
        */
       T calculateSomething(const T& someParameter) override;
   };
   ```
    
1. Commit your changes (directly on your master branch).
1. In the [src](src) folder, create an implementation file named `LinkedDeque.cpp`.
1. Add header comments similar to what you find in [include/csc232.h](include/csc232.h) to your newly created `LinkedDeque.cpp` implementation file.
1. Finally, write your `LinkedQueue` definition in the file named `LinkedQueue.cpp` placed in the [src/](src) folder.
1. Commit your changes (directly on your master branch).

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted.

### Due Date

Your Teams submission is due by 11:59 PM, November 21, 2020.

### Grading Rubric

This assignment is worth **5 points**.

Criteria          | Exceeds Expectations        | Meets Expectations             | Below Expectations | Failure                                                 |
------------------|-----------------------------|--------------------------------|--------------------|---------------------------------------------------------|
Pull Request (20%)| Submitted early, correct url| Submitted on-time; correct url | Incorrect URL            | No pull request was created or submitted          |
Code Style (20%)  | Exemplary code style        | Consistent, modern coding style    | Inconsistent coding style| No style whatsoever or no code changes present|
Correctness^ (80%)| All unit tests pass         | At least 80% of the unit tests pass| At least 60% of the unit tests pass| Less than 50% of the unit tests pass|

^ _The Google Test unit runner, if appropriate, will calculate the correctness points based purely on the fraction of tests passed_.

### Late Penalty

* In the first 24 hour period following the due date, this lab will be penalized 1 point meaning the grading starts at 4 (out of 5 total possible) points.
* In the second 24 hour period following the due date, this lab will be penalized 2 points meaning the grading starts at 3 (out of 5 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 5 possible points.
