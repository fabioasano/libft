/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:31:35 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/16 18:32:44 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict scr, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)scr;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
