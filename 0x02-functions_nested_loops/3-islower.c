#include "holberton.h"
/**
*_islower - checks for lowercase character.
* @c: char type letter
*Return: 1 if int c is lowercase, 0 if otherwise
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
}
