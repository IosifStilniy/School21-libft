#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	cc;
	char			*str;

	cc = (unsigned char) c;
	str = b;
	i = 0;
	while (i < len)
		str[i++] = cc;
	return (b);
}
