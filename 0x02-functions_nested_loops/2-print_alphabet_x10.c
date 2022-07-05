#include "main.h"

/**
 * print_alphabetx10 - prints 10 times the alphabet
 * in lowercase followed by a new line
 * Retrun: Always 0 (Success)
 */
void print_alphabetx10(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}
	_putchar('\n');
}
