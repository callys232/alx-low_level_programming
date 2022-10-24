#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t list
 * @head: A pointer to the address of
 * the head of the listint_t list.
 *
 * Return: The pointer to the first noe of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
