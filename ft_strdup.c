#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*cpy;

	i = 0;
	while (s1[i])
		i++;
	cpy = malloc(sizeof(*s1) * i + 1);
	while (cpy && i--)
		cpy[i + 1] = s1[i + 1];
	if (cpy && i++)
		cpy[i] = s1[i];
	return (cpy);
}
