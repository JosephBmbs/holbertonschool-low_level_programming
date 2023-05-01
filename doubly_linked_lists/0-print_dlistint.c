#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head node of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}

return (count);
}
