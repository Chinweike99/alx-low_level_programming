#include "lists.h"
/*
 * dlistint_t *insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: The head of the list
 * @idx: The index of the new node
 * @n: The value of new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *newnode;
	unsigned int x;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}
	return (newnode);
}
