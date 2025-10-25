/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:27 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_work;
	unsigned char	*src_work;

	if (!(dst || src))
		return NULL;
	if (dst - src <= 0)
	{
		dst_work = dst;
		src_work = (unsigned char *)src;
		while (len--)
			*dst_work++ = *src_work++;
	}
	else
	{
		dst_work = dst + (len - 1);
		src_work = (unsigned char *)src + (len - 1);
		while (len--)
			*dst_work-- = *src_work--;
	}
	return (dst);
}
