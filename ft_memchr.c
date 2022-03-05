#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		cc;
	const unsigned char	*S;
	size_t				i;

	cc = (unsigned char) c;
	S = (const unsigned char *) s;
	i = 0;
	while (S && i < n)
		if (S[i++] == cc)
			return ((void *)&s[--i]);
	return (NULL);
}
