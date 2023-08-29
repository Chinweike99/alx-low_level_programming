#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
	}
	free(*head);
	*head = NULL;
}
