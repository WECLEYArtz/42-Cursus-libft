/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:28 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int chr)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (*str_ptr && *str_ptr != (char)chr)
		str_ptr++;
	return (str_ptr);
}
