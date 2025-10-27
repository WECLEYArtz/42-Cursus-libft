/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:35:41 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 05:36:15 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	strlen;
	char	*str;

	if (!s || !f)
		return (NULL);
	strlen = ft_strlen(s);
	str = malloc(strlen + 1);
	if (!strlen)
		return (NULL);
	str[strlen--] = 0;
	while (strlen)
	{
		str[strlen] = f(strlen, str[strlen]);
		strlen--;
	}
	return (str);
}
