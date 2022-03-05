#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (dstsize && i < dstsize - 1)
			dst[i] = src[i];
		else if (dstsize && i == dstsize - 1)
			dst[i] = '\0';
		i++;
	}
	if (!src[i] && dstsize && i <= dstsize - 1)
		dst[i] = '\0';
	return (i);
}
