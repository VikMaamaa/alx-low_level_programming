#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 *
 * @head: pointer to a pointer, points to the address holding the first node
 * @n: the element that will be added to the node that will be added at
 * th beginning of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

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
		temp = new_node;
		temp->next = *head;
		(*head)->prev = temp;

		*head = temp;
		return (*head);
	}
	return (NULL);
}
