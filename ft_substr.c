/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:36:02 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 05:36:16 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_better_size(size_t s_len, int start, size_t len)
{
	size_t	diff;

	diff = ((start) + len) - s_len;
	if (diff > 0)
		return (len - diff);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	mem = malloc(ft_better_size(s_len, start, len) + 1);
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, &s[start], len + 1);
	return (mem);
}
