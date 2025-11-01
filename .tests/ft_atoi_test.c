#include <limits.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*test;

	printf("%s\n","[tests]"); // the uh
	printf("huh %d\n",ft_atoi("-0")); // the uh
	printf("%d\n",ft_atoi("0")); // the uh
	printf("%d\n",ft_atoi("1")); // the uh
	printf("%d\n",ft_atoi("+1")); // the uh
	printf("%d\n",ft_atoi("-2147483648")); // int min
	printf("%d\n",ft_atoi("2147483647")); // int max
	printf("%d\n",ft_atoi("-2147483649")); // overflow to int max
	printf("%d\n",ft_atoi("-2147483648")); // overflow to int max
	printf("%d\n",ft_atoi(" r\n\r\v\f\t-1993acbd")); // random dogshit
	printf("%d\n",ft_atoi("2147483648")); // overflow to int max
	printf("%d\n",ft_atoi("922337203685477580")); // long long max - digit;
	printf("%d\n",ft_atoi("9223372036854775807")); // long long max
	printf("%d\n",ft_atoi("-9223372036854775808")); // long long min
	printf("%d\n",ft_atoi(" 9223372036854775808")); // long long max + 1	has to be -1;
	printf("%d\n",ft_atoi("-9223372036854775809")); // long long min - 1		 has to be 0;
	printf("%d\n",ft_atoi(" 9999999999999999999")); // long long max + allot	 has to be -1;
	printf("%d\n",ft_atoi("-9999999999999999999")); // long long min - allot		 has to be 0;
	printf("%d\n",ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
	printf("%d\n",ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
}

// NEOVIM
// set mp=make\ -C\ ../\ CC='cc\ -g'\ &&\ cc\ -g\ %\ ../libft.a\ &&\ ./a.out
