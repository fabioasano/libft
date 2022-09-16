/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:21:33 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/17 00:10:32 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != c) && s[i])
		i++;
	return ((char *)s);

}
//The strchr() function returns a pointer to the first occurrence
//of the character c in the string s.
