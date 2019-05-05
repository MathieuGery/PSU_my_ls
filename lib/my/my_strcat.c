/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** mathieu gery
*/
#include "my.h"

char *my_strcat(char *dest, char *src)
{
	char *ret = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)));
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') {
		ret[i] = dest[i];
		i++;
	}

	while (src[j] != '\0') {
		ret[i] = src[j];
		j++;
		i++;
	}
	ret[i] = '\0';

	return (ret);
}
