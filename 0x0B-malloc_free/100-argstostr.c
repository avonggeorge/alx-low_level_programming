#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program and gives pointer.
 * @ac: number of argument passed to the command line
 * @av: the array containing commandline argumen
 * Return: the pointer to a new mymystring or NULL if failed.
 */

char *argstostr(int ac, char **av)

{
	char *mystr;
	int arg, subarg, i;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (subarg = 0; av[arg][subarg]; subarg++)
			size++;
	}

	mystr = malloc(sizeof(char) * size + 1);

	if (mystr == NULL)

	{
		return (NULL);
	}


	i = 0;

	for (arg = 0; arg < ac; arg++)

	{
		for (subarg = 0; av[arg][subarg]; subarg++)

		{
			mystr[i++] = av[arg][subarg];
		}

		mystr[i++] = '\n';
	}

	mystr[size] = '\0';

	return (mystr);
}

