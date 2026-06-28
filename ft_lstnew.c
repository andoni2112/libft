/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:04:44 by apascual          #+#    #+#             */
/*   Updated: 2026/06/28 17:12:27 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("hola");
// 	if (node == NULL)
// 		return (1);
// 	printf("content: %s\n", (char *)node->content);
// 	printf("next: %p\n", node->next);
// 	free(node);
// 	return (0);
// }