#include "main.h"
/**
 * jack_bauer - print every minutes of the day
 */
void jack_bauer(void)
{
	int i, x, y, z;

	for (z = 0; z < 3; z++)
	{
		for (y = 0; y < 10; y++)
		{
			if (z == 2 && y == 4)
			{
				break;
			}
			else
			{
				for (x = 0; x < 6; x++)
				{
					for (i = 0; i < 10; i++)
					{
						_putchar('0' + z);
						_putchar('0' + y);
						_putchar(':');
						_putchar('0' + x);
						_putchar('0' + i);
						_putchar('\n');
					}
				}
			}
		}
	}
}
