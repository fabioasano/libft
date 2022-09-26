/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:53:12 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/21 19:42:07 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;
	unsigned char	src;

	src = (unsigned char)c;
	ps = (unsigned char *)s;
	i = 0;
	while ((i < n))
	{
		if (*ps == src)
			return (ps);
		i++;
		ps++;
	}
	return (NULL);
}
