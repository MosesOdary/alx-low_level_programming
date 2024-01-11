#include "lists.h"



/**
 *  sum_dlistint - return the sum of all the data in a list.
 *
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *this;

	for (this = head; this != NULL; this = this->next)
	{
		sum += this->n;
	}

	return (sum);
}

