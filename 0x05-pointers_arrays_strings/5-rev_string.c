#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: rwversed string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int a;
	int b;

	while (s[i] != 0)
	{
		i++;
	}

	b = i;
	i = 0;
	j = b - 1;

	while (i < j)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		i++;
		j--;
	}
}
