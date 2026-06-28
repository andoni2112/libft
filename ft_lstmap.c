/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:33:57 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/28 17:34:41 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* #include <stdio.h>

void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

void	del_test(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew("hola"));
	ft_lstadd_back(&list, ft_lstnew("mundo"));
	new_list = ft_lstmap(list, duplicate_content, del_test);
	if (new_list == NULL)
		return (1);
	printf("nuevo 1: %s\n", (char *)new_list->content);
	printf("nuevo 2: %s\n", (char *)new_list->next->content);
	ft_lstclear(&new_list, del_test);
	ft_lstclear(&list, free);
	return (0);
} */