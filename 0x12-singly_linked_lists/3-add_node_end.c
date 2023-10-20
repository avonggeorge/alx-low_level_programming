#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the pointer head node
 * @str: char str pointer
 * Return: newernde
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newernde = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (newernde == NULL)
	{
		return (NULL);
	}
	newernde->str = strdup(str);
	newernde->next = NULL;
	if (*head == NULL)
	{
		*head = newernde;
	}
	else
	{
		for (i = 0; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = newernde;
	}
	return (newernde);
}
