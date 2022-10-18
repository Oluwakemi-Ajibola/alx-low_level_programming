#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i, b;
	for (b = 0; b <= 9; b++)
	{
		for (i = 'a'; i <= 'z'; i++);
		{
		_putchar(i);
	}
_putchar('\n');
}
}
