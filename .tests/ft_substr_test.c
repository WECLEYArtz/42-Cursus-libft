#include "../libft.h"


#include <stdio.h>

int	main(void)
{
	char	*test;
	char	*result;
	int		start;
	int		len;


	test = "niggerification";
	// start = 0;
	// len = 42000;
	// result = ft_substr(test, start, len);
	result = ft_substr("hola", 0, -1);
	printf("%s\n", result);
	// ft_substr("tripouille", 0, 42000);
	free(result);
}

// NEOVIM
// set mp=cc\ -g\ %\ ../ft_memset.c\ ../ft_strlcpy.c\ ../ft_bzero.c\ ../ft_substr.c\ ../ft_calloc.c\ ../ft_strlen.c\ &&\ ./a.out
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out



// cc ft_substr.c ft_calloc.c ft_strlcpy && ./a.out
//
// |  ball| slen
// |......| len
// |  ....| start - len
// s_len = 4
// start = 2
// len =  6
//
//
//
//
// |    ball| slen
// |................| len
// |    ............| start - len
// s_len = 4
// start = 2
// len =  6
//
//
//
// |   ball| slen
// |......| len
// |   ...| start - len
// s_len = 4
// start = 3
// len =  6
