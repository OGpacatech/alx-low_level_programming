#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string to a new memory location
 * @str: input string
 *
 * Return: pointer to the duplicated string, NULL if failed
 */
char *_strdup(char *str)
{
    char *duplicate;
    int i;

    if (str == NULL)
        return (NULL);

    i = 0;
    while (str[i] != '\0')
        i++;

    duplicate = malloc(sizeof(char) * (i + 1));

    if (duplicate == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        duplicate[i] = str[i];

    duplicate[i] = '\0';

    return (duplicate);
}
