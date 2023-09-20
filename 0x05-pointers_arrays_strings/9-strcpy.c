#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copies the string pointed to by src as well as terminating null byte(\0) to the buffer pointed to by @dest
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
