#include "lists.h"

/**
 * print_dlistint - Prints all the elements of an int list
 *
 * @h: The list being printed
 *
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	uint16_t i = 0;
	const dlistint_t* this = h;

	if (!h)
		return (-1);

	for (; this; i++)
	{
		printf("%d\n", h->n);
		this = this->next;

	}

	return (i);
}


#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
