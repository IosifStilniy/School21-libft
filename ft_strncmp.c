#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*S1;
	const unsigned char	*S2;

	S1 = (const unsigned char *)s1;
	S2 = (const unsigned char *)s2;
	i = 0;
	while (S1[i] && S2[i] && i < n)
	{
		if (S1[i] - S2[i])
			return (S1[i] - S2[i]);
		i++;
	}
	if (i < n)
		return (S1[i] - S2[i]);
	return (0);
}
