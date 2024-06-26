#include "main.h"

/**
 * _islower - looks for lowercase characters
 * @c: The character to be checked
 * Return : 1 for owercase character or 0 for anything else
 */
 int _islower(int c)
 {
	if (c >= 97 && c <= 112)
	{
	return (1);
	}
	return (0);
}
