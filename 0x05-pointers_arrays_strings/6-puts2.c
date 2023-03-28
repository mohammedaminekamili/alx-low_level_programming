#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
    /* Loop through the string, incrementing i by 2 */
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
