#include "holberton.h"
/**
 * main - prints Holberton
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
