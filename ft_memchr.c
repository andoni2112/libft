/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:18:50 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:56:11 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>


int	main(void)
{
	char	str[] = "abcde";
	char	*result;

	result = ft_memchr(str, 'c', 5);
	if (result)
		printf("encontrado: %c, desde ahi: %s\n", *result, result);
	else
		printf("c: NULL\n");
	result = ft_memchr(str, 'x', 5);
	if (result)
		printf("x: %c\n", *result);
	else
		printf("x: NULL\n");
	return (0);
} */
