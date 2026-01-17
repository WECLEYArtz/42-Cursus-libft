/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:05:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:35 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	long	*dst_l;

	if (!len || !dest)
		return ;
	dst_l = (long *)dest;
	while (len >= sizeof(long))
	{
		*(long*)dst_l++ = 0;
		len -= sizeof(long);
	}
	dest = ((char *)dst_l);
	while (len--)
		*(char*)dest++ = 0;
}
