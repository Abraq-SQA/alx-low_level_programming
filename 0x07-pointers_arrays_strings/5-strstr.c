#include "main.h"

/**
 * _strstr - locates a substring
 * @pod: string in which to check for bean
 * @bean: substring to find in pod
 *
 * Return: pointer to beginning of bean in pod or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (pod[i])
	{
		while (bean[j] && (pod[i] == bean[0]))
		{
			if (pod[i + j] == bean[j])
				j++;
			else
				break;
		}
		if (bean[j])
		{
			i++;
			j = 0;
		}
		else
			return (pod + i);
	}
	return (0);
}
