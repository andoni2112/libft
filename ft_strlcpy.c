/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:43:07 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:01:30 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (dstsize == 0)
	{
		return (len);
	}
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* #include <stdio.h>


int	main(void)
{
	char	dst1[20];
	char	dst2[5];
	size_t	ret1;
	size_t	ret2;

	ret1 = ft_strlcpy(dst1, "hola mundo", sizeof(dst1));
	ret2 = ft_strlcpy(dst2, "hola mundo", sizeof(dst2));
	printf("ret1: %zu, dst1: %s\n", ret1, dst1);
	printf("ret2: %zu, dst2: %s\n", ret2, dst2);
	return (0);
} */
