#include "../include/list.h"

int main() 
{
    char *str = NULL;

    int fd = open("./file.txt", O_RDONLY);

    while ((str = my_readline(fd)) != NULL)
    {
        printf("%s\n", str);
        free(str);
    }
    //can use standard input in terminal by using following code and comment out the above filehandling:
    //printf("%s", my_readline(0));
    
    close(fd);
    return 0;
}