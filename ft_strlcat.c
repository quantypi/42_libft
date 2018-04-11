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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	size_t	j;
	size_t	dstlen;
	
	i = ft_strlen(dst);
	j = 0;
	while (j < dstsize && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	dstlen = ft_strlen(dst);
	return (dstlen);
}