/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:05:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:28 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*dest_work;

	dest_work = (unsigned char *)dest;
	while (len-- > 0)
		*dest_work++ = (unsigned char)c;
	return (dest);
}

#include <stdio.h>
#include <string.h>

// [ test 1 ]
// int	main(void)
// {
// 	int		len;
// 	int		offset;
// 	char	test_str[100] = "The memset() function writes len bytes of value c (converted to an unsigned char) to the string b";
// 	char	test_target[100];
//
// 	len = 10;
// 	offset = 10;
// 	strcpy(test_target, test_str);
// 	printf("memset():\nthen:\t%s\n", test_target);
// 	printf("now:\t%s\n\n",
// 			(char *)memset(test_target + offset, '.', len) - offset
// 			);
// 	strcpy(test_target, test_str);
// 	printf("ft_memset():\nthen:\t%s\n", test_target);
// 	printf("now:\t%s\n",
// 			(char *)ft_memset(test_target + offset, '.', len) - offset
// 			);
// }

// [ test 2 ] (experimenting)
int	main(void)
{
	unsigned char	test[4] = {0};

	// ft_memset(test		, 57, 1);
	// ft_memset(test + 1	, 5, 1);

	// memset(test		, 0, 0);
	// memset(test + 1	, 0, 0);
	printf("%d", ((int *)test)[0]); // achieving 256
}
// [1|1|1|1|1|1|1|1]   [1|0|0|0|0|0|0|1]   [0|0|0|0|0|0|1|0]   [0|0|0|0|0|0|0|1]
// 255                 129                 2                   1
