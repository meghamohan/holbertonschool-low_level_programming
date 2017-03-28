# More singly linked lists
## Description
This project contains programs using linked lists
## Requirements:
- Code compiled using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic`
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `lists.h`
- Header files should be include guarded.
-
##  Data structure for this project
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## File Descriptions
- `lists.h`: Header file containing all function prototypes and structures
- `0-print_listint.c`: function that prints all the elements of a list
- `1-listint_len.c`: function that returns the number of elements in a linked list
- `2-add_nodeint.c`: function that adds a new node at the beginning of a linked list
- `3-add_nodeint_end.c`: function that adds a new node at the end of a linked list.
- `4-free_listint.c`: function that free a linked list
- `5-free_listint2.c`: unction that free a linked list
- `6-pop_listint.c`: function that deletes the head node of a linked list, and returns the head node's data (n)
- `7-get_nodeint.c` : function that returns the nth node of a linked list
- `9-insert_nodeint.c` : function that returns the sum of all the data (n) of a linked list.
- `10-delete_nodeint.c` : function that deletes the node at index index of a linked list.
