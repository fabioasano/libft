/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:08:46 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/27 22:08:10 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	lasttrim;
	size_t	firsttrim;
	size_t	i;

	firsttrim = 0;
	lasttrim = ft_strlen(s1);
	while (s1[firsttrim] && found_set(s1[firsttrim], set))
		firsttrim++;
	while (lasttrim > firsttrim && found_set(s1[lasttrim - 1], set))
		lasttrim--;
	trimmed = malloc(sizeof(char) * (lasttrim - firsttrim + 1));
	if (trimmed == NULL) 
		return (NULL); 
	i = 0;
	while (lasttrim > firsttrim)
	{
		trimmed[i] = s1[firsttrim];
		i++;
		firsttrim++;
	}
	trimmed[i] = '\0';
	return (trimmed);

}
