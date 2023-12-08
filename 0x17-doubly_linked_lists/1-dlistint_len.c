#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: the head pointer pointing to the first node
 *
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (elem_count);

	while (temp != NULL)
	{
		elem_count++;
		temp = temp->next;
	}

	return (elem_count);
}
