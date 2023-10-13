#include "lists.h"
/*
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: Head pointer
 * Return: sum on success and 0, if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_num = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum_num += head->n;
			head = head->next;
		}
	}
	return (sum_num);
}

