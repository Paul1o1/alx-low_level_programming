#include "main.h"
/**
 * _strlen-Finds the length of a string.
 * @s:string pointer to the string whose length is to be found.
 * Return:returns the length of the strings.
 */
int_strlen(char *s)
{
	int p = 0;
	/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
{
	p++;
}
return (p);
}
