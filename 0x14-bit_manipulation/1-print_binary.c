#include "main.h"

/**
 * _pow - calculates result of raising 'base' to the power of 'power'.
 * @base: The base of the exponent
 * @power: The power of the exponent
 *
 * Return: The computed value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;

	while (power > 0)
	{
		result *= base;
			power--;
	}

	return (result);
}

/**
 * print_binary - This function prints a number in binary notation.
 * @n: The number to be printed in binary
 *
 * Return: This function returns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check = 1;
	char flag = 0;
	unsigned long int check;

	while (divisor < n)
	{
		divisor <<= 1
	}

	while (divisor > 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1
				_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

