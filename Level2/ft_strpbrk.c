char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    if(!s1 || !s2)
        return(0);
    while(*s1)
    {
        i = 0;
        while(s2[i])
        {
            if(*s1 == s2[i])
                return((char *) s1);
            i++;
        }
        s1++;
    }
    return(0);
}

// Reproduce exactly the behavior of the function strpbrk
// Devuelve un puntero al caracter 
// Busca la primera aparicion en una cadena de cualquiera de los caracteres especificados

// The function should be prototyped as follows:
// char	*ft_strpbrk(const char *s1, const char *s2);