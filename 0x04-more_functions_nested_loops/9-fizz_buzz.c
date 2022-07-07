#include <stdio.h>
#define stopVar 100

/**
 * main - main function
 * checks through numbers from 1 - 100
 * Return: 0 if successful
 */

int main(void)va
{
	int ii = 1;
	do {
		if ((ii % 3 == 0) && (ii % 5 == 0))
			printf("FizzBuzz");
		else if (ii % 3 == 0)
			printf("Fizz");
		else if (ii % 5 == 0)
			printf("Buzz");
		else
			printf("%d", ii);
		if (ii != stopVar)
			printf(" ");
		ii++;
	} while (ii < stopVar + 1);
	printf("\n");

	return (0);
}
