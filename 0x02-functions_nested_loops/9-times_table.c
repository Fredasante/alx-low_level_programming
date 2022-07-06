#include "main.h"

/**
 * times_table - prints the 9 timestable starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j + 0; j <= 9; j++)
			k = i * j;
		if (j == 0)
			_putchar('0' + k);
		else if (k < 10)
		{
			_putchar(' ');
			_putchar('0' + k);
		}
		else
		{
			_putchar('0' + (k / 10));
			_putchar('0' + (k % 10));
		}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
	
