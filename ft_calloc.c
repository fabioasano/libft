/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:28:29 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/22 18:09:09 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if ((nmemb == 0) || (size == 0) || (nmemb >= 2147483647 / size))
		return (NULL);
	str = malloc(nmemb * size);
	if (!(str))
		return (NULL);
	ft_memset(str, 0, nmemb * size);
	return (str);
}
