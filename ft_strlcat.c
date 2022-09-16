/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:01:34 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/17 00:08:39 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_lendest(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	return (i);
}	
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	j;

	d = ft_lendest(dest, size);
	s = ft_strlen(src);
	j = 0;
	if (d < size)
	{
		while ((d + j < (size - 1)) && src[j] != '\0')
		{
			dest[d + j] = src[j];
			j++;
		}
		dest[d + j] = '\0';
	}
	return (d + s);
}
