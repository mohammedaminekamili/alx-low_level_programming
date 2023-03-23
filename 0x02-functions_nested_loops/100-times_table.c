#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number of the times table to be printed.
 *
 * Return: void.
 */
void print_times_table(int n)
{
int i, j, k;
if (n > 15 || n < 0)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j == 0)
_putchar('0' + k);
else if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + k);
}
else if (k >= 10 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + k / 10);
_putchar('0' + k % 10);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + k / 100);
_putchar('0' + ((k / 10) % 10));
_putchar('0' + k % 10);
}
}
_putchar('\n');
}
}

