#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @index: Index of the nth node to be returned
 * @head: Pointer to the first node
 * Return: Return Null if niode does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
