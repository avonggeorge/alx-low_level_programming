#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	int i;
	list_t *tempo = head;

	for (i = 0; head != NULL; i++)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
