#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 *
 * @head: pointer to a point, points to the address holding the first
 * node
 * @n: the element that will be added in the new node to add at the
 * end of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tp = NULL;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		tp = *head;

		while (tp->next != NULL)
			tp = tp->next;
		tp->next = new_node;
		new_node->prev = tp;

		return (new_node);
	}
	return (NULL);
}
