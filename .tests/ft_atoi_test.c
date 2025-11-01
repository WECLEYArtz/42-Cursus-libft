#include <limits.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*test;

	// test = "-0"; // the uh
	// test = "0"; // the uh
	// test = "1"; // the uh
	test = "+1"; // the uh
	// test = "-2147483648"; // int min
	// test = "2147483647"; // int max
	// test = "-2147483649"; // overflow to int max
	// test = "-2147483648"; // overflow to int max
	// test = " r\n\r\v\f\t-1993acbd"; // random dogshit
	// test = "2147483648"; // overflow to int max

	// test = "922337203685477580"; // long long max - digit;
	// test = "9223372036854775807"; // long long max
	// test = "-9223372036854775808"; // long long min
	// test = " 9223372036854775808"; // long long max + 1	has to be -1;
	// test = "-9223372036854775809"; // long long min - 1		 has to be 0;


	// test = " 9999999999999999999"; // long long max + allot	 has to be -1;
	// test = "-9999999999999999999"; // long long min - allot		 has to be 0;

	// printf("\natoi:	%d", atoi(test));
	// printf("\nft_atoi:	%d\n", ft_atoi(test));

	printf("%d\n",ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
	printf("%d\n",atoi("+0000000000000000000000000000000000000000000000000000123"));

}

// NEOVIM
// set mp=cc\ %\ ../libft.a\ &&\ ./a.out
