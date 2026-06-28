/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:49:39 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 17:10:46 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = NULL;
	node1 = ft_lstnew("mundo");
	node2 = ft_lstnew("hola");
	if (node1 == NULL || node2 == NULL)
		return (1);
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	printf("primero: %s\n", (char *)list->content);
	printf("segundo: %s\n", (char *)list->next->content);
	free(node2);
	free(node1);
	return (0);
} */