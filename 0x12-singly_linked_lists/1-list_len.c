#include "lists.h"
#include <stddef.h>

/**
 * list_len - function that returns the number of elements in a link list
 * @h: pointer to node
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int i, count = 0;

	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}

