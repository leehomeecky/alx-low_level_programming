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
    int len1 = 0, len2 = 0, carry = 0;
    char *p1 = n1, *p2 = n2, *pr = r + size_r - 1;
    *pr = '\0';
    pr--;

    while (*p1 != '\0')
    {
        len1++;
        p1++;
    }

    while (*p2 != '\0')
    {
        len2++;
        p2++;
    }

    if (len1 + 1 > size_r || len2 + 1 > size_r) {
        return 0;
    }

    p1 = n1 + len1 - 1;
    p2 = n2 + len2 - 1;

    while (p1 >= n1 && p2 >= n2)
    {
        int sum = (*p1 - '0') + (*p2 - '0') + carry;
        carry = sum / 10;
        *pr = (sum % 10) + '0';
        pr--;
        p1--;
        p2--;
    }

    while (p1 >= n1)
    {
        int sum = (*p1 - '0') + carry;
        carry = sum / 10;
        *pr = (sum % 10) + '0';
        pr--;
        p1--;
    }

    while (p2 >= n2)
    {
        int sum = (*p2 - '0') + carry;
        carry = sum / 10;
        *pr = (sum % 10) + '0';
        pr--;
        p2--;
    }

    if (carry > 0)
    {
        if (pr == r) {
            return 0;
        }
        *pr = carry + '0';
        pr--;
    }

    if (pr == r + size_r - 1)
    {
        return 0;
    }

    return pr + 1;
}

