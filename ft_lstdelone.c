/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:29:07 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 18:56:50 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/* #include <stdio.h>

void	del_test(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*text;

	text = ft_strdup("hola");
	if (text == NULL)
		return (1);
	node = ft_lstnew(text);
	if (node == NULL)
	{
		free(text);
		return (1);
	}
	ft_lstdelone(node, del_test);
	printf("nodo borrado\n");
	return (0);
} */