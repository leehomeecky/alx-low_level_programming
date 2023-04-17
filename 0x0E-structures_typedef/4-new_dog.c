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
	int i;
	dog_t *my_dog;
	char *dog_name = (char *)malloc((str_len(name)) * sizeof(char));
	char *dog_owner = (char *)malloc((str_len(owner)) * sizeof(char));

	if (dog_name == NULL || dog_owner == NULL)
		return (NULL);
	for (i = 0; i < str_len(name); i++)
		dog_name[i] = name[i];
	for (i = 0; i < str_len(owner); i++)
		dog_owner[i] = owner[i];
	my_dog->name = dog_name;
	my_dog->age = age;
	my_dog->owner = dog_owner;
	return (my_dog);
}
