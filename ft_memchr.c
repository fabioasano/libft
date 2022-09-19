/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:53:12 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/17 22:13:33 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char 	*ps;
	unsigned char	src;

	src = (unsigned char)c;
	ps = (unsigned char *)s;	
	i = 0;
	while ((i < n) && (ps[i] != '\0'))
	{
		if (ps[i] == src)
			return (ps);
		i++;
	}
	return (NULL);
}
// C e a área apontada são unsigned char.
