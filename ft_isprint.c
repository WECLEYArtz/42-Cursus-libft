/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:05:01 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:27 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	for (size_t i = 0; i <= 256; i++)
// 	{
// 		printf("%ld : %u ", i, ft_isprint(i));
// 		printf("| %d\n", isprint(i));
// 	}
// }
