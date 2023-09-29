#include "main.h"

/**
 * sqrt_find - Checks for the square root of given number first
 * @g: the root to check through
 * @h: number to find sqrt of
 *
 * Return: The sqrt of h or -1 if number does not have natural sqrt
 */

int sqrt_find(int g, int h)
{
	if (g * g == h)
		return (g);
	if (g * g > h)
		return (-1);
	return (sqrt_find(g + 1, h));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1(if not natural square root)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
