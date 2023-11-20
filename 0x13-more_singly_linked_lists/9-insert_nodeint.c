#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at position idx
*
* @head: list
* @idx: position to insert
* @n: element to insert
*
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	uint32_t i = 0;

	temp = *head;

	if (!head && !idx)
		return (NULL);

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}

	while (i < (idx - 1) && temp)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;

	temp->next = new;

	return (new);
}

/**
* add_nodeint - adds an element at the beginning
*
* @head: pointer to list
* @n:element to be added
*
* Return: new element address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
