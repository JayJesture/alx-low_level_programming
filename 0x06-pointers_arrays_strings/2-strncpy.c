#include "main.h"
/**
 * _strncpy - copy two strings taking n bytes from src
 * @dest: first string
 * @src: second string
 * @n: bits to use from src
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*temp = *src;
		temp++;
	}
	for (; n != 0 && *temp != '\0'; n--, temp++)
		*temp = '\0';
	return (dest);
}
