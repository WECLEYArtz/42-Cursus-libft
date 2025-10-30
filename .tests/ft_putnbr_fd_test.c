#include "../libft.h"
#include <limits.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd = 1;
	// fd = open("test.txt", O_CREAT | O_RDWR );

	if( argc == 3)
		ft_putnbr_fd(atoi(argv[1]), fd);
	else
	{
		ft_putnbr_fd(INT_MAX, fd);
		ft_putnbr_fd(INT_MIN, fd);
	}
}

// NEOVIM MKPG
// set mp=cc\ %\ ../ft_putnbr_fd.c\ ../ft_putchar_fd.c\ &&\ ./a.out
