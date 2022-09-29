/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:08:41 by fsenishi          #+#    #+#             */
/*   Updated: 2022/09/28 04:08:28 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      count_words(const char *str, char c)
{
        int i;
        int trigger;

        i = 0;
        trigger = 0;
        while (*str)
        {
                if (*str != c && trigger == 0)
                {
                        trigger = 1;
                        i++;
                }
                else if (*str == c)
                        trigger = 0;
                str++;
        }
        return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
//Preciso contar quantas strings serão criadas, pois o retorno será uma matriz (array de strings)
//	Para isso, passo pela string. Quando não vejo o 'delimiter', aciono (on) um interruptor (switch)
//[que deve estar off no momento que encontrar o primeiro char],  e adiciono 1 em uma iteração.
//	Caso encontre o 'delimiter' aciono o switch (off) novamente, 
//e mantenho ele acionado enquanto esiver passando no 'delimiter'
//
//	Crio uma área de memória com o malloc a partir das instruções passadas por um contador na 
//função ft_split, que irá contar do primeiro char até o char 'delimiter', e então esse será o tamanho
//do malloc a ser allocado.
//	Verifico se o malloc é nulo.
//	Após alocar a memória, copio a string para a nova memória e retorno essa nova string
//
//	Na função split crio o malloc, confirmo que a string exista.
//	Quanfo não encontrar um char 'delimiter' percorro a string (com um switch tbm) e quando encontrar um char != 'delimiter' 
//será o fim da contagem e irá para o malloc da função acima para copiar a string. 
//
//
//
//string: "os ciclos são enceRRados às 18hs. poRtanto, paRa que você não peRca...
//string: "Rua Rato Roma"
//string: "... nsjasdfjeRsdjR"
//
