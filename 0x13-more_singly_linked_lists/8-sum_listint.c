#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: Pointer to the first node
 * Return: Return 0 on success
 */
int sum_listint(listint_t *head)
{
	int sumData = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sumData = sumData + head->n;
		head = head->next;
	}
	return (sumData);
}
