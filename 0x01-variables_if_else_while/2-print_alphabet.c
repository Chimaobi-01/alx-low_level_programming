#include <stdio.h>
/**
 * main - starts main function
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	int i, len = 26;

	for (i = 0;i < len;i++)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
