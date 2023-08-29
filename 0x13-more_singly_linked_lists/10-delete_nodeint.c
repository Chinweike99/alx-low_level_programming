#include "lists.h"
/**
 * int delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: Pointer to first node
 * @index: takes index of nodes
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *temp;
	listint_t *my_node;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	k = 0;
	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}
	my_node = temp->next;
	temp->next = my_node->next;
	free(my_node);

	return (1);
}
