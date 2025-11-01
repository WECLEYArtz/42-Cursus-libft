/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:22 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:36 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*last_occ;

	if (!chr)
		return ((char *)&str[ft_strlen(str)]);
	last_occ = 0;
	while (*str)
	{
		if (*str == (char)chr)
			last_occ = (char *)str;
		str++;
	}
	return (last_occ);
}
