# SINGLY LINKED LISTS
## DESCRIPTION
This project contains programs using linked lists
### Requirements
-All your files will be compiled on Ubuntu 14.04 LTS
-Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-You are not allowed to use global variables
No more than 5 functions per file
-The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
-You are allowed to use _putchar
-The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
-Below is the data srtucture for this project
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## File Descriptions
- `lists.h`: Header file containing prototypes of functions and preprocessor directives
- `0-print_list.c`: function that prints all the elements of a list_t list
- `1-list_len.c`: function that returns the number of elements in a linked list_t list
- `2-add_node.c`: function that adds a new node at the beginning of a list_t list
- `3-add_node_end.c`: function that adds a new node at the end of a list_t list.
- `4-free_list.c`: function that free a list_t list
