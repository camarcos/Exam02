#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int n1 = 0;
    int n2 = 0;
    int result = 0;
    if(ac == 4)
    {
        n1 = (atoi(av[1]));
        n2 = (atoi(av[3]));
        if(av[2][0] == '+')
            result = n1 + n2;
        if(av[2][0] == '-')
            result = n1 - n2;
        if(av[2][0] == '/')
            result = n1 / n2;
        if(av[2][0] == '*')
            result = n1 * n2;
        printf("%d\n", result);
    }
    else
        write(1, "\n", 1);
    return(0);
}