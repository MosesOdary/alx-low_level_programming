#include "lists.h"


/**
 * get_dnodeint_at_index - Return the nth node in list.
 *
 * @head: pointer to head of list
 * @index: index of the node
 *
 * Return: index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;


	while (current)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}

