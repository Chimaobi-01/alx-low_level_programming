#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
	{}
	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
