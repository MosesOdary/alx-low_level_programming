#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node inside the list.
*
* @head: list
* @index: index to look for
*
* Return: nth node inside list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	uint32_t i = 0;

	if (!head && !index)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
