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
	char	dst[10] = "test";
	char	*src;

	src = "icals";
	strlcpy(0, 0, 4);
	// ft_strlcpy(0, 0, 4);
	printf("%s\n", dst);
}
