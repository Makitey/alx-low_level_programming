# 0x17. C - Doubly Linked Lists

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without using external resources:

### General

- What is a doubly linked list
- How to use doubly linked lists
- Understanding and implementing various operations (deletion, insertion, etc.) with doubly linked lists
- Starting to look for the right source of information without too much help

### Copyright - Plagiarism

- You are responsible for creating your solutions to meet the learning objectives.
- Copying and pasting someone else’s work is not allowed.
- Publishing any content of this project is prohibited.
- Any form of plagiarism will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf, and exit
- The prototypes of all your functions should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

### Data Structure

Please use this data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

