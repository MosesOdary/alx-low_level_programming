#include "lists.h"

/**
* pop_listint - removes head of a list
*
* @head: list to modify
*
* Return: data popped from the list
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int32_t popValue;

	if (!(*head))
		return (0);

	temp = *head;

	popValue = temp->n;

	*head = temp->next;
	free(temp);

	return (popValue);
}
