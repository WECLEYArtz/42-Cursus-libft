int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	for (size_t i = 0; i <= 256; i++)
	{
		printf("%ld : %u ", i, ft_isascii(i));
		printf("| %d\n", isascii(i));
	}
}
