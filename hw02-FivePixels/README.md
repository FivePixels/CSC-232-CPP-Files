# HW02 - Recursion and Iteration

Recursion and iteration are two problem-solving techniques that allow programs to repeat some set of instructions.

## Background

Recursion essentially breaks down a problem into smaller versions of the same problem until one reaches a "stopping" point known as the base case. In C++, recursion is realized by a function calling itself, albeit on a smaller and smaller scale with each invocation.

Iteration is often used as an alternative to recursion. An iterative solution involves looping constructs.

Anything that can be solved recursively can be solved iteratively and vice versa. Which approach one uses depends on a number of factors, most of which, is readability or comprehension.

## Objective

Upon successful completion of this homework assignment, the student will have gained experience solving problems recursively and iteratively. Furthermore, the student will gain experience in analyzing algorithms. Finally, the student will have gained further experience in working with git and creating pull requests on GitHub.

## Getting Started

After accepting this assignment with the provided [GitHub Classroom Assignment link](https://classroom.github.com/a/LNfRpR0P), clone this repository. Push all your changes to the `master` branch. GitHub Classroom automatically creates a _pull request_ that seeks to merge the changes in your `master` branch into a `feedback` branch (which is automatically created for you as well). **NOTE**: This is a slightly different protocol than normal. It's intended to simplify your experience with GitHub.

## Tasks

The first thing you should do is familiarize yourself with the layout of the project. There are several files and directories, as shown below:

```bash
├── config
│   ├── CMakeLists.txt.in
│   └── Doxyfile.in
├── include
│   ├── csc232.h
│   └── expanded_templates.h
│   ├── hw02.h
├── resource
│   ├── 19d.txt
│   ├── 19e.txt
│   ├── csc232_clion_cpp_code_style.xml
│   ├── demoData.txt
│   ├── mainData.txt
│   └── testData.txt
├── src
│   ├── demo.cpp
│   └── main.cpp
└── test
    └── google_test_runner.cpp

```

Notice all the source files you will work with are located in the `src` folder. Unit tests are located in the `test` folder. DO NOT modify any of these files. Doing so will result in a failing grade (i.e., 0 out of 5 points) for this assignment.

All of your work will involve the files in the `include` folder; specifically the `hw02.h` file. The `main.cpp` and `demo.cpp` files (located in the `src` folder) are merely playgrounds and do not contribute to your final grade on this assignment. NOTE: Having said that, it is required that these files compile. So if you have made changes to these files that prevent them from compiling, it _could_ affect your grade on this assignment.

Locate the `TODO` comments in the `include/hw02.h` file. These comments provide direction on what needs to be done.

These functions are the functions called for in Exercise 19 found on page 92 of Chapter 2 in Carrano & Henry.

Note: Questions 19d and 19e are to be answered by modifying the files `resource/19d.txt` and `resource/19e.txt` respectively. Please note the format of these files:

The format of `resource/19d.txt` is essentially the data that would be found in the following table:

|      | 3^32 | 3^19 |
|------|------|------|
|Power1|   0  |   0  |
|Power2|   0  |   0  |
|Power3|   0  |   0  |

Specifically, the file contains the following (and nothing more -- or less):

```text
0  0
0  0
0  0
```

**Figure 1: File format for Question 19d.**

Likewise, the format of `resource/19e.txt` is essentially the data that would be found in the following table:

|      | 3^32 | 3^19 |
|------|------|------|
|Power2|   0  |   0  |
|Power3|   0  |   0  |

Specifically, the file contains the following (and nothing more -- or less):

```text
0  0
0  0
```

**Figure 2: File format for Question 19e.**

Clearly the data are wrong in the supplied files; you must edit the values accordingly, ensuring to maintain the same tabular nature originally provided.

## Submission Details

When you have made your last commit and pushed all your changes to GitHub on your `develop` branch, create a new pull request that seeks to merge the changes in your `develop` branch into your `master` branch.

Once you have created your pull request, copy the URL of your homework repository and paste into a Link Resource submission on Microsoft Teams. It is this final step that is the actual act of submitting your assignment and the timestamp of which is used to assess any late penalties, if necessary.

### Due Date

This homework assignment is due Friday, 30 October 2020 by 11:59:59 PM. _Any changes to your pull request made after that time force the late penalty policy_.

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
