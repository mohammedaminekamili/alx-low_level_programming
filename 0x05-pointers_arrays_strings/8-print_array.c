#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
 _putchar(a[i] + '0'); /* Convert integer to character */
if (i != n - 1)
_putchar(','); /* Print comma and space for all but last element */
_putchar(' ');
}
_putchar('\n');
}
