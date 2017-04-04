# C - File I/O
## Description
This repository contains problems related to C File I/O operations
## Project Requirements
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
Don't forget to push your header file
All your header files should be include guarded
Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
Allowed syscalls: read, write, open, close
## File Description
holberton.h - contains prototype of all the functions
_putchar.c - writes a character to stdout
0-read_textfile.c - reads a text file and print it to the POSIX standard output
1-create_file.c - a function that creates a file
2-append_text_to_file.c - appends a text at the end of a file
3-cp.c - program that copies the content of a file to another file
100-elf_header.c - program that displays the information contained in the ELF header at the start of an ELF file
