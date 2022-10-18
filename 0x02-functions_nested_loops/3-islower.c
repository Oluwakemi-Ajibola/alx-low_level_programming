#include "main.h"

/** _islower prints a function that checks for lowercase character
 * @c: an input character
 * Return: 1 if letter is lowercase, 0 if letter is not lowercase
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
