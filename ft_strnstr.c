#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_max;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (0);
	len_max = len - needle_len + 1;
	// if (len > len_max) // scary
	// 	len = len_max;
	i = 0;
	while (len_max--)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				needle_len) == 0)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}

#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = "test1234helloworld......";
	needle = "1234helloworld";
	printf("\nlib:		%s", strnstr(haystack, needle, 20));
	printf("\nftlib:	%s", ft_strnstr(haystack, needle, 20));
}

// [       `     ]
// [test1234helloworld], asked for :len :(13), haystack_len: (18)
// [       ]    `
//        [hello],5

// ft_strnstr(needle, haystack, 13);

// logically only need to search	(13 - 5 ) = 8
// if asked to search 12 take 12
// if asked to search 16 take 14
// pick smallest between the two

// [test123helloworld],17 haystack
//      [123hellworld],12

// if asked to search 12
// logically only need to search	(17 - 12 + 1) = 6
