/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:36:02 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:36 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static size_t	ft_better_size(size_t s_len, int start, size_t len)
{
	size_t	diff;

	diff = (s_len - start);
	if (diff < len)
		return (diff);
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
