#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase followed by a new line
 * Retrun: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ii = 0;

	while (ii < 10)
	{
		int jj;

		for (jj = 'a'; jj <= 'z'; jj++)
			_putchar(jj);
		_putchar('\n');

		ii++;
	}
}
