#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 *
 * @s: pointer vale to be changed
 * @to: pointer to new value
 */

void set_string(char **s, char *to)
{
	**s = *to;
}
