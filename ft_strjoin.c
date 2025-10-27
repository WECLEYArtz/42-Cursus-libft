/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:35:22 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 05:36:14 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*mem;

	if (!s1[0] && !s2[0])
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	mem = malloc((s1_len + s2_len) + 1);
	if (!mem)
		return (NULL);
	ft_strlcat(mem, s1, s1_len + 1);
	ft_strlcat(mem + s1_len, s2, s2_len + 1);
	return (mem);
}
