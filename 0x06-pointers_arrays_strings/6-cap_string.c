#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;

    /* Capitalize first character if it's a letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32; /* ASCII difference between lowercase and uppercase */

    /* Traverse the string character by character */
while (str[i] != '\0')
{
        /* Capitalize next character after a word separator */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++; /* Move to next character */

/* Capitalize next character if it's a letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32; /* ASCII difference between lowercase and uppercase */
}
i++; /* Move to next character */
}

return (str);
}

