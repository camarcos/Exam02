#include <stdlib.h>

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **split;
    if(!(split = (char **)malloc(sizeof(char *) * 256)))
        return(NULL);
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        if(!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return(NULL);
        while(str[i] != ' ' && str[i] == '\t' && str[i] == '\n' && str[i])
            split[k++] = split[i++];
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        split [k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return(split);
}

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:
// char    **ft_split(char *str);