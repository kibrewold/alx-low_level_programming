#include "main.h"
#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * %c: The character to print
 * Return: On sucess 1.
 * On error -1 is returned, and errno isset appropriately.
 */
int _puthar (char c)
{
        return (write(1, &c, 1));
}
