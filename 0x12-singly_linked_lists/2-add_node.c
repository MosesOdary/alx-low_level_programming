#include "lists.h"

/**
* add_node - Adds element to the head of a list
*
* @head: pointer to the head of the list
* @str: element to be added to the list
*
* Return: new element position else NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
