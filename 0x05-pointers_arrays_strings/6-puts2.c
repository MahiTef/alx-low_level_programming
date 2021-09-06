#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: character type pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1))
	{
		_putchar(*(str + 1));
		i = i + 2;
	}
	_putchar('\n');
}
