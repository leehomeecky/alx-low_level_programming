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
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, j;
    
    if (len1 + 1 > size_r || len2 + 1 > size_r)
    {
        return 0;
    }
    
    i = len1 - 1;
    j = len2 - 1;
    r[size_r - 1] = '\0';
    size_r--;
    
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        if (size_r < 1)
        {
            return 0;
        }
        r[size_r - 1] = sum + '0';
        size_r--;
    }
    
    if (carry) {
        if (size_r < 1)
        {
            return 0;
        }
        r[size_r - 1] = '1';
        size_r--;
    }
    
    if (size_r < 1)
    {
        return 0;
    }
    memmove(r, r + size_r, strlen(r + size_r) + 1);
    
    return r;
}

