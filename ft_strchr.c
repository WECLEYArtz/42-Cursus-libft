/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:35 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	if (!chr)
		return ((char *)&str[ft_strlen(str)]);
	while (*str && *str != (char)chr)
		str++;
	if (!(*str))
		return (0);
	return ((char *)str);
}
