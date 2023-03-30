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
    int carry = 0;
    int n1_len = strlen(n1);
    int n2_len = strlen(n2);
    int i, j;

    // Check if result will fit in buffer
    if (n1_len + n2_len + 1 > size_r)
        return 0;

    // Initialize result string to '\0'
    for (i = 0; i < size_r; i++)
        r[i] = '\0';

    // Add digits from right to left
    for (i = n1_len - 1, j = n2_len - 1; i >= 0 || j >= 0; i--, j--)
    {
        int sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        carry = sum / 10;
        r[i + j + 1] = sum % 10 + '0';
    }

    // Add carry digit, if any
    if (carry)
    {
        if (n1_len + n2_len >= size_r)
            return 0;
        for (i = n1_len + n2_len - 1; i >= 0; i--)
            r[i + 1] = r[i];
        r[0] = carry + '0';
    }

    return r;
}

