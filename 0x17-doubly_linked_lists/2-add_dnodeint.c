#include "lists.h"


/**
 * add_dnodeint - add new node at list head
 *
 * @head: pointer to the list head
 * @n: integer to be added to the list
 *
 * Return: Address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}

