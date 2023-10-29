#include <stdio.h>

/**
 * main - displays all numbers from 0 to 9 using putchar
 * Return: return 0 and exit the program.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
