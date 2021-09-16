#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
