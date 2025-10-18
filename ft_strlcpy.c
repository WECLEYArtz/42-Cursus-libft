#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		while (--dstsize)
			*dst++ = *src++;
		dst = 0;
	}
	return (srclen);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	dst[10] = "test";
// 	char	*src;
//
// 	src = "icals";
// 	// strlcpy(0, 0, 4);
// 	ft_strlcpy(0, 0, 4);
// 	printf("%s\n", dst);
// }
