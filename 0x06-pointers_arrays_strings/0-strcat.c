#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @srt: copy from
 * Return: two concat strings
 */
char *_strcat(char *, char *src)
{
	int len = i, n;

	while (dest[len])
		len++;

	for (i = 0; dest[i] != '\0' ; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '/0';
	return (dest);
}
