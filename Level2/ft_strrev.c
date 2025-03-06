char *ft_strrev(char *str)
{
	int i;
	int len = 0;
	char temp;
	while(str[len])
		len++;
	i = -1;
	while(++i < --len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
	return(str);
}
// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:
// char    *ft_strrev(char *str);