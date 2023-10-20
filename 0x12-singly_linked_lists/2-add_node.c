#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - function that adds a new node at the beginning of a list file
 * @head: pointer to the pointer head node
 * @str: char str pointer
 * Return: newernode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newernode = malloc(sizeof(list_t));

	if (newernode == NULL)
	{
		return (NULL);
	}
	newernode->str = strdup(str);
	newernode->next = *head;
	*head = newernode;
	return (newernode);
}
