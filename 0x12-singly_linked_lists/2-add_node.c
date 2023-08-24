#include "lists.h"
int len(const char *str);

/**
 * add_node - Function that adds a new node to the begining
 * @str: The string that points to character
 * @head: The pointer to the first item
 * Return: Returns added nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *my_node;

	if (head == NULL)
		return (NULL);
	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (NULL);
	if (*head == NULL)
		my_node->next = NULL;
	else
			my_node->next = *head;
		my_node->str = strdup(str);
		my_node->len = len(str);
		*head = my_node;

	return (*head);
}
/**
 * my_len - Function that takes the length of the node
 * @str: The string to the pointer
 * Return: Length of node
 */
int len(const char *str)
{
	int d;

	if (str == NULL)
		return (0);
	d = 0;
	while (str[d] != '\0')
		d++;
	return (d);
}
