#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_work;
	unsigned char	*src_work;

	dst_work = dst;
	src_work = (unsigned char *)src;
	while (len--)
		*dst_work++ = *src_work++;
	return (dst);
}
