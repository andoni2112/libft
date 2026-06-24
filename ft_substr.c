/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:32:44 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:03:24 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* #include <stdio.h>


int	main(void)
{
	char	*sub1;
	char	*sub2;
	char	*sub3;

	sub1 = ft_substr("hola mundo", 5, 5);
	sub2 = ft_substr("hola mundo", 0, 4);
	sub3 = ft_substr("hola", 10, 3);
	if (!sub1 || !sub2 || !sub3)
		return (1);
	printf("sub1: %s\n", sub1);
	printf("sub2: %s\n", sub2);
	printf("sub3: %s\n", sub3);
	free(sub1);
	free(sub2);
	free(sub3);
	return (0);
} */