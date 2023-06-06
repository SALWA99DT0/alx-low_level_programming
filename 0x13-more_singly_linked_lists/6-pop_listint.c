#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: pointer to the first element in linked list
*Return: The head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
