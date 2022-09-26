/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:28:42 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/21 23:06:32 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bsize;
	size_t	lsize;
	size_t	csize;

	bsize = ft_strlen(big);
	lsize = ft_strlen(little);
	if (lsize == 0)
		return ((char *)big);
	if (lsize > bsize)
		return (NULL);
	if (bsize > len)
		csize = len;
	else
		csize = bsize;
	while (lsize <= csize)
	{
		if (ft_strncmp(big, little, lsize) == 0)
			return ((char *)big);
		big++;
		csize--;
	}
	return (NULL);
}
