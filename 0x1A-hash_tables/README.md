# 0x1A. C - Hash Tables

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without the help of Google:

### General
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work, and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- Advantages and drawbacks of using hash tables
- Most common use cases of hash tables

### Copyright - Plagiarism
- You are responsible for creating your solutions to meet the learning objectives.
- Copying and pasting someone else’s work is strictly forbidden.
- Publishing any content of this project is prohibited.
- Plagiarism will result in removal from the program.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the folder is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables
- No more than 5 functions per file
- Allowed to use the C standard library
- Prototypes of all functions in the header file hash_tables.h
- Don't forget to push your header file
- All header files should be include guarded

### Data Structures
Please use these data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

