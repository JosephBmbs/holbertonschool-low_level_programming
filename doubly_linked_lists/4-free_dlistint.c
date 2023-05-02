#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - freed a linked list
 * @head: linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *l;

	while (head)
	{
		l = head;
		head = head->next;
		free(l);
	}
	free(head);
}
