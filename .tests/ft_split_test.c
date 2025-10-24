#include "../libft.h"
#include <stdio.h>
int main( int argc, char **argv)
{
	if (argc == 2)
	{
		char **test = ft_split(argv[0], *argv[1]);
		while(*test)
		{
			printf("%s\n",*test++);
			free(*test);
		}
		free(test);

	}
}
