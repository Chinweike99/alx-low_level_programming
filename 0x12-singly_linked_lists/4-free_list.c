#include "lists.h"
/**
 * free_list - Afunction that frees a Linked list
 * @head: list_t to be freed
 * Return: Return freed list
 */
void free_list(list_t *head)
{
	list_t *my_tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		my_tmp = head->next;
		free(head->str);
		free(head);
		head = my_tmp;
	}
	free(head->str);
	free(head);
}
