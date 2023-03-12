#include "main.h"
/**
 * times_table - 9x9 multiplication table
 */
void times_table(void)
{
	int i, n, nd, nr, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				nd = n / 10;
				nr = n % 10;
				_putchar('0' + nd);
				_putchar('0' + nr);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + n);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
