#include <unisted.h>
#include "main.h"
/**
 * _putchar - writes the charachtter c to stdout
 * @c: the charachter to print
 * Return: on sucess 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

