#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at the end
 * @head: Pointer to the first node
 * @n: Takes the number of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *my_temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	my_temp = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (my_temp->next != NULL)
			my_temp = my_temp->next;
		my_temp->next = newnode;
	}
	return (*head);
}
