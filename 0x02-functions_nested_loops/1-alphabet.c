#include "main.h"

/**
 * print_alphabet - print the alphabets in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{_putchar(j);
	}
	_putchar('\n');
}
