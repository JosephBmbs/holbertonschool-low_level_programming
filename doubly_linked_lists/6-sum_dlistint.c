#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data of a dlistint_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data of the list.
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
