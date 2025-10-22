#include "libft.h"

static size_t ft_better_size(size_t s_len, int start, size_t len)
{
	size_t diff = ((start) + len ) - s_len ;
	if (diff > 0)
		return len - diff;
	return len;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	mem = malloc(ft_better_size(s_len, start, len) + 1);
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, &s[start], len + 1);
	return (mem);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*test;
// 	int		start;
// 	int		len;
//
//
// 	test = "0123456789";
// 	start = 60;
// 	len = 0;
//
// 	test = ft_substr(test, start, len);
// 	printf("%s\n", test );
// }

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
