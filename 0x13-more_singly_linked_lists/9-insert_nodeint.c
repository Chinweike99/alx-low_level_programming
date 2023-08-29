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
	listint_t *temp;
	listint_t *prev;
	listint_t *my_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	/*my_node = create_node(n);*/
	if (my_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = my_node;
		return (my_node);
	}
	if (idx == 0)
		*head = my_node;
	for (x = 0; x < idx - 1;/* &&temp != NULL && idx != 0;*/ x++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		my_node->next = temp;
	else
	{
		prev = temp->next;
		temp->next = my_node;
		my_node->next = prev;
	}
	return (my_node);
}

/**
 * create_note - Function to create new node
 * @n: takes the index of the nodes
 * Return: return address of node
 */
listint_t create_node(int n)
{
	listint_t *my_node;

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
		return;
	my_node->n = n;
	my_node->next = NULL;
	return (my_node);
}
