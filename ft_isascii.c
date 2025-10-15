int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*test_str;
// 	size_t	test_str_lenght;
//
// 	test_str = "\256\100\2000123456789abcdefjhijlklmnopqrstuvwxyz\x7f\x80";
// 	test_str_lenght = strlen(test_str);
// 	for (size_t i = 0; i < test_str_lenght; i++)
// 	{
// 		printf("%d : %d ", test_str[i], ft_isascii(test_str[i]));
// 		printf("| %d\n", isascii(test_str[i]));
// 	}
// }
