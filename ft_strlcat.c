/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:59:04 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	available;

	src_len = ft_strlen(src);
	if (!dst && !dst_size)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_size > dst_len)
	{
		available = dst_size - dst_len;
		if ((size_t)available >= src_len + 1)
			available = src_len + 1;
		ft_strlcpy(dst + dst_len, src, available);
		return (dst_len + src_len);
	}
	else
		return (dst_size + src_len);
}
