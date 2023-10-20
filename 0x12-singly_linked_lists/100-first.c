#include <stdio.h> 

void investor (void) __attribute__ ((constructor)); 
/**
 * investor - prints a statement before the main function
 * Return: returns (0)
 */
void investor (void) 
{ 
    printf ("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
