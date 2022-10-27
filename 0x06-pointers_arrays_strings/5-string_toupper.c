#include "main.h"
/**
 * string_toupper - Converts all lowercase characters for uppercase
 * @a: String
 *
 * Return: String as a pointer
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *a <= 'z')
			*(a + i) -= 32;
	i++;
	}
	return (a);
}
