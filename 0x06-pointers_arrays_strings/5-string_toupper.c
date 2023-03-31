#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to be converted
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32; /* ASCII difference between lowercase and uppercase */
i++;
}

return (str);
}
