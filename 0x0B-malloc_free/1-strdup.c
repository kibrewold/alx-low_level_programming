#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = _strdup("ALX SE");
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	return (0);
}

