/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:30:26 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 17:31:01 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/* #include <stdio.h>

void	del_test(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	char	*a;
	char	*b;
	char	*c;

	list = NULL;
	a = ft_strdup("uno");
	b = ft_strdup("dos");
	c = ft_strdup("tres");
	if (a == NULL || b == NULL || c == NULL)
		return (1);
	ft_lstadd_back(&list, ft_lstnew(a));
	ft_lstadd_back(&list, ft_lstnew(b));
	ft_lstadd_back(&list, ft_lstnew(c));
	ft_lstclear(&list, del_test);
	printf("list: %p\n", list);
	return (0);
} */