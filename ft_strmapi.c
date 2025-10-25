#include "libft.h"
#include <stddef.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	strlen;
	char	*str;

	if (!s || !f)
		return (NULL);

	strlen = ft_strlen(s);
	str = malloc(strlen + 1);
	if (!strlen)
		return (NULL);

	str[strlen--] = 0;
	while(strlen)
	{
		str[strlen] = f(strlen,str[strlen]);
		strlen--;
	}
	return str;
}
