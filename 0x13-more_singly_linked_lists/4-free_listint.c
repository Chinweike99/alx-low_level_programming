#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: Pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}
