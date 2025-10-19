#include <stddef.h>

// char *ft_strnstr(const char *haystack,	const char *needle, size_t len)
// {
// 	while(len)
// 	{
// 		if(str)
// 	}
// }
// [ t e s t 1 2 3 h e l l o w o r l d]
//
// [h e l l o] , 4


#include <string.h>
#include <stdio.h>
int main(){
	char *haystack = "test1234helloworld";
	char *needle = "hello";
	printf("%s",strnstr(haystack, needle,12));
}
