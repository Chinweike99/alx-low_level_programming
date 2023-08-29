#include "lists.h"
/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: head pointer
 * @n: int value
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_node;

	if (head == NULL)
		return (0);
	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
		return (NULL);
	if (*head == NULL)
		my_node->next = NULL;
	else
		my_node->next = *head;

	my_node->n = n;
	*head = my_node;
	return (*head);
}
