#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_max;
	size_t	haystack_len;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (len - needle_len >= 0) // scary
		len_max = len - needle_len + 1;
	if (len > len_max) // scary
		len = len_max;
	i = 0;
	while (len--)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				len) == 0)
			return (char *)(&haystack[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = "test1234helloworld";
	needle = "1234helloworld";
	printf("\nlib:		%s", strnstr(haystack, needle, 10));
	printf("\nftlib:	%s", ft_strnstr(haystack, needle, 10));
}

//             V
// [test1234helloworld], asked for :(12), len: (18)
//        [hello],5

// logically only need to search	(12 - 5 +1 ) = 8
// if asked to search 12 take 12
// if asked to search 16 take 14
// pick smallest between the two

// [test123helloworld],17 haystack
//      [123hellworld],12

// if asked to search 12
// logically only need to search	(17 - 12 + 1) = 6
