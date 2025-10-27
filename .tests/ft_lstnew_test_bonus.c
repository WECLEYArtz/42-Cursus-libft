#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*test;
	int		contest = 42;

	puts("\n");

	test = ft_lstnew(NULL);
	printf("content = %s\n", (char *)test->content);

	test = ft_lstnew("hello world");
	printf("content = %s\n", (char *)test->content);

	test = ft_lstnew(&contest);
	printf("content = %d\n", *((int *)test->content));

}

// set mp=cc\ -g\ %\ ../ft_.c\ &&\ ./a.out
// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
