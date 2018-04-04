#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;
	char *ret;

	i = 0;
	ret = dst;
	while(src[i] != '\0')
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
