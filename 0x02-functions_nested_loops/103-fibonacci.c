#include <stdio.h>

/**
 * main - cout sum of even Fionacci  up_to 4000000
 * Return: always zero
 */

int main(void)
{
	int sumEven = 0;
	int num1;
	int num2;
	int sum = 1;

	num1 = 1;
	num2 = 1;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sumEvens += sum;
	}
	printf("%d\n", sumEvens);

	return (0);
}
