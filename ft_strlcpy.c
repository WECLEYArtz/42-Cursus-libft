/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:22 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:58:23 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slots;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize < srclen)
		slots = dstsize;
	else
		slots = srclen;
	if (slots > 0)
	{
		while (--slots)
			*dst++ = *src++;
		*dst = 0;
	}
	return (srclen);
}

// #include "libft.h"
//
// size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t    src_len;
//
// 	src_len = ft_strlen(src);
// 	if (src_len + 1 < dstsize)
// 		ft_memcpy(dst, src, src_len + 1);
// 	else if (dstsize != 0)
// 	{
// 		ft_memcpy(dst, src, dstsize - 1);
// 		dst[dstsize - 1] = 0;
// 	}
// 	return (src_len);
// }
