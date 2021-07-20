# LAB08 - Working with Linked Lists

In this lab you will implement a couple of methods on the `LinkedList` ADT.

## Background

The link-based implementation of the `List` interface is a common structure used in myriad applications. Because the `LinkedList` has a data member that is a pointer, care must be taken to provide proper definitions for the Big-Five. In this lab, you will work on implementing one of the Big-Five methods (the copy constructor) as well as another method (`replace`) that was described in your textbook (but not defined).
All other methods of the `LinkedList` have been properly implemented for you in this starter code.

## Objective

* Implement the copy constructor
* Implement the replace method

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment Link](https://classroom.github.com/a/HMF8M13s), clone the repository and create a `develop` branch within which to do your work.

## Tasks

As stated in the objectives, you have two methods to implement. These methods (which contain `TODO` comments) are found in [linked_list.cpp](src/linked_list.cpp).

### Part 1

Implement the copy constructor; use the LinkedBag as inspiration for your solution as the technique of creating a deep copy is essentially the same.

### Part 2

Implement the replace method.

## Submission Details

As usual, prior to submitting your assignment to Teams, be sure that you have committed and pushed your final changes to GitHub. Once your final changes have been pushed, be sure to create a pull request that seeks to merge the changes in your `develop` branch into the `master` branch. Once the pull request is prepared and ready for review, submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) as a Link Resource in Teams. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted, _not_ the date/time you create your pull request. **No exceptions will be granted for this oversight**.

### Due Date

Your Teams submission is due by 11:59 PM, Friday October 23, 2020.

### Grading Rubric

This assignment is worth **3 points**.

Criteria          | Exceeds Expectations        | Meets Expectations             | Below Expectations | Failure                                                 |
------------------|-----------------------------|--------------------------------|--------------------|---------------------------------------------------------|
Pull Request (20%)| Submitted early, correct url| Submitted on-time; correct url | Incorrect URL            | No pull request was created or submitted          |
Code Style (20%)  | Exemplary code style        | Consistent, modern coding style    | Inconsistent coding style| No style whatsoever or no code changes present|
Correctness^ (80%)| All unit tests pass         | At least 80% of the unit tests pass| At least 60% of the unit tests pass| Less than 50% of the unit tests pass|

^ _The Google Test unit runner will calculate the correctness points based purely on the fraction of tests passed_.

### Late Penalty

* In the first 24 hour period following the due date, this lab will be penalized 0.6 point meaning the grading starts at 2.4 (out of 3 total possible) points.
* In the second 24 hour period following the due date, this lab will be penalized 1.2 points meaning the grading starts at 1.8 (out of 3 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 3 possible points.
