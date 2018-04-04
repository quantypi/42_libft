#include "libft.h"

char * ft_strnew(size_t size)
{
	char *fresh;
	size_t i;
	
	
	i = 0;
	fresh = (char *)malloc(sizeof(char) * size + 1);
	if (!fresh)
		return (NULL);
	while (i <= size)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
