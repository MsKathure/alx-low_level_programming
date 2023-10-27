#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to set
 * @index: The index at which to set the bit
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit_mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set_bit_mask = 1UL << index;
	*n = *n | set_bit_mask;

	return (1);
}

