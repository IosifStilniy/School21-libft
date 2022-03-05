#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	cc = (unsigned char) c;
	i = 0;
	while (s[i])
		i++;
	while (i > 0)
		if (s[i--] == cc)
			return ((char *)&s[++i]);
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
