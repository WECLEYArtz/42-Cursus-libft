/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 04:31:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/29 00:57:18 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (ft_lstclear(&newlst, del), NULL);
	current = newlst;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
			return (ft_lstclear(&newlst, del), NULL);
		current = current->next;
		lst = lst->next;
	}
	return (current);
}

//check
