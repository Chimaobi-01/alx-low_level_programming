#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i, k, a, b;

	a = 0;
	b = 0;
	for (i = 0; i < 10; i++)
	{
		a++;
		for (k = 0; k < 10; k++)
		{
			b++;
			if (((k + i) > (b + a)))
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + i);
				putchar('0' + k);
				if (!(a == 9 && b == 8 && i == 9 && k == 9))
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
