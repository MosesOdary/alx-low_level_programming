#include "lists.h"

/**
* add_nodeint_end - adds element at a list's tail
*
* @head: the list
* @n: elemente to be added
*
* Return: new element position
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (!temp)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
