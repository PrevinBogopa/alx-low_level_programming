#include <stdio.h>

/**
 *main - printing numbers of 3
 *Return: Always 0 (Success)
 */

int main(void)
{
	int 1st;
	int 10th;
	int 100th;

	for (100th = '0'; 100th <= '9'; 100th++)
	{
		for (10th = (100th + 1); 10th <= '9'; 10th++)
		{
			for (1st = (10th + 1); 1st <= '9'; 1st++)
			{
				putchar(100th);
				putchar(10th);
				putchar(1st);
				if (100th != '7' || 10th != '8' || 1st != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
