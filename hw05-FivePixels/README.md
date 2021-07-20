# HW05 - Testing the Binary Tree Interface

This homework assignment is an adaptation of Programming Problem #1, Chapter 15.

## Background

The ADT binary tree has the following operations:

* Test whether a binary tree is empty
* Get the height of a binary tree
* Get the number of nodes in a binary tree
* Get the data in a binary tree's root
* Set the data in a binary tree's root
* Add the given data to a binary tree
* Remove all data from a binary tree
* Retrieve the specified data in a binary tree
* Test whether a binary tree contains specific data
* Traverse the nodes in a binary tree in 
    * preorder
    * inorder
    * postorder

An interface template for the ADT Binary Tree is given in [Listing 15-1](include/BinaryTreeInterface.h).

## Objective

Upon successful completion of this assignment, the student shall have

* implemented a stubbed out implementation of the [`BinaryTreeInterface`](include/BinaryTreeInterface.h)
* developed a program that can be used to test an implementation of the [`BinaryTreeInterface`](include/BinaryTreeInterface.h)

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment link](https://classroom.github.com/a/cPR_Cwkt), clone this repository. Push all your changes to this `master` branch. GitHub Classroom automatically creates a _pull request_ that seeks to merge the changes in your `master` branch into your `feedback` branch.

## Tasks

There are essentially two tasks in this assignment:

1. Implement a stubbed out version of the [`BinaryTreeInterface`](include/BinaryTreeInterface.h) named `BinaryTree`.
1. Develop a test program that can be used to test an implementation (e.g., the `BinaryTree`) of the [`BinaryTreeInterface`](include/BinaryTreeInterface.h).

Please note! In this assignment, you are only creating a _stubbed out_ implementation of the binary tree interface. As such, the tests you develop should not pass. That does not matter. What you want to focus on is the interface itself, namely the API and the contract it establishes with its clients. The interface is thoroughly commented and these comments serve as your inspiration for your testing.

### Part 1 - Stubbing Out and Implementation

In this part, you will create an implementation of the [`BinaryTreeInterface`](include/BinaryTreeInterface.h) named `BinaryTree`. 

1. Create a new header file in the `include` folder of this project named `BinaryTree.h`
1. Add a `#include "BinaryTree.h"` line to [csc232.h](include/csc232.h) file after the `#include "NotFoundException.h"` (e.g., on line 39). For good measure and coding style, make sure there's one blank line between your new entry and the closing of the macro guard (i.e., `#endif // MSU_CSC232_H__`)
1. Add header comments at the beginning of the file in a manner consistent with what you find in [csc232.h](include/csc232.h). Don't just copy and paste... update the comments as needed.
1. Declare the `BinaryTree` class in your newly created `BinaryTree.h` header file, making sure to `#include "BinaryTreeInterface.h"` and implementing that interface accordingly. All inherited methods should be marked as `override` as appropriate. Also make sure to thoroughly comment your methods using javadoc-style Doxygen comments as this will affect the coding style element of your final grade.
1. Commit your changes (directly on the `master` branch) when you have finished with the coding of the `BinaryTree.h` header file with an appropriate commit message.
1. Create a new source file in the `src` folder of this project named.
1. Add header comments at the beginning of the file in a manner consistent with what you find in [csc232.h](include/csc232.h). Don't just copy and paste... update the comments as needed.
1. Add a `#include "BinaryTree.h"` to your source file.
1. Implement _stubs_ for all your `BinaryTree` operations: 
    * methods that return a `bool` should just return `false`; 
    * methods that return an `int` should just return 0; 
    * method that return an `ItemType` should just return `ItemType{}`.
    * `void` methods are just left blank
1. Commit your changes (directly on the `master` branch) when you have finished with the coding of the `BinaryTree.cpp` source file with an appropriate commit message.

### Part 2 - Testing An Implementation

Modify [main.cpp](src/main.cpp) in a manner that shows how you would test your implementation of the `BinaryInterface`. For example, you would expect a newly created instance of the `BinaryTree` to be empty; this could be tested as follows:

```c++
BinaryTreeInterface * binaryTree = new BinaryTree{};
std::cout << "Just created a new binary tree. Is it empty? ";
std::cout << (binaryTree->isEmpty() ? "Yes" : "No") << " (it should say Yes)" << std::endl;
```

Commit your changes (directly on the `master` branch) when you have finished with modifying the [`main.cpp`](src/main.cpp) source file with an appropriate commit message. Even better, make a commit after each test you have devised.

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted.

### Due Date

Your Teams submission is due by 11:59 PM, Saturday, November 28, 2020.

### Grading Rubric

This assignment is worth **5 points**.

Criteria          | Exceeds Expectations        | Meets Expectations             | Below Expectations | Failure                                                 |
------------------|-----------------------------|--------------------------------|--------------------|---------------------------------------------------------|
Pull Request (20%)| Submitted early, correct url| Submitted on-time; correct url | Incorrect URL            | No pull request was created or submitted          |
Code Style (20%)  | Exemplary code style        | Consistent, modern coding style    | Inconsistent coding style| No style whatsoever or no code changes present|
Correctness^ (80%)| All unit tests pass         | At least 80% of the unit tests pass| At least 60% of the unit tests pass| Less than 50% of the unit tests pass|

In this assignment, "Correctness" is the degree to which you have created a program that fully tests your stubbed out implementation. Again, the tests should not pass, but they should _cover_ the declared API.

### Late Penalty

* In the first 24 hour period following the due date, this lab will be penalized 1 point meaning the grading starts at 4 (out of 5 total possible) points.
* In the second 24 hour period following the due date, this lab will be penalized 2 points meaning the grading starts at 3 (out of 5 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 5 possible points.
