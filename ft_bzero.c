/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:05:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/16 12:05:04 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	ft_bzero(void *dest, size_t len)
{
	if(len)
		ft_memset(dest,0,len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int		len;
// 	int		offset;
// 	char	test_str[100] = "The bzero() function writes len bytes of value c (converted to an unsigned char) to the string b";
// 	// char test_str[100] = "The bzero() function writes len bytes of value c (converted to an unsigned char) to the string b";
// 	char	test_target[100];
//
// 	len = 10;
// 	offset = 10;
//
// 	strcpy(test_target, test_str);
// 	printf("bzero():\nthen:\t%s\n", test_target);
// 	ft_bzero(test_target + offset,  len);
// 	printf("now:\t%s\n", test_target);
//
// 	strcpy(test_target, test_str);
// 	printf("bzero():\nthen:\t%s\n", test_target);
// 	bzero(test_target + offset,  len);
// 	printf("now:\t%s\n", test_target);
// }
