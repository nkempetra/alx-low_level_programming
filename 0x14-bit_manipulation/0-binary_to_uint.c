#include "main.h"

/** 
 * binary_to_uint - Converts a binary string to an unsigned integer value
 *
 * @b: The binary string to convert
 *
 * Return: The converted value
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0;
    int len = 0, base = 1;
    
    if (!is_valid_string(b))
        return (0);

    while (b[len] != '\0')
        len++;

    while (len)
    {
        decimal += ((b[len - 1] - '0') * base);
        base *= 2;
        len--;
    }

    return (decimal);
}

/** 
 * is_valid_string - Checks if a string is a valid binary string
 *
 * @b: The string to check
 *
 * Return: 1 if valid, 0 otherwise
 */

int is_valid_string(const char *b)
{
    if (b == NULL)
        return (0);
    
    while (*b)
    {
        if (*b != '1' && *b != '0')
            return (0);
        b++;
    }

    return (1);
}
