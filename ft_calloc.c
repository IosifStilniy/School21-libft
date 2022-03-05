#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	p = malloc(count * size);
	i = 0;
	while (p && i < count * size)
		p[i++] = 0;
	return (p);
}
