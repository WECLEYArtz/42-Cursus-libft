int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	for (size_t i = 0; i <= 256; i++)
	{
		printf("%ld : %u ", i, ft_isdigit(i));
		printf("| %d\n", isdigit(i));
	}
}
