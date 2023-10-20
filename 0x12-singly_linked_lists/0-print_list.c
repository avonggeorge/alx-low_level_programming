#include <stdio.h>
#include <string.H>
#include "list.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the node.
 * Return: count
 */
size_t print_list(const list_t *h)
{
    int i, count = 0;
    
    for (i = 0; h != NULL; i++)
        {
            if (h->str == NULL)
            {
                printf("[0] (nil)\n");
            }
            else
            {
                printf("[%d] %s\n",strlen(h->str), h->str);
                count++;
            }
            h = h->next;
        }
    return (count);
}

