#include "main.h"

/**
 * _strncpy - copies a string, up to n characters
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
