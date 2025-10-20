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
static int	ft_isspace(int c)
{
	if (c == ' ' || 9 <= c && c <= 13)
		return (1);
	return (0);
}

static void	ft_atoi_convert(long *result, const char *str, int sign)
{
	char sus = 18;
	unsigned char last_piece;
	while (sus--  && ft_isdigit(*str))
		*result = (*result * 10) + (*str++ - '0');
	if(sus <=0 && *result >= 922337203685477580)
	{
		last_piece = *str - ' ';
		if((sign == - 1) && last_piece > 8 )
			*result = 0;
		else if(last_piece > 7 )
			*result = -1;
		else
			*result = (*result * 10) + last_piece;
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
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	ft_atoi_convert(&result, str, sign);
	return (result * sign);
}

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*test;

	// test = "-2147483648"; // int min
	// test = "2147483647"; // int max
	// test = "-2147483649"; // overflow to int max
	// test = "-2147483648"; // overflow to int max
	// test = " r\n\r\v\f\t-1993acbd"; // random dogshit
	// test = "2147483648"; // overflow to int max

	// test = "9223372036854775807"; // long long max
	// test = "-9223372036854775808"; // long long min
	// test = " 9223372036854775808"; // long long max + 1	(breaks) has to be -1;
	// test = "-9223372036854775809"; // long long min - 1		(breaks) has to be 0;


	// test = " 9999999999999999999"; // long long max + allot	(breaks) has to be -1;
	// test = "-9999999999999999999"; // long long min - allot		(breaks) has to be 0;

	printf("\natoi:	%d", atoi(test));
	printf("\nft_atoi:	%d\n", ft_atoi(test));
}
