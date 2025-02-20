#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int n1 = atoi(av[1]);
    int n2 = atoi(av[2]);
    if(ac == 3)
    {
        while(n2)
        {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        printf("%d", n1);
    }
    printf("\n");
    return(0);
}

// Write a program that takes two strings representing two strictly positive
// integers that fit in an int, mcd.

// Display their highest common denominator followed by a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.

// Examples:
// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e
// 1$
// $> ./pgcd | cat -e
// 