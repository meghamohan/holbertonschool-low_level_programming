# 0x1B. C - Makefiles
Description
Below are the takeaways from this project:
* what a Makefile is and how to use the 'make' command
* when, why and how to use Makefiles
* what the rules are and how to set and use them
* what explicit and implicit rules are
* what the most common / useful rules are
* what variables are and how to set and use them

## Learn from
* Makefile: https://www.google.com/search?q=makefile

## File Descriptions
- `0-Makefile`: uses 'all' rule to compile relevant files and build executable
- `1-Makefile`: uses 'all' rule and the variables CC (gcc) and SRC (all .c files)
- `2-Makefile`: uses 'all' rule and the variables CC, SRC, OBJ (.o files) and NAME (name of executable)
- `3-Makefile`: uses rules 'all', 'clean' (deletes EMACS temp and executable files), 
'oclean' (deletes object files) and 'fclean' (deletes EMACS temp files, executable and object files)  and uses the variables CC, SRC, OBJ, NAME, RM (program to delete files) and re (forces recompilation of all source files)
- `4-Makefile`: uses rules 'all', 'clean', 'oclean', 'fclean' and 're' and uses the variables CC, SRC, OBJ, NAME, RM and CFLAGS (-Wall -Werror -Wextra -pedantic)
