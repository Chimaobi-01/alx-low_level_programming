#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string pointer
 * Return: length of str
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;
	return (len);
}
