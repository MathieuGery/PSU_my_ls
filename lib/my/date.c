
/*
** EPITECH PROJECT, 2017
** date function for my_ls
** File description:
** mathieu gery
*/

#include "my.h"

void date(char *av)
{
        struct stat filestat;
	char *time;

	stat(av, &filestat);
	time = ctime(&filestat.st_ctime);
	time = &time[4];

	for (int i = 0; i < 12; i++)
		my_putchar(time[i]);
}
