#include <stdio.h>

/**
 * main - first 50 fibonacci number
 * Return: 0 if successful
 */
int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < nLast; i++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (i != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
