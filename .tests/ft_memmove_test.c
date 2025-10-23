/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:27 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		len;
	char	test_str[100] = "0123456789abcdefghijklmnopqrstuvwxzy";
	char	test_target[100];
	char	*src;
	char	*dest;

	src = test_target + 10;
	dest = test_target;
	len = 3;
	strcpy(test_target, test_str);
	memmove(dest, src, len);
	printf("memmset():\t%s\n\n", test_target);
	strcpy(test_target, test_str);
	ft_memmove(dest, src, len);
	printf("ft_memmset():\t%s\n\n", test_target);
}

//  DIAGRAM
//   a , b , c , d , e , f
//
//	(dst - src = 0)
// [ - , - , - , - ] dst
// [ - , - , - , - ] src
//
//	(dst - src > 0)
// [ - , - , - , - ]         dst
//         [ - , - , - , - ] src
//
//
//	(dst - src < 0)
//         [ - , - , - , - ] dst
// [ - , - , - , - ]         src
//
// dst - src = 0: start from begining
// dst - src > 0: src behind, start from begining
// dst - src < 0: src advanced , start from  its end

