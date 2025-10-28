/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:41:28 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/28 15:00:49 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_memusable(void *mem)
{
	if (!mem)
		return (0);
	return (1);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count && size && ((count * size) / size) != count)
		return (NULL);

	mem = malloc(count * size);
	if (!ft_memusable(mem))
		return (0);
	ft_bzero(mem, (count * size));
	return (mem);
}
