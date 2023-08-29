#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @listint_t: The list pointed to
 * @h: head pointer to the first node
 * Return: return number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t v;

	if (h == NULL)
		return (0);
	v = 0;
	while (h != NULL)
	{
		h = h->next;
		v++;
	}
	return (v);
}
