#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int index;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				index = av[1][i] - 'a' + 1;
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				index = av[1][i] - 'A' + 1;
			else
				index = 1;
			while(index--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:
// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>