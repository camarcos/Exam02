#include <unistd.h>

int main(int ac, char **av)
{
        int i = 0;
        if(ac == 2)
        {
                while(av[1][i])
                        i++;
                while(i)
                        write(1, &av[1][--i], 1);
        }
        write(1, "\n", 1);
        return(0);
}

// Write a function that takes a string, and displays the string in reverse
// followed by a newline.

// The original string must not be modified.

// You must return the string passed as a parameter.

// Your function must be declared as follows:
// char *rev_print(char *str);
