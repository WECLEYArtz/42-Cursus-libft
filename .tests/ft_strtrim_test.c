#include "../libft.h"

#include <stdio.h>
int main(){
	printf("\ntest 0 : %s",ft_strtrim("./_\nabsolute cinema../_","./_\n"));
	printf("\ntest 1 : %s",ft_strtrim("absolute cinema","cinema"));
	printf("\ntest 2 : %s",ft_strtrim("","./_\n"));
	printf("\ntest 3 : %s",ft_strtrim("absolute cinema",""));
	printf("\ntest 4 : %s",ft_strtrim("absolute cinema",0));
	printf("\ntest 5 : %s",ft_strtrim(0,"./_\n"));
}
