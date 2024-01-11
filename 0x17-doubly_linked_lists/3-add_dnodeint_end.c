#include "lists.h"


/**
 * add_dnodeint_end - add node at the end of the list
 *
 * @head: The list to add to
 * @n: The element to add
 *
 * Return: pointer to the added list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (((*head)->next) != NULL)
	{
		*head = (*head)->next;
	}

	(*head)->next = newNode;
	newNode->prev = *head;

	return (newNode);

}

