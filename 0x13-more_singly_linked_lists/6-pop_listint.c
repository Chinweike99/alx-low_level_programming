#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: head pointer
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	n = 0;
	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	newnode = *head;
	*head = (*head)->next;
	free(newnode);
	return (0);
}
