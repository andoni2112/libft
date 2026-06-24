/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:39:01 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:03:05 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
/* #include <stdio.h>


int	main(void)
{
	char	*trim1;
	char	*trim2;
	char	*trim3;

	trim1 = ft_strtrim("   hola mundo   ", " ");
	trim2 = ft_strtrim("xx--hola--xx", "x-");
	trim3 = ft_strtrim("aaaa", "a");
	if (!trim1 || !trim2 || !trim3)
		return (1);
	printf("trim1: %s\n", trim1);
	printf("trim2: %s\n", trim2);
	printf("trim3: %s\n", trim3);
	free(trim1);
	free(trim2);
	free(trim3);
	return (0);
} */