int	ft_isalpha(int c)
{
	return ((('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')));
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	for (size_t i = 0; i <= 256; i++)
	{
		printf("%ld : %u ", i, ft_isalpha(i));
		printf("| %d\n", isalpha(i));
	}
}
