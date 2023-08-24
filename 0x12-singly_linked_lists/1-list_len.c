#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: Points to the struct list
 * Return: Return the length of node
 */
size_t list_len(const list_t *h)
{
	int d;

	if (h == NULL)
		return (0);
	d = 1;
	while (h->next != NULL)
	{
		h = h->next;
		d++;
	}
	return (d);
}
