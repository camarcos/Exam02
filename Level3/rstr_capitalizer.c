#include <unistd.h>
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i])
            {
                if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                    av[1][i] += 32;
                if((av[1][i] >= 'a' && av[1][i] <= 'z') && (av[1][i+1] == '\0' || av[1][i+1] == ' ' || av[1][i+1] == '\t'))
                    av[1][i] -= 32;
                write(1, &av[1][i++], 1);
            }
    }
    write(1, "\n", 1);
    return(0);
}

// Write a program that takes one or more strings and, for each argument, puts
// the last character that is a letter of each word in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// A letter is a character in the set [a-zA-Z]

// If there are no parameters, display \n.

// Examples:
// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A firsT littlE tesT$