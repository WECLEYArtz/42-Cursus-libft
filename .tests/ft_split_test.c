#include "../libft.h"
#include <stddef.h>
#include <stdio.h>
int main( int argc, char **argv)
{
	char **test;
	size_t i = 0;
	if (argc != 3)
	{
		char *str = "  testing123  42  ";
		char dlmt = ' ';
		test = ft_split(str, dlmt);
	}
	else{
		test = ft_split(argv[0], *argv[1]);
	}
	while(test[i])
	{
		printf("%s\n",test[i]);
		free(test[i++]);
	}
	free(test);
}

// NEOVIM MKPG
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
