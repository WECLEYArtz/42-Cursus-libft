/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:04:57 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:27 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	for (size_t i = 0; i <= 256; i++)
// 	{
// 		printf("%ld : %u ", i, ft_isdigit(i));
// 		printf("| %d\n", isdigit(i));
// 	}
// }
