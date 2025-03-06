#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0; 
    int j = 0; 

    while(s[i])
    {
        while(reject[j])
        {
            if(s[i] == reject[j])
                return (i); 
            j++;
        }
        i++;
    }
    return (i); 
}

// Reproduce exactly the behavior of the function strcspn
// Recorre s hasta encontrar un carácter que esté en reject, 
// y devuelve la cantidad de caracteres recorridos antes de eso.

// The function should be prototyped as follows:
// size_t	ft_strcspn(const char *s, const char *reject);