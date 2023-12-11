#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it uses at most n bytes from src
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: the number of bytes to add from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}
