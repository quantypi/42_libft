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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	size_t count;
	
	count = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && count < len)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (needle[++i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		count++;
	}
	return (NULL);
}
