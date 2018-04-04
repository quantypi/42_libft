#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	int j;
	char *sub;
	
	i = start;
	j = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < start + len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
