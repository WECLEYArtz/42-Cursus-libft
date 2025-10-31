#include "../libft.h"
#include <stdint.h>
#include <stdio.h>
#include "limits.h"

int main()
{
	char *result = ft_itoa(INT_MIN);
	printf("%s\n",result);
	// printf("%s\n",ft_itoa(INT_MAX));
	
	// printf("%s\n",ft_itoa(10));
	// printf("%s\n",ft_itoa(-10));
	// printf("%s\n",ft_itoa(0));
	free(result);
}

// set mp=cc\ -g\ %\ ../ft_itoa.c\ &&\ ./a.out
// cc -g % ../ft_itoa.c && ./a.out
