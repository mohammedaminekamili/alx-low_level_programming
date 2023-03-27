#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
int i, j;
char tmp;
    /* Find the length of the string */
while (s[len] != '\0')
{
len++;
}
    /* Swap characters from both ends of the string */
for (i = 0, j = len - 1; i < j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}
