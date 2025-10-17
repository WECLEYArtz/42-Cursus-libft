#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dst && src && (dstsize > 0))
	{
		while (--dstsize)
			*dst++ = *src++;
		dst = 0;
	}
	return (srclen);
}

#include <string.h>
#include <stdio.h>
int main(){
	char 	 dst[10] = "test";
	char	*src = "icals";
	strlcpy(dst, src, 4);
	printf("%s\n",dst);
}
