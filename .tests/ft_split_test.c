#include "../libft.h"
#include <stddef.h>
#include <stdio.h>
int main( int argc, char **argv)
{
	char **test;
	size_t i = 0;
	if (argc != 3)
	{
		char *str = "";
		char dlmt = '.';
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

// "....testing...1234..." "."	> "testing", "1234"
// "testing...1234" "."			> "testing", "1234"
// "....testing1234...." "."	> "testing", "1234"
// "..................." "."	> ""
// "" ""						> ""
// 0 "."						> (null)
// "test" 0						> "test"
// "/200test/200test/200" "/200"> idk
//
//
// NEOVIM
// set mp=cc\ %\ ../ft_split.c\ ../ft_strlen.c\ ../ft_strlcpy.c\ &&\ ./a.out
