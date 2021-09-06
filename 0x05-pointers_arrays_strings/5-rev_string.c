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
	int temp;
	char length;

	for (i = 0; s[i] != '\0'; i++)
		;

	i = 0;

	temp = i / 2;

	while (temp--)
	{
		lemgth = s[i - j - 1];
		s[i - j] = s[j];
		s[j] = length;
		j++;
	}
}
