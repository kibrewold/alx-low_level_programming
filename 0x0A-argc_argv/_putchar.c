#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c the character to print
 *
 * Return: On sucess 1.
 * on error -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
