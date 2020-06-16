# sorting_algorithms

> This directory contains all the tasks of the project "0x1B. C - Sorting algorithms & Big O" at [Holberton School](https://www.holbertonschool.com "Holberton School.")

![GitHub repo size](https://img.shields.io/github/repo-size/luismvargasg/sorting_algorithms?style=for-the-badge) ![GitHub last commit](https://img.shields.io/github/last-commit/luismvargasg/sorting_algorithms?style=for-the-badge) ![GitHub contributors](https://img.shields.io/github/contributors/luismvargasg/sorting_algorithms?style=for-the-badge) [![Luis Miguel Vargas](https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Ftwitter.com%2Fluismvargasg1)](https://twitter.com/luismvargasg1) [![Sandra Macías](https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Ftwitter.com%2Fpandoriana18)](https://twitter.com/pandoriana18)


## Table of Contents

- [sorting_algorithms](#sorting_algorithms)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Respository Files Description](#respository-files-description)
  - [Usage Examples](#usage-examples)
    - [1. Bubble Sort](#1-bubble-sort)
    - [2. Insertion sort](#2-insertion-sort)
    - [2. Selection sort](#2-selection-sort)
    - [3. Quick sort](#3-quick-sort)
  - [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Built With - Compilation](#built-with---compilation)
  - [AUTHORS](#authors)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Description

In computer science, a sorting algorithm is an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical order and lexicographical order. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists.

Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. In computer science, big O notation is used to classify algorithms according to how their run time or space requirements grow as the input size grows. In analytic number theory, big O notation is often used to express a bound on the difference between an arithmetical function and a better understood approximation; a famous example of such a difference is the remainder term in the prime number theorem.

Big O notation characterizes functions according to their growth rates: different functions with the same growth rate may be represented using the same O notation.

For more information about Big O please visit this awesome webpage [Big O Cheat Sheet](https://www.bigocheatsheet.com/) Made by [Eric Rowell](https://twitter.com/ericdrowell).


## Respository Files Description

| **File** | **Description** |
|----------|-----------------|
| [sort.h](./sort.h) | Header file containing the prototypes of the functions and the Data Structures. |
| [0. Bubble sort](./0-bubble_sort.c) | Function that sorts an array of integers in ascending order using the Bubble sort algorithm. |
| [1. Insertion sort](./1-insertion_sort_list.c) | Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. |
| [2. Selection sort ](./2-selection_sort.c) | Function that sorts an array of integers in ascending order using the Selection sort algorithm. |
| [3. Quick sort](./3-quick_sort.c) | Function that sorts an array of integers in ascending order using the Quick sort algorithm. |
| [4. Shell sort - Knuth Sequence](./100-shell_sort.c) | Function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence. |
| [main files](./) | All the main program files are included in order to properly test the sorting algorithms. |

## Usage Examples

Giving the next array configuration we are going to sort with different algorithms:
```
user@/tmp/sort$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```
### 1. Bubble Sort

```
user@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
user@/tmp/sort$ 
```

### 2. Insertion sort

```
user@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
user@/tmp/sort$
```
### 2. Selection sort

```
user@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
user@/tmp/sort$
```

### 3. Quick sort

```
user@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
user@/tmp/sort$
```

## Getting Started

Clone this repository to get all the files you need to run and test this sorting algorithms on your machine. Each function or sorting algorithm needed is in a single and a separete file, so you can connect and trace all the steps of the function and you can make your own changes and upgrades.

## Prerequisites

This program was made and tested using Ubuntu 14.04.3 LTS and compiled with gcc 4.8.4. We recommend you to test this interpreter under this conditions.

## Built With - Compilation

* Ubuntu 14.04.3 LTS Running on a Virtual Machine "Vagrant"
* gcc 4.8.4 Compiled with the flags: `-Wall -Werror -Wextra -pedantic`
* GNU Emacs 24.3.1


## AUTHORS

* **Luis Miguel Vargas** - [Github @luismvargasg](https://github.com/luismvargasg)
* **Sandra Macías** - [GitHub @s-macias](https://github.com/s-macias)

## License

Opensource project.

## Acknowledgments

* Project made at Holberton School - Colombia.