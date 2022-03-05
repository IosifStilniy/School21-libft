#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	j;
	char	*cpy;

	cpy = (char *) haystack;
	n = 0;
	if (!needle[0])
		return (cpy);
	while (needle[n])
		n++;
	i = 0;
	while (len && haystack[i] && len >= n && i <= len - n)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j == n)
			return (&cpy[i]);
		i++;
	}
	return (NULL);
}
