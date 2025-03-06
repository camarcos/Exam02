#include <stdlib.h>
char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;
	while(src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if(dest == NULL)
		return(NULL);
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);

}
// Reproduce the behavior of the function strdup (man strdup).
// Copia en la cadena de dstino la cadena de origen.

// Your function must be declared as follows:
// char	*ft_strdup(char *src);

