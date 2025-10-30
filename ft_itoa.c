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

size_t	ft_digits_count(int n)
{
	size_t	digits_count;

	if (n == 0)
		return (1);
	digits_count = 0;
	if (n < 0)
		digits_count++;
	while (n)
	{
		digits_count++;
		n /= 10;
	}
	return (digits_count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digits_count;

	digits_count = ft_digits_count(n);
	str = malloc(digits_count + 1);
	if (!str)
		return (NULL);
	str[digits_count] = 0;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--digits_count] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

// (check)
