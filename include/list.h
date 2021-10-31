#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define READLINE_READ_SIZE 2
#define MAX_LINE 1025

#ifndef MY_READLINE_C
#define MY_READLINE_C

char *my_strcat(char*, char*);
char *my_strchr(char*, char);
char *my_readline(int);

#endif