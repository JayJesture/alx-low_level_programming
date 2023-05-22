#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	ch = 'A';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'Z');

	putchar('\n');
	return (0);
}
