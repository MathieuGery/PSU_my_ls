/*
** EPITECH PROJECT, 2017
** size function for my_ls
** File description:
** mathieu gery
*/

#include "my.h"

void size(char *av)
{
	struct stat filestat;
	stat(av, &filestat);

	my_put_nbr(filestat.st_size);
	my_putstr("\t");
}
