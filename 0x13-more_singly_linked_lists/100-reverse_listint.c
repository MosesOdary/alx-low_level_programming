#include "lists.h"

/**
* reverse_listint - reverse a list
*
* @head: list head
*
* Return: pointer to the head of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *rev;

	current = NULL;
	rev = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = current;
	}

	*head = rev;
	return (*head);
}
