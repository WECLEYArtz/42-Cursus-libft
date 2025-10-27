#include "../libft.h"
#include <stdio.h>

void	del(void *slaves)
{
	free(slaves);
}

int	main(void)
{
	// allocate a place to test
	t_list **lst =malloc(sizeof(t_list **)*3);

	// throw a little 2 nodes list , and print
	lst[0] = ft_lstnew(ft_strdup("second"));
	lst[0]->next = ft_lstnew(ft_strdup("third"));
	printf("\n[act A]\t%s",(char *)lst[0]->content);

	// add to front, and print
	ft_lstadd_front(lst, ft_lstnew(ft_strdup("first")));
	printf("\n[act B]\t%s",(char *)lst[0]->content);

	// add to front, and print
	t_list *shit;
	ft_lstadd_front(lst, ft_lstnew(ft_strdup("zero")));
	shit = lst[0];
	printf("\n[act C]\t%s",(char *)shit->content);
	shit = shit->next;
	printf("\n[act D]\t%s",(char *)shit->content);

	//free the test variables
	ft_lstclear(lst, &del);
}

// set mp=cc\ -g\ %\ ../ft_.c\ &&\ ./a.out
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
