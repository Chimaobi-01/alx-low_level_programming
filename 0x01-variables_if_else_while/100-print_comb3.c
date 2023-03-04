#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (k > i)
			{
				putchar('0' + i);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
