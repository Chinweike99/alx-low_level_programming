#include "lists.h"
/**
 * print_list - function that prints all
 * the elements of a list_t list.
 * @h: A pointer to the list to be printed
 * Return: Return number of nodes on Success
 */
size_t print_list(const list_t *h)
{
	int d;

	if (h == NULL)
		return (0);
	d = 0;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	d++;
	printf("[%u] %s\n", h->len, h->str);
	return (d);
}
