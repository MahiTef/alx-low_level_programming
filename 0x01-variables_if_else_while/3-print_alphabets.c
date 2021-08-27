#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char words;

	for (words = 'a' ; words <= 'z' ; words++)
		putchar(words);
	for (words = 'A' ; words <= 'Z' ; words++)
		putchar(words);

	putchar('\n');

	return (0);
}
