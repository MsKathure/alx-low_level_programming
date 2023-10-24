#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints the elemets of a linked list
  * @h: pointer to the singly linked test
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h);
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)")
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (i);
}
