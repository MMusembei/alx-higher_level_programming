#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *solid = list;
	listint_t *light = list;

	if (!list)
		return (0);

	while (solid && light && light->next)
	{
		solid = solid->next;
		light = light->next->next;
		if (solid == light)
			return (1);
	}

	return (0);
}
