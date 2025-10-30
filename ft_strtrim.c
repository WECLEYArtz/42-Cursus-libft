/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:35:59 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:36 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int is_set(char const *set, char const chr)
{
	char *result = ft_strchr(set, chr);
	if (!result || !result[0])
		return 0;
	return 1;

};
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_max;

	if (!s1)
		return (NULL);
	if (!s1[0] || !set || !set[0])
		return (ft_strdup(s1));
	while (*s1 && is_set(set, s1[0]))
		s1++;
	len_max = ft_strlen(s1);
	while (s1[len_max - 1] && is_set(set, s1[len_max - 1]))
		len_max--;
	return (ft_substr(s1, 0, len_max));
}
