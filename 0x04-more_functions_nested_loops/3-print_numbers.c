#include "main.h"

/**
 * print_numbers - print 0123456789 followed by a new line.
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
