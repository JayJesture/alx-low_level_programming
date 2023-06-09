#include "main.h"
/**
 * reverse_array - reverses content of an array of ints
 * @a: int array to reverse
 * @n: number of elements in the array
 * Return: concatenated string
 */
void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end;
	int hold = 0;

	end = a + n - 1;
	for (; begin < end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
}
