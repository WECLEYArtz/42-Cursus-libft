/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:35:08 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 05:36:14 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = 0;
}

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*new_str;

	str_len = ft_strlen(str);
	new_str = malloc(str_len + 1);
	if (!new_str)
		return (0);
	ft_strcpy(new_str, str);
	return (new_str);
}
