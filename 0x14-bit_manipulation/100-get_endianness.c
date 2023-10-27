#include "main.h"

/**
 * get_endianness - This function checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it's little endian
 */
int get_endianness(void)
{
	int test_value = 1;
	char *byte_ptr = (char *)&test_value;

	return (*byte_ptr);
}

