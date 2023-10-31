#include <stdio.h>

void executeFirst(void) __attribute__ ((constructor));

/**
 * executeFirst - displays a message before the main
 * function is run
 */
void executeFirst(void)
{
	printf("Even though you're exhausted, you have to admit,\n");
	printf("I carry my home on my shoulders!\n");
}

