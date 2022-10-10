/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 02:10:07 by fsenishi          #+#    #+#             */
/*   Updated: 2022/10/01 03:00:14 by fsenishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while(lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return NULL;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
//iterar a lista 'lst' e aplica a função 'f' no conteúdo de cada nó
// Cria uma nova lista resultante de sucessivasa aplicações da função 'f'.
// O 'del' é usado para deletar um nó caso seja preciso.
//
// RETORNO
// Retorna a função executada.
// Volta Nulo caso não exista a função
