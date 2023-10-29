#include <stdio.h>

/**
 * main - display alphabet reverse and lowercase
 * Return: return 0 and exit the program
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
