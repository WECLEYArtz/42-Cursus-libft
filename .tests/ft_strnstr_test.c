#include "../libft.h"
#include <stddef.h>
// #include <bsd/string.h>	// for linux
#include <string.h>		// for macos
#include <stdio.h>

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = NULL;
	needle = "1234helloworld";

	printf("\nlib:		%s", strnstr(haystack, needle, 20));
	printf("\nftlib:	%s", ft_strnstr(haystack, needle, 20));
}

// [       `     ]
// [test1234helloworld], asked for :len :(13), haystack_len: (18)
// [       ]    `
//        [hello],5


// logically only need to search	(13 - 5 ) = 8
// if asked to search 12 take 12
// if asked to search 16 take 14
// pick smallest between the two

// [test123helloworld],17 haystack
//      [123hellworld],12

// if asked to search 12
// logically only need to search	(17 - 12 + 1) = 6

// NEOVIM
// set mp=cc\ %\ ../libft.a\ &&\ ./a.out
