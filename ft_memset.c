#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *new;
	
	new = (char *)b;
	while (len > 0)
	{
		*new = c;
		new++;
		len--;
	}
	return (b);
}