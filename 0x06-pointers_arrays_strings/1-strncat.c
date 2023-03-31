#include "main.h"

/**
 * _strncat - concatenates two strings, up to n bytes of src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes from src to concatenate to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (src[i] != '\0' && i < n)
{
dest[dest_len] = src[i];
i++;
dest_len++;
}
dest[dest_len] = '\0';

return (dest);
}
