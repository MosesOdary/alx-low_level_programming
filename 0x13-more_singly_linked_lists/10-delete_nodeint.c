#include "lists.h"


/**
* delete_nodeint_at_index - deletes node at index
*
* @head: list
* @index: index of node to delete
*
* Return: 1
*/

void pop_list(listint_t **head);

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode, *temp;
	uint32_t i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		pop_list(head);
		return (1);
	}

	else
	{
		temp = *head;
		while (temp && i < (index - 1))
		{
			temp = temp->next;
			i++;
		}

		if (!temp || (!(temp->next) && i != 0))
			return (-1);

		deleteNode = temp->next;
		temp->next = deleteNode->next;
		free(deleteNode);

		return (1);
	}

	return (-1);
}

/**
* pop_list - deletes list head
*
* @head: list
*/

void pop_list(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
		return;

	temp = *head;
	*head = temp->next;
	free(temp);
}
