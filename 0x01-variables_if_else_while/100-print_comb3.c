#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{
		putchar((i/10) + '0');
		putchar((i % 10) + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
