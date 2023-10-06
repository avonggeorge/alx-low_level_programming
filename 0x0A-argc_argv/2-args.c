#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char arguments contained the command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
