#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 12   * struct list_s - stringly linked list
 13   * @str: string (malloced string)
 14   * @len: string length
 15   * @next: pointer to the next node
 16   */
 17
 18 typedef struct list_s
 19 {
 20         char *str;
 21         size_t len;
 22         struct list_s *next;
 23 } list_t

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
