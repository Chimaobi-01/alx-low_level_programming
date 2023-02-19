#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	int i, len = 26;

	for (i = 0; i < len; i++)
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
