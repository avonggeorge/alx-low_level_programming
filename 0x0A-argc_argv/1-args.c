#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: type int argument
 * @argv: type char argument contained in command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
