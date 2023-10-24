#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints the elemets of a linked list
  * @h: pointer to the singly linked test
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h);
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
return (count);
}
