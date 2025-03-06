#include <unistd.h>

void write_nb(int num)
{
        char str[10] = "0123456789";
        if(num > 9)
                write_nb(num / 10);
        write(1, &str[num % 10 ], 1);
}

int main()
{
        int i = 1;
        while(i <= 100)
        {
                if(i % 15 == 0)
                        write(1, "fizzbuzz", 8);
                else if(i % 3 == 0)
                        write(1, "fizz", 4);
                else if(i % 5 == 0)
                        write(1, "buzz", 4);
                else
                        write_nb(i);
                i++;
                write(1, "\n", 1);
        }
}
// escribe una palabra en funcion del numero que se introduce en el parametro
// si es multiplo de 3 fizz, si es de 5 buzz y si es de ambos fizzbuzz(15)
// se debe hacer previamente el cambio para que lea los nemros por digitos
// debe leer hasta los 100 primeros numeros incluido el 0

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:
// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// $>