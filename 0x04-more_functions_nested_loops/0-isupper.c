#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks for alphabetic character
 *
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
