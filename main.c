#include  <stdio.h>
#include  <string.h>
#include  "libft.h"
int  main()
{
	char name[20]  =  "leon";
	printf("%s return: %zu \n", name, ft_strlcat(name, name, (size_t)10));
//	printf("%s return: %zu \n", name, strlcat(name, name, (size_t)10));
}
