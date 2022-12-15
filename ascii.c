#include "monty.h"

/**
 * isascii - check if it is ascii
 * @a: the value to check
 * Return: 1 if succesful and 0 otherwise
 */
int isascii(int a)
{
	int b = a;

	if (b >= 0 && b <= 255)
	{
		return (1);
	}
	return (0);
}
