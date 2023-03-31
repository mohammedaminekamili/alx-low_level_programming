#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (src[i] != '\0')
{
dest[dest_len] = src[i];
i++;
dest_len++;
}

dest[dest_len] = '\0';

return (dest);
}
