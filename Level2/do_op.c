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

// Escribe un programa que tenga tres cadenas:
// - El primero y el tercero son representaciones de números enteros con signo de base 10.
//   que caben en un int.
// - El segundo es un operador aritmético elegido entre: + - * / %

// El programa debe mostrar el resultado de la operación aritmética solicitada,
// seguido de una nueva línea. Si el número de parámetros no es 3, el programa
// solo muestra una nueva línea.

// Puede asumir que la cadena no tiene errores ni caracteres extraños. Negativo
// Los números, en entrada o salida, tendrán uno y solo un '-' inicial. El
// El resultado de la operación cabe en un int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$