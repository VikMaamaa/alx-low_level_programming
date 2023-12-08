#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a
 * dlistint_t list
 *
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	temp = h;
	if (h == NULL)
		return (count);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
