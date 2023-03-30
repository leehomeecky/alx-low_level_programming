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
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int carry = 0;
    int k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        if (k >= size_r - 1)
            return 0;

        r[k++] = (char)(sum % 10 + '0');
        carry = sum / 10;

        i--;
        j--;
    }

    r[k] = '\0';
    int len = strlen(r);
    for (i = 0; i < len / 2; i++)
    {
        char temp = r[i];
        r[i] = r[len - 1 - i];
        r[len - 1 - i] = temp;
    }

    return r;
}

