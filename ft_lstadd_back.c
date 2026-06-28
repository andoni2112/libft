/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:27:45 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 18:57:00 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;
	node1 = ft_lstnew("uno");
	node2 = ft_lstnew("dos");
	node3 = ft_lstnew("tres");
	if (node1 == NULL || node2 == NULL || node3 == NULL)
		return (1);
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	printf("primero: %s\n", (char *)list->content);
	printf("segundo: %s\n", (char *)list->next->content);
	printf("tercero: %s\n", (char *)list->next->next->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */