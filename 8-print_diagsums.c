#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_diagsums - function that addition
 * @a: square matrix
 * @size: size of matrix
 *
 * Description: function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * Return: return void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int k;
	int left;
	int rigth;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		left = (i * size) + i;
		sum1 += *(a + left);
	}
	for (k = 0; k < size; k++)
	{
		rigth = (k * size) + (size - 1 - k);
		sum2 += *(a + rigth);
	}
	printf("%d, %d\n", sum1, sum2);
}
