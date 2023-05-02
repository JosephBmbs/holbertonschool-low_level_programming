#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
    		(*head)->prev = NULL;
		free(current);
    	return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i == index && current != NULL)
	{
		temp = current;
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(temp);
		return (1);
		}

	return (-1);
}
