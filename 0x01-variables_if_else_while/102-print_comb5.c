#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i, k, a, b, n = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (i = 0; i < 10; i++)
			{
				for (k = 0; k < 10; k++)
				{
					if ((k + i) > (b + a))
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + i);
						putchar('0' + k);
	(!(a == 9 && b == 8 && i == 9 && k == 9)) ? putchar(','), putchar(' ') : n++;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
