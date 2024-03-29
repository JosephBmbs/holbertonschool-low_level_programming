#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of elements in the list_t list
 *
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
