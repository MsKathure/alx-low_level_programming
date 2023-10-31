#include "list.h"
#include <stdio.h>

/**
  * print_list - prints the elemets of a linked list
  * @h: pointer to the singly linked test
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h);
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("{%d} %s/n", 0, "(nil)");
		else
			printf("{%d} %s/n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
