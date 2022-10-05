#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c :The charatcter to print
 * Return: on success 1.
 * On error, -1, is returend, and erron is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
