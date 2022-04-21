#include <unistd.h>

/**
* _putchar - writes the character c to stdout
*@c: The character to print
*
*Return: On success 1.
*On error, -1 is returnned, and error is there returned
*/

int _putchar(c)
{
	return (write(1, &c, 1));
}
