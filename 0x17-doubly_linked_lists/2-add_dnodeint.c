#include "lists.h"
/*
 * add_dnodeint - a function that adds a new
 * node at the beginning of a list
 * @n: Value of the elements in the list
 * Return: the address of the new element on Success,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	newnode->next = h;
	if (h != NULL)
		h->prev = newnode;
	*head = newnode;
	return (newnode);
}
