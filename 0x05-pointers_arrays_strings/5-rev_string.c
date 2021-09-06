#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int a;
	int b;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	b = i;
	i--;
	while (j < b / 2)
	{
		a = s[j];
		s[j] = s[i];
		s[i] = a;
		i--;
		j++;
	}
}
