#include "main.h"


/**
 *  _islower -Checks for lowercase character
 *  @c: The character to be checked
 *  Return: l for lowercase character or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
