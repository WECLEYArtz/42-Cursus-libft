/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:05:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:35 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_ptr;
	unsigned char	*str2_ptr;

	str1_ptr = (unsigned char *)str1;
	str2_ptr = (unsigned char *)str2;
	// if (str1_ptr == NULL && str2_ptr == NULL)
	// 	return (0); // all mem functions
	while (n--)
	{
		if (*str1_ptr != *str2_ptr)
			return (*str1_ptr - *str2_ptr);
		str1_ptr++;
		str2_ptr++;
	}
	return (0);
}
