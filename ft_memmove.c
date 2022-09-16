/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:33:49 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/17 00:04:03 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *restrict dest, const void *restrict scr, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
 	i = 0;
	if (s < d)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else 
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}	
	}
	return (dest);	
}
//Copia n bytes da área de memória de src para dest
//A cópia é deita de forma não destrutiva
//Retorna o valor original de dest
