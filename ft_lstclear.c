/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 03:07:31 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 04:11:41 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	if (!lst || !(*lst))
		return;
	while(next)
	{
		next=(*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
