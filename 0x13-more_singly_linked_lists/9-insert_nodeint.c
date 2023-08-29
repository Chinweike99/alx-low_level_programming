#include "lists.h"
listint_t create_node(int n);
/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: Pointer to the first node
 * @idx: Index of the given nodes
 * @n: int n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode;
	listint_t *my_temp;

	my_temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (x = 0; my_temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = my_temp->next;
			my_temp->next = newnode;
			return (newnode);
		}
		else
			my_temp = my_temp->next;
	}
	return (NULL);
}
