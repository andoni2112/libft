/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:32:21 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:02:19 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include <stdio.h>


int	main(void)
{
	printf("hola vs hola, 4: %d\n", ft_strncmp("hola", "hola", 4));
	printf("hola vs holb, 4: %d\n", ft_strncmp("hola", "holb", 4));
	printf("abc vs abd, 2: %d\n", ft_strncmp("abc", "abd", 2));
	printf("abc vs abd, 3: %d\n", ft_strncmp("abc", "abd", 3));
	return (0);
} */
