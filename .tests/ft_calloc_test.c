#include "../libft.h"
#include <malloc/malloc.h>
#include <stdio.h>

int main(){
	char	*test1=calloc(0,100);
	printf("%ld",malloc_size(test1));
	free(test1);
	// char	*test2=ft_calloc(10,4);
}

// NEOVIM
// set mp=cc\ %\ ../libft.a\ &&\ ./a.out
