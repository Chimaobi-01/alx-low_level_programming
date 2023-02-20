#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char num = '0', alpha = 'a';
	int n, c_num = 10, a, c_alpha = 6;

	for (n = 0; n < c_num; n++)
	{
		putchar(num);
		num++;
	}
	for (a = 0; a < c_alpha; a++)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
