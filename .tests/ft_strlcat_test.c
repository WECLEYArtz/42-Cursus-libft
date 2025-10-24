/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:28 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst_tset[12] = "12345";
	char	*src_test;

	src_test = "6789....";
	ft_strlcat(dst_tset, src_test, 10);
	printf("%s", dst_tset);
}

// [ - , - , - , - ]             dst_len
//
// [ - , - , - , - , - , - , - ] DST_SIZE
//                 [           ] available ( dst_size - dst_len < 3 )
//                 [ - , - ] 0 ] tried     ( dst_len + src_len )
//
// Both (src > available) and (src <= available) are safely null terminated

// [ - , - , - , - , - , - , - ] dst_len
// [ - , - , - , - ]             DST_SIZE
//                               available ( dst_size - dst_len < -3 )

// [ - , - , - , - , - , - , - , 0 ] src_len
//
// [ - , - , - , - , - , - , - , 0 ] dst_len
// [ - , - , - , - , - , - , - ] DST_SIZE
//                               available ( dst_size - dst_len = 0 )
//                               tried     ( dst_size + src_len )

// [ - , - , - , - , - , - , 0 ]     src_len
//
// [ - , - , - , - , - , - , 0 ]     dst_len
// [ - , - , - , - , - , - , - ] DST_SIZE
//                               available ( dst_size - dst_len = 1 )
//                               tried     ( dst_size + src_len )
