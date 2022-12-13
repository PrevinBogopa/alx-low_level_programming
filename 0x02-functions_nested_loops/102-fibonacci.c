#include <stdio.h>

/**
 * main - print first 50 Fibo nums
 * Return: alwyas zero
 */

int main(void)
{
	int counter;
	int countupto = 50;
	long num1 = 1;
	long num2 = 2;

	for (counter = 1; counter <= (countupto / 2); counter++)
	{
		printf("%li %li ", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	if (countupto % 2 == 1)
		printf("%li", num1);

	printf("\n");

	return (0);
}
