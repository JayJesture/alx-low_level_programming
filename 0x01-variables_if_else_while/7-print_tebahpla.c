#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');
	putchar('\n');
	return (0);
}
