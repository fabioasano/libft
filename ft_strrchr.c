/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:22:51 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/17 00:11:52 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_str;

	len_str = ft_strlen(s);
	while ((s[len_str] != c) && len_str > 0)
	{
		len_str--;
	}
	return ((char *)s);

}
//Mostra a última ocorrência de c (em char) 
//1 - Vou contar o tamanho da str
//2 - Vou procurar pelo char de trás para frente
//3 - retorno o char
