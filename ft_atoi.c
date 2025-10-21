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

// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>
//
// // NEOVIM
// // set mp=cc\ %\ \ft_isdigit.c\ &&\ ./a.out
// int	main(void)
// {
// 	char	*test;
//
// 	// test = "-0"; // the uh
// 	// test = "0"; // the uh
// 	// test = "1"; // the uh
// 	// test = "-2147483648"; // int min
// 	// test = "2147483647"; // int max
// 	// test = "-2147483649"; // overflow to int max
// 	// test = "-2147483648"; // overflow to int max
// 	// test = " r\n\r\v\f\t-1993acbd"; // random dogshit
// 	// test = "2147483648"; // overflow to int max
//
// 	// test = "922337203685477580"; // long long max - digit;
// 	// test = "9223372036854775807"; // long long max
// 	// test = "-9223372036854775808"; // long long min
// 	// test = " 9223372036854775808"; // long long max + 1	has to be -1;
// 	// test = "-9223372036854775809"; // long long min - 1		 has to be 0;
//
//
// 	// test = " 9999999999999999999"; // long long max + allot	 has to be -1;
// 	// test = "-9999999999999999999"; // long long min - allot		 has to be 0;
//
// 	printf("\natoi:	%d", atoi(test));
// 	printf("\nft_atoi:	%d\n", ft_atoi(test));
// }
