#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @arr: array to be printed
 * @n: number of element to print
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
