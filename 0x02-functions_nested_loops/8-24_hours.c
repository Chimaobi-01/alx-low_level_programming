#include "main.h"
/**
 * jack_bauer - print every minutes of the day
 */
void jack_bauer(void)
{
	int i, k, x, y;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			for (x = 0; x < 6; x++)
			{
				for (y = 0; y < 10; y++)
				{
					_putchar(i + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(y + '0');
				}
			}
		}
	}
}
