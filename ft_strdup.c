#include "libft.h"
#include <stdlib.h>

static	void ft_strcpy(char *dst, const char *src){
	while(*src)
		*dst++ = *src++;
	*dst = 0;
}

char *ft_strdup(const char *str){
	size_t str_len;

	str_len = ft_strlen(str);
	char  *new_str = malloc(str_len +1);
	if(!new_str)
		return 0;
	ft_strcpy(new_str, str);
	return  (new_str);
}

// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char *new = "";
// 	char *test = "balls ";
// 	// new = strdup(test);
// 	new = ft_strdup(test);
// 	printf("new: %s",new);
//
// }
