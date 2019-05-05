/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** mathieu gery
*/
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>

int my_put_nbr(int nb);
int my_strlen(char const *str);
void my_putstr(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int my_ls(char *av, int x);
int my_ls_l(char *av);
void type(char *av);
void flag(int ac, char **av);
void rights(char *av);
void size(char *av);
void date(char *av);
void name(char *av);
char *my_strcat(char *str, char *str2);
