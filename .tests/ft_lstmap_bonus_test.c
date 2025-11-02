/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:32:55 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/27 22:30:34 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	*ft_strtoupper(void *str)
{
	char *charstr = str;
	while(*charstr)
	{
		*charstr = ft_toupper(*charstr);
		charstr++;
	}
	return str;
}

static void	ft_freelst(void *content)
{
	free(content);
}

int main(void)
{
	t_list *test_lst = ft_lstnew(ft_strdup("one"));
	t_list *current = test_lst;
	current = (current->next = ft_lstnew(ft_strdup("two")));
	current = (current->next = ft_lstnew(ft_strdup("three")));
	current = (current->next = ft_lstnew(ft_strdup("four")));
	current = (current->next = ft_lstnew(ft_strdup("five")));
	int lstsize = ft_lstsize(test_lst);

	t_list	*new = ft_lstmap(test_lst, &ft_strtoupper, &ft_freelst);
	ft_lstclear(&test_lst, ft_freelst);
}

// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
