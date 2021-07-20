# HW06 - Implementing the Binary Tree Interface

This homework assignment is a continuation of HW05.

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

* implemented the [`BinaryTreeInterface`](include/BinaryTreeInterface.h)

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment link](https://classroom.github.com/a/us2FEm_v), clone this repository. Push all your changes to this `master` branch. GitHub Classroom automatically creates a _pull request_ that seeks to merge the changes in your `master` branch into your `feedback` branch.

## Tasks

There are essentially one task in this assignment:

1. Using your text as a starting point, implement the `BinaryTreeInterface`. Many methods are completed for you in Chapter Chapter 16, Section 2: A Link-Based Implementation of the ADT Binary Tree.
1. As stated in Programming Problem 1 of Chapter 16, complete the implementation the class `BinaryTree`. (Yes, they refer to `BinaryNodeTree`; it was simply named `BinaryTree` in this and the last homework assignment.)
1. You should only be modifying 
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

Your Teams submission is due by 11:59 PM, Tuesday, December 8, 2020.

### Grading Rubric

This assignment is worth **5 points**.

Criteria          | Exceeds Expectations        | Meets Expectations             | Below Expectations | Failure                                                 |
------------------|-----------------------------|--------------------------------|--------------------|---------------------------------------------------------|
Pull Request (20%)| Submitted early, correct url| Submitted on-time; correct url | Incorrect URL            | No pull request was created or submitted          |
Code Style (20%)  | Exemplary code style        | Consistent, modern coding style    | Inconsistent coding style| No style whatsoever or no code changes present|
Correctness^ (80%)| All unit tests pass         | At least 80% of the unit tests pass| At least 60% of the unit tests pass| Less than 50% of the unit tests pass|

### Late Penalty

* In the first 24 hour period following the due date, this lab will be penalized 1 point meaning the grading starts at 4 (out of 5 total possible) points.
* In the second 24 hour period following the due date, this lab will be penalized 2 points meaning the grading starts at 3 (out of 5 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 5 possible points.
