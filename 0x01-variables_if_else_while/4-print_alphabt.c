#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercas
 * Return: 0
 */
int main(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		if (v != 'q' && v != 'e')
		{
			putchar(v);
		}
		v++;
	}
	putchar('\n');
	return (0);
}
