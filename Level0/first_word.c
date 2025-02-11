#include <unistd.h>

int main(int ac, char **av)
{
        int i = 0;
        if(ac == 2)
        {
                while(av[1][i] == 9 || av[1][i] == 32)
                        i++;
                while(av[1][i] && av[1][i] != 32 && av[1][i] != 9)
                {
                        write(1, &av[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
        return(0);
}
// escribe solo la primera palabra seguido de un salto de linea 
// solo puede existir un argumento ademas del nobre del programa (2)
// las palabras estan delimitadas por espacios o tabulaciones
// si hay nada escribe un salto de linea

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:
// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
