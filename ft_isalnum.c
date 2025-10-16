/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:02:54 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/16 12:02:55 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	for (size_t i = 0; i <= 256; i++)
// 	{
// 		printf("%ld : %u ", i, ft_isalnum(i));
// 		printf("| %d\n", isalnum(i));
// 	}
// }
