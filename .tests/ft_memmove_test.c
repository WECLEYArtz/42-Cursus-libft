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
	char	test_str[100] = "0123456789abcdefghijklmnopqrstuvwxzy";
	char	test_target[100];

	// char	*src = test_target + 10;;
	// char	*dest = test_target;;

	char	*src = NULL;
	char	*dest = test_target;
	int		len = 0;

	char *result = memmove(dest, src, len);
	// char *result = ft_memmove(dest, src, len);
	printf("%s", result);
}

// NEOVIM
// set mp=cc\ %
