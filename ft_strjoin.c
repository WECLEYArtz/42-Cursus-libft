#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	if(!s1[0] && !s2[0])
		return NULL;
	size_t s1_len= ft_strlen(s1);
	size_t s2_len= ft_strlen(s2);

	char *mem =malloc((s1_len + s2_len) +1);
	if(!mem)
		return NULL;
	ft_strlcat(mem, s1, s1_len+1);
	ft_strlcat(mem+s1_len, s2, s2_len+1);
	return (mem);
}

#include <stdio.h>
int main(){
	char *s1 = "kicking.";
	char *s2 = ".balls";
	printf("%s",ft_strjoin(s1,s2));
}
