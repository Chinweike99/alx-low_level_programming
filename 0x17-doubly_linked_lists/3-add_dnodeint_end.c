#include "lists.h"
/*
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list.
 * @head: The head pointer
 * @n: The elements value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newnode;
	}
	else
		*head = newnode;

	newnode->next = h;
	return (newnode);
}
