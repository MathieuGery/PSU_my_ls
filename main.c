/*
** EPITECH PROJECT, 2017
** main for my_ls
** File description:
** mathieu gery
*/

#include <stdio.h>
#include "my.h"

int main(int ac, char **av)
{
	if (ac == 1)
		my_ls(".", 0);
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'l')
		my_ls_l(".");
	else if (ac == 2)
		my_ls(av[1], 0);
	if (ac > 2)
		flag(ac, av);
	return (0);
}

void flag(int ac, char **av)
{
	int i = 0;

	while (ac != i) {
		if (av[i][0] == '-' && av[i][1] == 'l') {
			if (i == 2)
				my_ls_l(av[i - 1]);
			else
				my_ls_l(av[i + 1]);

		}
		i++;
	}
}
