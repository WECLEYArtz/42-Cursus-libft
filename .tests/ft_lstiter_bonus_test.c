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
#include <stdio.h>

void f(void *s)
{
	ft_putstr_fd(s, 1);
}

int main(void)
{
	t_list *balls = ft_lstnew(ft_strdup("[0]this "));
	balls->next = ft_lstnew(ft_strdup("[1]is "));
	balls->next->next = ft_lstnew(ft_strdup("[2]a "));
	balls->next->next->next = ft_lstnew(ft_strdup("[3]test."));

	ft_putnbr_fd(ft_lstsize(balls), 1) ;
	ft_lstiter(balls,&f);
}

// set mp=cc\ -g\ %\ ../ft_.c\ &&\ ./a.out
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
