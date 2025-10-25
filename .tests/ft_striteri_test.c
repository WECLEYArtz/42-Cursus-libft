#include "../libft.h"
#include <stdio.h>

static void cap(unsigned int i, char *c)
{
	*c = i+'0';
}

int main()
{
	char test[] = "balls";
	ft_striteri(test, &cap);
	printf("%s", test);
}

//	NEOVIM
//	set mp=cc\ %\ ../ft_striteri.c\ &&\ ./a.out
//	cc ft_striteri_test.c ../ft_striteri.c && ./a.out
