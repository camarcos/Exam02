#include <unistd.h>
int ft_atoi(const char *str)
{
    int rest = 0;
    int sing = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '-')
        sing = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
        rest = (*str * 10) + (*str - '0');
    return(sing * rest);
}

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:
// int	ft_atoi(const char *str);
