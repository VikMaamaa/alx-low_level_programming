#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: pointer to the first node
 *
 * Return: Nothing (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
