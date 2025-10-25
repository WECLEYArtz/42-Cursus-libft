/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:30:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/20 17:48:11 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

static void	ft_atoi_convert(long *result, const char *str, int sign)
{
	int sus = 0;
	unsigned char last_digit;
	while (*str && sus != 18 && ft_isdigit(*str))
	{
		*result = (*result * 10) + (*str++ - '0');
		sus++;
	}
	if(sus == 18 && *str && *result >= LONG_MIN/10)
	{
		last_digit = *str - '0';
		if((sign == - 1) && last_digit > 8 )
			*result = 0;
		else if((sign == 1) && last_digit > 7 )
			*result = -1;
		else
			*result = (*result * 10) + last_digit;
	}
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || (*str == '-' && (sign = -1)))
		str++;
	ft_atoi_convert(&result, str, sign);
	return (result * sign);
}
