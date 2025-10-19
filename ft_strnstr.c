#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	size_t	len_max;

	if (!*needle)
		return ((char *)haystack);
	len_max = ft_strlen(haystack) - ft_strlen(needle) +1;
	if (len > len_max) // scary
		len = len_max;
	needle_len = ft_strlen(needle);
	i = 0;
	while (len--)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				needle_len) == 0)
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
	needle = "hello";
	printf("\nlib:		%s", strnstr(haystack, needle, 12));
	printf("\nftlib:	%s", ft_strnstr(haystack, needle, 12));
}

// [test1234helloworld],(12)18
//              [hello],5

// if asked to search 16
// logically only need to search	(18 - 5 + 1) = 14

















// [test123helloworld],17 haystack
//      [123hellworld],12

// if asked to search 12
// logically only need to search	(17 - 12 + 1) = 6
