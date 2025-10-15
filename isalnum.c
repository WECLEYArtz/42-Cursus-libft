#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char *test_str = "\100 \2000123456789 abcdefjhijlklmnopqrstuvwxyz ABCDEFJHIJLKLMNOPQRSTUVWXYZ";
// 	size_t test_str_lenght =  strlen(test_str);
// 	for(size_t i = 0; i < test_str_lenght; i++)
// 	{
// 		printf("%c : %d "	, test_str[i], ft_isalnum(test_str[i]));
// 		printf("| %d\n"		, isalnum(test_str[i]));
// 	}
// }
