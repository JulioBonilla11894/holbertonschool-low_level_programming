#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *s) 
{
	int i = 0;

	if (s == NULL) return NULL;  // Check for NULL

	while (s[i] != '\0') {
        if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n') {
	if (s[i] >= 'a' && s[i] <= 'z') {
	s[i] -= 32;  // Capitalize the letter
	}
        }
        i++;
	}
	return s;
}


