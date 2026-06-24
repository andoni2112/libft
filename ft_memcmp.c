/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:21:46 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:56:27 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>


int	main(void)
{
	char	a[] = "abc";
	char	b[] = "abc";
	char	c[] = "abd";

	printf("abc vs abc: %d\n", ft_memcmp(a, b, 3));
	printf("abc vs abd: %d\n", ft_memcmp(a, c, 3));
	printf("abc vs abd con n=2: %d\n", ft_memcmp(a, c, 2));
	return (0);
} */