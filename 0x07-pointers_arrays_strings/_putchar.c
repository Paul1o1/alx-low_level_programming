#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the caracter to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno isset appropriatly.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
