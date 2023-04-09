#include "main.h"

/*
 * int wildcmp - compares two strings 
 * @*s1: first string
 * @*s2: second string
 *
 * return: 1 if identical, 0 if non identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		if (*s1 == '\0')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (*s2 == *s1)
	{
		if (*s1 != '\0')
		{
			return wildcmp(s1 + 1, s2 + 1);
		}
		else
		{
			return 0;
		}
	}
	else if (s2 == '')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return 1;
		}
		else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}





