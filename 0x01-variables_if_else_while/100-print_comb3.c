#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 * /
int main(void)
{
for (int i = '0'; i <= '9'; i++)
{	
	int m = i + 1;
	for (; m <= '9'; m++)
	{
	    if (i == m)
	        continue;
	    putchar(i);
	    putchar(m);
	    putchar(',');
	}
}
}
