#include "lists.h"


/**
 * delete_dnodeint_at_index - Delete node from list at a given index.
 *
 * @head: A pointer to list
 * @index: The index of the node
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!(*head))
		return (-1);

	for (; index != 0; index--)
	{
		if (!(tmp))
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);

	return (1);
}

