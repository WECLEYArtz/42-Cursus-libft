#include "../libft.h"

#include <stdio.h>

int	main(void)
{
	char	*test;
	int		start;
	int		len;


	test = "0123456789";
	start = 60;
	len = 0;

	test = ft_substr(test, start, len);
	printf("%s\n", test );
}

// NEOVIM
// set mp=cc\ *.c\  &&\ ./a.out
// cc ft_substr.c ft_calloc.c ft_strlcpy && ./a.out
//
//  [             ]
// "abcd123xyzballs"  = 15 src
// .      [       ]
// start = 6
// len =  12
//
//
// (6) + 12 ) - 15
// 3
//
//
