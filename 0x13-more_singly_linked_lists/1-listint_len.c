#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list listint_t
 * @h: pointer to the head of linked list
 *
 * Return: number of elements in a linked list listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
