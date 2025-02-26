#include <unistd.h>
int atoi(char *str)
{
    int result = 0;
    while(str)
        result = result * 10 + *str++ - '0';
    return(result);
}

void printhex(int n)
{
    char hexa[] = "0123456789abcde";
    if( n >= 16)
        printhex(n / 16);
    write(1, &hexa[n % 16], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
        printhex(atoi(av[1]));
    write(1, "\n", 1);
}

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:
// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $