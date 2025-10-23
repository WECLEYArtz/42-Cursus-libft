#include "../libft.h"
#include <stdio.h>

int main(){
	char *new = "";
	char *test = "balls ";
	// new = strdup(test);
	new = ft_strdup(test);
	printf("new: %s",new);

}
