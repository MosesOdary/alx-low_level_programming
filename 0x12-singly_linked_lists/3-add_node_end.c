#include "lists.h"

/**
* add_node_end - adds element at the tail of a list
*
* @head: list to add the element
* @str: element to add to list
*
* Return: position of the added element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *tempPtr = *head;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!tempPtr)
	{
		*head = newNode;
		return (newNode);
	}
	while (tempPtr->next)
		tempPtr = tempPtr->next;

	tempPtr->next = newNode;

	return (newNode);
}
