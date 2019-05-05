/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** mathieu gery
*/

#include "my.h"

int my_ls(char *av, int x)
{
	int i = 0;
	DIR *dir;
	struct dirent *dent = malloc(sizeof(struct dirent));
	char *str;

	dir = opendir(av);
	if (dir == NULL) {
		perror("");
		return (84);
	}
	av = my_strcat(av, "/");
	while (dent = readdir(dir)) {
		if (dent->d_name[0] != '.') {
			if (i != 0 && x != 1)
				my_putstr("  ");
			if (x == 1) {
				str = my_strcat(av, dent->d_name);
				type(str);
				free(str);
			}
			my_putstr(dent->d_name);
			if (x == 1)
				my_putchar('\n');
			i = 1;
		}
	}
	if (x != 1)
		my_putchar('\n');
	closedir(dir);
}

int my_ls_l(char *av)
{
	my_ls(av, 1);
}

void type(char *av)
{
	struct stat filestat;
	stat(av, &filestat);

	rights(av);
	my_put_nbr(filestat.st_nlink);
	my_putstr(" ");
	name(av);
	size(av);
	date(av);
	my_putstr(" ");
}
