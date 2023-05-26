#include "main.h"
/**
 * print_times_table - run time-table of int
 * putchrr - put , then ' ' n times 
 * @n: value brought
 */
void putchrr(int n);
void print_times_table(int n)
{
int row, column, lst, times1, times2, times3;

if (n > 15 || n < 0)
return;
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
putchrr(3);
}
else if ((((row) * (column + 1)) > 9) && (((row) * (column + 1)) < 100))
{
if (times2 > 0)
_putchar(times2 + '0');
_putchar(times3 + '0');
putchrr(2);
}
else
{
if (times1 > 0)
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(times3 + '0');
putchrr(1);
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

void putchrr(int n)
{
int i;
  
_putchar(',');
for (i = 0; i < n; i++)
{
  _putchar(' ');
}
return;
}
