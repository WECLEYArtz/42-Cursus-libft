#include "../libft.h"
#include <stdio.h>
char addOne(unsigned int i, char c){ return (c+i);}

int	main(void)
{
	char * s = ft_strmapi("1234", &addOne);
	printf("%s\n", s);
}

// set mp=cc\ -g\ %\ ../libft.a\ &&\ ./a.out
