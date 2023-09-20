#ifndef MAIN_H
#define MAIN_H

/** 
 * #ifndef - stands for "if not defined," it conditionally include or exclude code in the program based on whether a particular macro or symbol has been defined earlier in the code.
 * 
 * #define - create's header guards to prevent multiple inclusion of the same file.
 *
 * This header file contains declarations for prototype functions that is given in the pointers_array_strings task.
 *
 * More like a self generated liberary vis-a-vis the given task given
 
 * The tasks defines  the functions
 *
 * #endif - is a preprocessor directive used to mark the end of a conditional compilation block that was started with #ifdef, #ifndef, #if, or #elif.
 */



void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
int _putchar(char c);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif
