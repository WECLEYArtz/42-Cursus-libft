/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:53:28 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:53:35 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits_count(long n)
{
	size_t	digits_count;

	if (n == 0)
		return (1);
	digits_count = 0;
	while (n)
	{
		digits_count++;
		n /= 10;
	}
	return (digits_count);
}

static void	ft_itoa_convert(char *str, long ln, size_t digits_count)
{
	if (ln < 0)
	{
		str[-1] = '-';
		ln = -ln;
	}
	str[digits_count] = 0;
	while (digits_count)
	{
		str[(digits_count-- - 1)] = ln % 10 + '0';
		ln /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*str;
	size_t	digits_count;

	ln = n;
	digits_count = ft_digits_count(ln);
	str = malloc(digits_count + (1 * (ln < 0)) + 1);
	if (!str)
		return (NULL);
	ft_itoa_convert(str + (1 * (ln < 0)), ln, digits_count);
	return (str);
}
