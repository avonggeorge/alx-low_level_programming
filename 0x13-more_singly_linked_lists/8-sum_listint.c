#include "lists.h"

/**
 * sum_listint - finds the sum of all the data(n) of a linked list listint_t
 * @head: pointer to the head node
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
