#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	char *new;
	
	i = 0;
	if (!s)
		return(NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return(NULL);
	while (i < ft_strlen(s))
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
	
	