#include "../libft.h"
#include <stdio.h>

void	del(void *slaves)
{
	free(slaves);
}

int	main(void)
{
	t_list	**lst;
	t_list	*shit;

	// allocate a place to test
	lst = malloc(sizeof(t_list **) * 3);

	// throw 2 nodes to list , and print
	lst[0] = ft_lstnew(ft_strdup("2"));
	lst[0]->next = ft_lstnew(ft_strdup("3"));
	printf("\n[act A]\t%s", (char *)lst[0]->content);

	// add to front, and print
	ft_lstadd_front(lst, ft_lstnew(ft_strdup("1")));
	printf("\n[act B]\t%s", (char *)lst[0]->content);

	// add to front, and print
	ft_lstadd_back(lst, ft_lstnew(ft_strdup("0")));
	shit = lst[0];
	printf("\n[act C] (list front)\t%s", (char *)shit->content);

	// find last element
	shit = ft_lstlast(shit);
	printf("\n[act D] (last element)\t%s", (char *)shit->content);

	//free the test variables
	ft_lstclear(lst, &del);
}

// set mp=cc\ -g\ %\ ../ft_.c\ &&\ ./a.out
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
