#include "main.h"
/**
 * Don't swap horses in crossing a stream
 * @n = input
 * Return : n
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
	
