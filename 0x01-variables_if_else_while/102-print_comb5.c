#include <stdio.h>

/**
 *main - print a number pair from 00-99 with no repeatiiis
 *Return: Always 0 (Success)
 */

int main(void)
{
	int Num10s;
	int Num1s;
	int ten;
	int one;

	for (Num10s = '0'; Num10s <= '9'; Num10s++)
	{
		for (Num1s = '0'; Num1s <= '9'; Num1s++)
		{
			for (ten = Num10s; ten <= '9'; ten++)
			{
				for (one = Num1s + 1; one <= '9'; one++)
				{
					putchar(Num10s);
					putchar(Num1s);
					putchar(' ');
					putchar(ten);
					putchar(one);

					if (!((Num10s == '9' && Num1s == '8') &&
								(ten == '9' && one == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				one = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
