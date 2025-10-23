#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	for (size_t i = 0; i <= 256; i++)
	{
		printf("%ld : %u ", i, ft_isalnum(i));
		printf("| %d\n", isalnum(i));
	}
}
