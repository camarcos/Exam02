#include <unistd.h>

int main(int ac, char **av)
{
    int start;
    int actual_word;
    int flag;
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
                i--;
            actual_word = i;
            while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            start = i + 1;
            flag = start;
            while(start <= actual_word)
            {
                write(1, &av[1][i], 1);
                start++;
            }
            if(flag)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:
// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $