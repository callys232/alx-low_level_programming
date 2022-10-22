#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose leght to return
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node - adds a new node at the beginnng of the list_t list
 * @head: address of the node
 * @st: strinf to addd
 * Return: affress of the new element, NULL if ti fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
