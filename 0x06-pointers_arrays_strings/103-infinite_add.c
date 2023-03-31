#include "main.h"

/**
 * infinite_add - Adds two numbers stored in strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer where result will be stored
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result could not be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry = 0, digit;

i = j = k = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i + 1 > size_r || j + 1 > size_r)
return (0);
r[i + 1] = '\0';
while (i > 0 || j > 0 || carry != 0)
{
digit = carry;
if (i > 0)
digit += n1[--i] - '0';
if (j > 0)
digit += n2[--j] - '0';
carry = digit >= 10;
if (carry)
digit -= 10;
r[k++] = digit + '0';
if (k >= size_r)
return (0);
}
r[k] = '\0';
i = 0;
j = k - 1;
while (i < j)
{
digit = r[i];
r[i++] = r[j];
r[j--] = digit;
}
return (r);
}

