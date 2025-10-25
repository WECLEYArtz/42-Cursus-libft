#include "../libft.h"

#include <stdio.h>

int	main(void)
{
	char	*test;
	int		start;
	int		len;


	test = "0123456789";
	start = 2;
	len = 4;

	test = ft_substr(test, start, len);
	printf("%s\n", test );
}

// NEOVIM
// set mp=cc\ %\ ../ft_memset.c\ ../ft_strlcpy.c\ ../ft_bzero.c\ ../ft_substr.c\ ../ft_calloc.c\ ../ft_strlen.c\ &&\ ./a.out
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
