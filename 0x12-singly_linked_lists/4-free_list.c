#include "list.h"
#include <stdlib.h>

/**
 * free_list - free theh list_t it.
 * @head: A pointer to the ist_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
