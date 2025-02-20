#include <unistd.h>
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            if(i == 0 || av[1][i-1] == ' ' || av[1][i-1] == '\t')
            {
                if(av[1][i] >= 'a' && av[1][i] <= 'z')
                    av[1][i] -= 32;
            }
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] += 32;
            write(1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$