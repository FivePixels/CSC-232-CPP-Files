# HW03 - Resizable Array Stacks

One of the downsides to the array implementation of a stack is the fixed-size nature of an array. However, arrays _can be_ resized. In this homework assignment, the student applies techniques for resizing arrays to remove the fixed-size limitation of an `ArrayStack`.

## Background

_The following is taken from C++ Interlude 2, pages 130-132_.

### Dynamic Allocation of Arrays

When you declare an array in C++ by using statements such as 

```c++
const int MAX_SIZE = 50;
double myArray[MAX_SIZE];
```

the compiler reserves a specific number -- `MAX_SIZE`, in this case -- of memory cells for the array. This memory allocation occurs before your program executes, so it is not possible to wait until execution to give `MAX_SIZE` a value. We have already discussed the problem this fixed-size data structure causes when your program has more than `MAX_SIZE` items to place into the array.

You've learned how to use the `new` operator to allocate memory dynamically--that is, during program execution. Although Section C2.3 showed you how to allocate memory for a single variable or object, you actually can allocate memory for many at one time. If you write

```c++
int arraySize = 50;
double* anArray = new double[arraySize];
```

the pointer variable `anArray` will point to the first item in an array of 50 items. Unlike `MAX_SIZE`, `arraySize` can change during program execution. You can assign a value to `arraySize` at execution time and thus determine how large you array is. That is good, but how do you use this array?

Regardless of how you allocate an array--statically, as in the first example, or dynamically, as in the second--you can use an index and the familiararray notation to access its elements. For example, `anArray[0]` and `anArray[1]` are the first two items in the array `anArray`.

When you allocate an array dynamically, you need to return its memory cells to the system when you no longer need them. As described earlier in the semester, you use the `delete` operator to perform this task. To deallocate the array `anArray`, you write

```c++
delete [ ] anArray;
```

Note that you include brackets when apply `delete` to an array.

Now suppose that your program uses all of the array `anArray`, despite having chosen its size during execution. You can allocate a new and larger array, copy the old array into the new array, and finally deallocate the old array. Doubling the size of the array each time it becomes full is a reasonable approach. The following statements double the size of `anArray`:

```c++
double* oldArray = anArray; // copy pointer to array
anArray = new double[2 * arraySize]; // double array size
for (int index = 0; index < arraySize; ++index)
{
    // copy the old (original) array into the newly 
    // allocated block that is double the size of the 
    // originally allocated block
    anArray[index] = oldArray[index];
}
delete [ ] oldArray;
```

Subsequent discussions will refer to both statically allocated and dynamically allocated arrays. We will refer to dynamically allocated arrays as **resizable**.

## Objectives

Upon successful completion of this homework assignment, the student will 

* learn how to dynamically allocate arrays
* remove a limitation of the `ArrayStack` through the use of a resizable array
* become aware of the "pointer-nature" of an array

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment link](https://classroom.github.com/a/ycmvQDAR), clone this repository. Push all your changes to this `master` branch. GitHub Classroom automatically creates a _pull request_ that seeks to merge the changes in your `master` branch into your `feedback` branch.

## Tasks

Write an implementation of the ADT stack that uses a resizable array to represent the stack items. Anytime the stack becomes full, double the size of the array. In your implementation, which is to be named `ResizableArrayStack`, maintain the stack's bottom enry at the beginning of the array.

### Part 1 - Declare the `ResizableArrayStack` class

1. In the [include](include) folder, create a header file named `ResizableArrayStack.h`.
1. Add a `#include "ResizableArrayStack.h"` entry at the bottom of [include/cscs232.h](include/csc232.h) (under the `TODO` comment).
1. Add header comments similar to what you find in [include/csc232.h](include/csc232.h).
1. Create a macro guard block which will encapsulate your `ResizableArrayStack` class declaration.
   ```c++
   #ifndef RESIZABLE_ARRAY_STACK_H__
   #define RESIZABLE_ARRAY_STACK_H__

   #endif // RESIZABLE_ARRAY_STACK_H__
   ```
1. Within your macro guard block, `#include "StackInterface.h`.
1. Write your `ResizableArrayStack` class declaration such that it implements the `StackInterface`. Be sure to declare all the methods you're inheriting from the `StackInterface` as an `override` and add any and all appropriate Doxygen comments. Not writing comments will negatively affect the code style element of your grade.
1. Commit your changes (directly on your master branch).

### Part 2 - Define the `ResizableArrayStack` class

1. In the [src](src) folder, create an implementation file named `ResizableArrayStack.cpp`.
1. Add header comments, again using the format prescribed in [include/cscs232.h](include/csc232.h).
1. After your header comments, `#include "ResizableArrayStack.h` and then go on to define all your methods. Most of these methods will be exactly the same as what you find for the `ArrayStack` class. However, certain methods will require that you resize the underlying array if and when necessary.
1. Commit your changes as needed directly on your master branch.

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted.

### Due Date

Your Teams submission is due by 11:59 PM, Wednesday, November 18, 2020.

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
