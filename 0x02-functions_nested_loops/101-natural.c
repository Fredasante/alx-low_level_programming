#include <stdio.h>

/**
 * main - dont care
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 3; i < 1024; i++)
	{
		if (i & 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
