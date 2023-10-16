#include <unistd.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to calculate the absolute value of
 * Return: The absolute value of n
 */
int _abs(int n)
{
	return (n < 0) ? -n : n;
}
