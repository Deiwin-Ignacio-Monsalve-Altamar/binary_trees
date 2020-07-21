# 0x1D. C - Binary trees

## Description

### Big O Notaiton
This is the last project with the languae C in the second quarter of Holberton about Binary trees, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.


## Environment

Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4

## Instructions

### Resources:books:
Read or watch:

* [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

### Learning Objectives:bulb:
What you should learn from this project:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

### Intructions basics

-   Compiling the program: `gcc -Wall -Werror -Wextra -pedantic *.c -o <namefile>`

## Example
```
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full
alex@/tmp/binary_trees$ ./15-full
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 full: 0
Is 12 full: 1
Is 128 full: 0
```

## Respository Contenst

Binary trees Files:

| File | Description
| ------------- |:-------------:|


 ## Requirements project

-  Allowed editors: vi, vim, emacs
-   All your files will be compiled on Ubuntu 14.04 LTS
-   CompilingYour programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
-   All your files should end with a new line
-   A README.md file, at the root of the folder of the project, is mandatory
-   AllYour code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-   AllYou are not allowed to use global variables
-   AllNo more than 5 functions per file
-   Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
-   In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called sort.h
-   Don’t forget to push your header file
-   UnlessAll your header files should be include guarded
-   AllNo list/array does not need to be sorted if its size is less than 2.

## Tasks

### 0. Bubble sort
-   Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

-   CompilingPrototype: void bubble_sort(int *array, size_t size);
-   You’re expected to print the array after each time you swap two elements (See example below)
-   Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

### 


## Autors

-   ***Andres Callejas G - https://github.com/danielaloperahernandez***

-   ***Deiwin Ignacio Monsalve Altamar - <https://github.com/Deiwin-Ignacio-Monsalve-Altamar>***
