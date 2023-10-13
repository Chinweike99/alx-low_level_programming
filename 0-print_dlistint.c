#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements
 * of a list
 * @h: The head of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
