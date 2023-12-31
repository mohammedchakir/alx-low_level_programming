#include "main.h"

/**
* flip_bits - a function that returns a number
* @n: first number
* @m: second number
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, x;

	x = n ^ m;
	i = 0;
	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}
