#include "lists.h"

/**
* add_nodeint - adds an element at a list's head
*
* @head: pointer to list
* @n:element to be added
*
* Return: newNode element address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);


	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
