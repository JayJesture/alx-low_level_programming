#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
printf(%d,n);
if (n > 0)
{
printf( is positiven)
} 
else if (n = 0)
{
printf( is zeron)
}
else
{
printf( is negativen)
}
return (0);
}
