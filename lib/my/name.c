/*
** EPITECH PROJECT, 2017
** name function for my_ls
** File description:
** mathieu gery
*/
#include "my.h"

void name(char *av)
{
	struct stat filepath;
	struct passwd *pwuser;
	struct group *grpname;
	stat(av, &filepath);

	pwuser = getpwuid(filepath.st_uid);
	grpname = getgrgid(filepath.st_gid);

	my_putstr(" ");
	my_putstr(pwuser->pw_name);
	my_putstr(" ");
	my_putstr(grpname->gr_name);
	my_putstr(" ");
}
