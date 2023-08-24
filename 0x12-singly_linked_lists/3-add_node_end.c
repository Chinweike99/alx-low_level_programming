#include "lists.h"

int len(const char *str);
list_t *generate_node(const char *str);
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: Pointer to the first item
 * @str: the string to be duplicated
 * Return: Nodes added to the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_tmp;
	list_t *my_node;

	my_tmp = *head;
	if (head == NULL)
		return (NULL);
	my_node = generate_node(str);
	if (*head == NULL)
	{
		*head = my_node;
		return (*head);
	}
	if (my_node == NULL)
		return (NULL);
	while (my_tmp->next != NULL)
		my_tmp = my_tmp->next;
	my_tmp->next = my_node;
	return (*head);
}

/**
 * generate_node - A function to create new node
 * @str: The string in the node
 * Return: Return the new node
 */
list_t *generate_node(const char *str)
{
	list_t *my_node;

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (0);
	my_node->str = strdup(str);
	my_node->len = len(str);
	my_node->next = NULL;
	return (my_node);
}
/**
 * len - A Function that takes the length
 * @str: The string to the items
 * Return: The length of the string
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
