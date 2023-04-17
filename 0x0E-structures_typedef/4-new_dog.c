#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);
char *_strcopy(char *dest, char *src);

/**
 * str_len - a function that counts the lenght of a string;
 *
 * @str: pointer to string
 *
 * Return: length of @s if success
 */

int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_len(++str));
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog -  a function that creates a new dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to dog structure if success else null
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = (dog_t *)malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = (char *)malloc((str_len(name)) * sizeof(char) + 1);
	my_dog->owner = (char *)malloc((str_len(owner)) * sizeof(char) + 1);

	if (my_dog->name == NULL || age < 0 || my_dog->owner == NULL)
		return (NULL);
	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);
	return (my_dog);
}
