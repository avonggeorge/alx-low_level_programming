#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: type int argument
 * @argv: tpe char, an array of size argc
 * Return: If the program receives two arguments, return 0.
 *         If the program does not receive two arguments return 1.
 */

int main(int argc, char *argv[])
{
	int i, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = n1 * n2;

	printf("%d\n", i);

	return (0);
}
