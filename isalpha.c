int ft_isalpha(int c)
{
	return ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')));
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(){
	char *test_str = "abcd 1234";
	size_t test_str_lenght =  strlen(test_str);
	for(size_t i = 0; i < test_str_lenght; i++)
	{
		printf("%c : %d "	, test_str[i], ft_isalpha(test_str[i]));
		printf("| %d\n"		, isalpha(test_str[i]));
	}
}
