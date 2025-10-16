/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:04:54 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/16 12:04:55 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	for (size_t i = 0; i <= 256; i++)
// 	{
// 		printf("%ld : %u ", i, ft_isascii(i));
// 		printf("| %d\n", isascii(i));
// 	}
// }
