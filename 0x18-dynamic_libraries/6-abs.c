#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @i: the integer
 *
 * Return: the absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
		return (i);
}
