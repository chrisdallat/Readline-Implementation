#include "../include/list.h"

char* my_strcat(char* dest, char* src)
{
    char* ptr = dest + strlen(dest);

    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';

    return dest;
}

char *my_strchr(char *str, char c)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
          if (str[i] == c)
          {
               return str;
          }
          i++;
    }
    return (NULL);
}

char *my_readline(int fd)
{

    char buffer[READLINE_READ_SIZE + 1];
    char *str = malloc(MAX_LINE);
    static char content[MAX_LINE];
    long int n_read;
    int i = 0;
    int j = 0;

    //for final call, if there are newlines at end of textfile
    if (content[0] == '\n' && content[1] == '\0')
    {
        str[i] = content [i];
        str[i+1] = '\0';
        content[i] = '\0';
        return str;
    }
    
    //if data in content string with a newline char present then print next line
    if (my_strchr(content, '\n') != NULL && content[1] != '\0')
    {
    
        for (i = 0; content[i] != '\0'; i++)
        {
            if (content[i] == '\n') //if new line char write content up to that point to the return string
            {
                while (j < i)
                {
                    str[j] = content[j];
                    j++;
                }
                str[j] = '\0'; //null terminate return string

                //need to erase content up to after newline char
                //in this cycle to maintain position variables!!

                j++;   //skip index of '\n'
                i = 0; //reset i to be start of string
                while (content[i + j] != '\0')
                {
                    content[i] = content[i + j]; //move content back to beginning of string
                    i++;
                }
                content[i] = '\0'; //null terminate the content string again once moved

                return str;
            }
        }
    }

    while ((n_read = read(fd, buffer, READLINE_READ_SIZE)) > 0)
    {

        my_strcat(content, buffer); //add buffer to content string

        for (i = 0; content[i] != '\0'; i++)
        {
            if (content[i] == '\n') //if new line char write content up to that point to the return string
            {
                while (j < i)
                {
                    str[j] = content[j];
                    j++;
                }
                str[j] = '\0'; //null terminate return string

                //need to erase content up to after newline char
                //in this cycle to maintain position variables!!

                j++;   //skip index of '\n'
                i = 0; //reset i to be start of string
                while (content[i + j] != '\0')
                {
                    content[i] = content[i + j]; //move content back to beginning of string
                    i++;
                }
                content[i] = '\0'; //null terminate the content string again once moved

                return str;
            }
        }
    }
    return NULL;
}