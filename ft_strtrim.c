#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_max;
	char	*mem;

	if (!s1)
		return (NULL);
	if (!s1[0] || !set || !set[0])
		return (ft_strdup(s1));

	len_max = 0;
	while (*s1 && (*(ft_strchr(set, s1[len_max]))))
		s1++;
	while (s1[len_max] && !(*(ft_strchr(set, s1[len_max]))))
		len_max++;
	mem = malloc(len_max+1);
	if(!mem)
		return (NULL);
	ft_strlcpy(mem, s1, len_max +1);
	return (mem);
}

// #include <stdio.h>
// int main(){
// 	printf("\ntest 0 : %s",ft_strtrim("./_\nabsolute cinema../_","./_\n"));
// 	printf("\ntest 1 : %s",ft_strtrim("absolute cinema","cinema"));
// 	printf("\ntest 2 : %s",ft_strtrim("","./_\n"));
// 	printf("\ntest 3 : %s",ft_strtrim("absolute cinema",""));
// 	printf("\ntest 4 : %s",ft_strtrim("absolute cinema",0));
// 	printf("\ntest 5 : %s",ft_strtrim(0,"./_\n"));
// }
