#include <errno.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_memusable(void *mem)
{
	if (!mem)
	{
		return (0);
		errno = ENOMEM;
	}
	return (1);
}

void	*calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!ft_memusable(mem))
		return (0);
	ft_bzero(mem,(count*size));
	return (0);
}
