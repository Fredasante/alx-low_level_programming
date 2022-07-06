#include "main.h"

/**
 * print_times_table - prints the n times table, starting with
 * @n: time table to print
 */
void print_times_table(int n)

{

		int ii, jj, mul;



			if (n < 0 || n > 15)

						return;

				for (ii = 0; ii <= n; ii++)

						{

									for (jj = 0; jj <= n; jj++)

												{

																mul = ii * jj;

																			if (jj == 0)

																								_putchar('0' + mul);

																						else if (mul < 10)

																										{

																															_putchar(' ');

																																			_putchar(' ');

																																							_putchar('0' + mul);

																																										}

																									else if (mul < 100)

																													{

																																		_putchar(' ');

																																						print(mul);

																																									}

																													else

																																	{

																																						print(mul);

																																									}

																																if (jj < n)

																																				{

																																									_putchar(',');

																																													_putchar(' ');

																																																}

																																		}

											_putchar('\n');

												}

}
