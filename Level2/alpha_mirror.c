#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = ('A' + 'Z') - av[1][i];
            else if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = ('a' + 'z') - av[1][i];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

// Escribe un programa llamado alpha_mirror que tome una cadena y muestre esta cadena
// después de reemplazar cada carácter alfabético por el carácter alfabético opuesto
// carácter, seguido de una nueva línea.
 
// 'a' se convierte en 'z', 'Z' se convierte en 'A'
// 'd' se convierte en 'w', 'M' se convierte en 'N'

// Si el número de argumentos no es 1, muestra solo una nueva línea.
 
// Examples:
// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $