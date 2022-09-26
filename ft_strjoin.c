/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:24:56 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/22 23:10:49 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*nstr;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	nstr = malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, s1, len + 1);
	ft_strlcat(nstr, s2, len + 1);
	return (nstr);
}
