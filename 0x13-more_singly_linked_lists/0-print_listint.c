#include "lists.h"

/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @listint_t: contains element
 * @h: head pointer to the list
 * Return: Return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t v;

	if (h == NULL)
		return (0);
	v = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	v++;
	return (v);
}
