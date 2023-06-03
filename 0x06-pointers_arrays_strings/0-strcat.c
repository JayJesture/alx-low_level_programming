#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * Return: concacted
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
