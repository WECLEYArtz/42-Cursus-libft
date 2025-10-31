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
#include <string.h>

int	main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	int result;
	dest[0] = 'B';

	result = ft_strlcat(dest, src, 0);

	memset(dest, 'C', 5);
	result = ft_strlcat(dest, src, -1);
}

// [55555                         ]	dest_actualsize = 30;
// [AAAAAAAAA]	src_len = 9;

// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc % ../libft.a && ./a.out

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
