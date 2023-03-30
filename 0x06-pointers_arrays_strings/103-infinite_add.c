#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 *
 * @n1: number 1 to be added
 * @n2: number 2 to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: r if Success
 */
  
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum = 0;
    char *p1 = n1, *p2 = n2, *pr = r;

    while (*p1++)
        len1++;
    while (*p2++)
        len2++;

    if (len1 > size_r || len2 > size_r || len1 + 1 > size_r || len2 + 1 > size_r)
        return 0;

    p1--, p2--;

    while (p1 >= n1 || p2 >= n2)
    {
        sum = carry;
        if (p1 >= n1)
            sum += *p1-- - '0';
        if (p2 >= n2)
            sum += *p2-- - '0';

        carry = sum / 10;
        *pr++ = sum % 10 + '0';
    }

    if (carry)
        *pr++ = carry + '0';

    *pr = '\0';

    if (pr - r > size_r)
        return 0;

    for (int i = 0; i < (pr - r) / 2; i++)
    {
        char temp = r[i];
        r[i] = r[pr - r - 1 - i];
        r[pr - r - 1 - i] = temp;
    }

    return r;
}

