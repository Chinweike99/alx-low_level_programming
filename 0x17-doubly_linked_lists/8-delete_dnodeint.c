#include "lists.h"
/*
 * delete_dnodeint_at_index - a function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: The head of the list
 * @index: Index of the created node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	dlistint_t *temp;
	unsigned int x;

	cur = *head;
	if (cur != NULL)
		while (cur->prev != NULL)
			cur = cur->prev;
	x = 0;
	while (cur != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = cur->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = cur->next;
				if (cur->next != NULL)
					cur->next->prev = temp;
			}
			free(cur);
			return (1);
		}
		temp = cur;
		cur = cur->next;
		x++;
	}
	return (-1);
}
