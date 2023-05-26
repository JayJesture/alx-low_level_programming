#include "main.h"
/**
 * print_times_table - run time-table of int
 * @n: value brought
 */
void print_times_table(int n)
{
int row, column, lst, times1, times2, times3;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= (n - 1); column++)
{
times1 = ((row * column) / 100);
times2 = (((row * column) / 10) % 10);
times3 = ((row * column) % 10);
if (((row) * (column + 1)) < 10)
{
if (times1 > 0)
_putchar(times1 + '0');
if (times2 > 0)
_putchar(times2 + '0');
_putchar(times3 + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if ((((row) * (column + 1)) > 9) && (((row) * (column + 1)) < 100))
{
if (times2 > 0)
_putchar(times2 + '0');
_putchar(times3 + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
if (times1 > 0)
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(times3 + '0');
_putchar(',');
_putchar(' ');
}
}
lst = n * row;
if ((lst / 100) != 0)
_putchar(lst / 100 + '0');
if (!((((lst / 10) % 10) == 0) && ((lst / 100) == 0)))
_putchar(((lst / 10) % 10) + '0');
_putchar(lst % 10 + '0');
_putchar('\n');
}
return;
}
