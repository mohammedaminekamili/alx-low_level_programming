#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet[] = "aAeEoOtTlL";
char encode[] = "4433007711";

    /* Loop through the string */
for (i = 0; str[i] != '\0'; i++)
{
        /* Loop through the leet array */
for (j = 0; leet[j] != '\0'; j++)
{
            /* Check if current character matches a leet character */
if (str[i] == leet[j])
{
                /* Replace the character with its encoded equivalent */
str[i] = encode[j];
break; /* Move on to next character */
}
}
}

return (str);
}

