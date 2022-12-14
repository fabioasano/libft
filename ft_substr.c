/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:34:19 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/27 18:43:58 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (start < ft_strlen(s))
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (len + 1 == 1)
	{
		sub[0] = '\0';
		return (sub);
	}
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
