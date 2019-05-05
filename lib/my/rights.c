/*
** EPITECH PROJECT, 2017
** rights function for my_ls
** File description:
** mathieu gery
*/

#include "my.h"
#include <unistd.h>

void rights(char *av)
{
	struct stat *filestat = malloc(sizeof(struct stat));
	stat(av, filestat);

	if (S_ISDIR(filestat->st_mode) == 1)
		my_putchar('d');
	else
		my_putchar('-');
	my_putstr((filestat->st_mode & S_IRUSR) ? "r" : "-");
	my_putstr((filestat->st_mode & S_IWUSR) ? "w" : "-");
	my_putstr((filestat->st_mode & S_IXUSR) ? "x" : "-");
	my_putstr((filestat->st_mode & S_IRGRP) ? "r" : "-");
	my_putstr((filestat->st_mode & S_IWGRP) ? "w" : "-");
	my_putstr((filestat->st_mode & S_IXGRP) ? "x" : "-");
	my_putstr((filestat->st_mode & S_IROTH) ? "r" : "-");
	my_putstr((filestat->st_mode & S_IWOTH) ? "w" : "-");
	my_putstr((filestat->st_mode & S_IXOTH) ? "x" : "-");
	my_putstr(". ");
}
