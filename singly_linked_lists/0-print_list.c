#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the
 * elements of a list_t list
 * @h: pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
	}

	return (count);
}
