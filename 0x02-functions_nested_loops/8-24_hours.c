#include "main.h"
/**
 * jack_bauer - print days
 */
void jack_bauer(void)
{
int hour1;
int hour2;
int min1;
int min2;
for (hour1 = '0'; hour1 <= '2'; hour1++)
{
for (hour2 = '0'; hour2 <= '9'; hour2++)
{
for (min1 = '0'; min1 <= '5'; min1++)
{
for (min2 = '0'; min2 <= '9'; min2++)
{
if (hour1 >= '2' && hour2 >= '3' && min1 >= '5' && min2 >= '9')
continue;
_putchar(hour1);
_putchar(hour2);
_putchar(':');
_putchar(min1);
_putchar(min2);
_putchar('\n');

}
}
}
}
return;
}
