/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:34:47 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 01:00:20 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_abort(char **mem_ptr_arr)
{
	size_t	i;

	i = 0;
	while (mem_ptr_arr[i])
		free(mem_ptr_arr[i++]);
	free(mem_ptr_arr);
	return (NULL);
}

static size_t	ft_tokkenscount(char const *s, char c)
{
	size_t	wd_count;

	wd_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			wd_count++;
			s++;
		}
		while (*s && *s != c)
			s++;
	}
	return (wd_count);
}

static void	*ft_allocatetokkens(char **mem_ptr_arr, const char *s, char c)
{
	size_t	i;
	size_t	wd_len;

	i = 0;
	while (*s)
	{
		wd_len = 0;
		while (*s && *s != c)
		{
			s++;
			wd_len++;
		}
		mem_ptr_arr[i] = malloc((wd_len + 1) * sizeof(char));
		if (!mem_ptr_arr[i])
			return (NULL);
		ft_strlcpy(mem_ptr_arr[i++], s - wd_len, wd_len + 1);
		while (*s && *s == c)
			s++;
	}
	return (mem_ptr_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**mem_ptr_arr;
	size_t	tokken_count;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	tokken_count = ft_tokkenscount(s, c);
	mem_ptr_arr = malloc((tokken_count + 1) * sizeof(char **));
	if (!mem_ptr_arr || !ft_allocatetokkens(mem_ptr_arr, s, c))
		return (ft_abort(mem_ptr_arr));
	mem_ptr_arr[tokken_count] = NULL;
	return (mem_ptr_arr);
}
