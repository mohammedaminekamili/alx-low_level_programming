#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int i;

    /* Find the length of the string */
while (str[len] != '\0')
len++;
    /* Calculate the starting index of the second half */
if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;

    /* Loop through the second half of the string */
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
