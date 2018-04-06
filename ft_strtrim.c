/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_headers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcook <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:15:13 by jcook             #+#    #+#             */
/*   Updated: 2018/04/05 15:15:28 by jcook            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	int j;
	char *trmd;
	
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	trmd = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!trmd)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
		{
			trmd[j] = s[i];
			i++;
			j++;
		}
		trmd[j] = '\0';
	}
	return (trmd);
}
