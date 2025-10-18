#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	available;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if ((available = dst_size - dst_len) > 0)
	{
		ft_strlcpy(dst + dst_len, src, available);
		return (dst_len + src_len);
	}
	else
		return (dst_size + src_len);
}
//
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	dst_tset[12] = "12345";
// 	char	*src_test;
//
// 	src_test = "6789....";
// 	ft_strlcat(dst_tset, src_test, 10);
// 	printf("%s", dst_tset);
// }




// [ - , - , - , - ]             dst_len
//
// [ - , - , - , - , - , - , - ] DST_SIZE
//                 [           ] available ( dst_size - dst_len < 3 )
//                 [ - , - ] 0 ] tried     ( dst_len + src_len )
//
// Both (src > available) and (src <= available) are safely null terminated

// [ - , - , - , - , - , - , - ] dst_len
// [ - , - , - , - ]             DST_SIZE
//                               available ( dst_size - dst_len < -3 )

// [ - , - , - , - , - , - , - , 0 ] src_len
//
// [ - , - , - , - , - , - , - , 0 ] dst_len
// [ - , - , - , - , - , - , - ] DST_SIZE
//                               available ( dst_size - dst_len = 0 )
//                               tried     ( dst_size + src_len )

// [ - , - , - , - , - , - , 0 ]     src_len
//
// [ - , - , - , - , - , - , 0 ]     dst_len
// [ - , - , - , - , - , - , - ] DST_SIZE
//                               available ( dst_size - dst_len = 1 )
//                               tried     ( dst_size + src_len )
