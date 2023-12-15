#include"monty.h"
/**
 * check_integer - check if a string is  integers
 * @string: the string
 *
 * Return: return 0 or 1
 */
int check_integer(char *string)
{
	int i = 0;

	if (string[0] == '-')
		i++;
	while (string[i] != '\0')
	{
		if (string[i] > '9' || string[i] < '0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

