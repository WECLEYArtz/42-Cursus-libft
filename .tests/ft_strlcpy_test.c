/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:22 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:28 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	char *src = NULL;
	// char *dest = NULL;

	// ft_strlcpy(dest, src, 1);
	strlcpy(dest, src, 0);
	printf("%s\n", dest);
}

// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc % ../libft.a && ./a.out
