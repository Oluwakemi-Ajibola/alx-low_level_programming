#include "main.h"

/**
 * print_sign - prints the sign of a number
 *  @n: the number to be checked
 *  Return: 1 and prints + is n is greater than 0
 *  Returns 0 an dprints 0 if n is 0
 *  Returns -1 an dprints - if n is less than o
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
