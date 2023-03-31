#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    /* Loop through the string */
for (i = 0; str[i] != '\0'; i++)
{
        /* Loop through the letter and rot13 arrays */
for (j = 0; letter[j] != '\0'; j++)
{
            /* Check if current character matches a letter */
if (str[i] == letter[j])
{
                /* Replace the character with its rot13 equivalent */
str[i] = rot13[j];
break; /* Move on to next character */
}
}
}

return (str);
}

