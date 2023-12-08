#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list
 *
 * @head: pointer to the first node of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the node, NULL if the node does ot exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (temp);
}
