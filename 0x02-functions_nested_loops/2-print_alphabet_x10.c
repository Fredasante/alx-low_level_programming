#include "main.h"

/**
 * print_alphabetx10 - prints 10 times the alphabet
 * in lowercase followed by a new line
 * Retrun: Always 0 (Success)
 */
void print_alphabetx10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}
	_putchar('\n');
}
