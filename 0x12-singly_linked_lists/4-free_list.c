#include "lists.h"

/**
 * free_list - free a list
 *
 * @head: The list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tempListPtr;

	while (head)
	{
		tempListPtr = head->next;
		free(head->str);
		free(head);
		head = tempListPtr;
	}
}
