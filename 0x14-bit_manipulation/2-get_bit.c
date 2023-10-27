#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index.
 * @n: The number to check bits in
 * @index: The index at which to check the bit
 *
 * Return: bit value at the specified index, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit_value;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	bit_value = n & mask;

	return ((bit_value > 0) ? 1 : 0);
}

