/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:35:53 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 05:36:15 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_max;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (0);
	len_max = len - needle_len + 1;
	// if (len > len_max) // scary
	// 	len = len_max;
	i = 0;
	while (len_max--)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				needle_len) == 0)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
