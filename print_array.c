#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - A function that prints an array of integers
 *
 * @array: The array to be printed
 * @size: The Number of elements in an array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
