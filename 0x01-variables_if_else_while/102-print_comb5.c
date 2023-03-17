#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;
int l;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = i; k <= 9; k++)
		{
			if (j == 9 && i == k)
				k += 1;
			for (l = 0; l <= 9; l++)
			{
				if (i == k && l == 0 && j < 9)
					l = j + 1;

				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(l + '0');

				if (i != 9 || j != 8 || k != 9 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
					return (0);
				}
			};
		};
	};
};
return (0);
}
