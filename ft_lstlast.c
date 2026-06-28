/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:25:32 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 18:56:44 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	list = NULL;
	node1 = ft_lstnew("uno");
	node2 = ft_lstnew("dos");
	node3 = ft_lstnew("tres");
	if (node1 == NULL || node2 == NULL || node3 == NULL)
		return (1);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	last = ft_lstlast(list);
	printf("ultimo: %s\n", (char *)last->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */