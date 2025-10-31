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

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;
	size_t	slots;

	src_len = ft_strlen(src);
	if (dst_size)
	{
		if (src_len + 1 <= dst_size)
			slots = src_len;
		else
			slots = dst_size -1;
		ft_memcpy(dst, src, slots);
		dst[slots] = 0;
	}
	return (src_len);
}
