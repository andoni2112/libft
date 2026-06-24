/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:09:03 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:57:01 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr < src_ptr)
	{
		i = 0;
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			dst_ptr[i] = src_ptr[i];
	}
	return (dst);
}
/* #include <stdio.h>


int	main(void)
{
	char	str1[20] = "abcdef";
	char	str2[20] = "abcdef";

	ft_memmove(str1 + 2, str1, 4);
	printf("overlap derecha: %s\n", str1);
	ft_memmove(str2, str2 + 2, 4);
	str2[4] = '\0';
	printf("overlap izquierda: %s\n", str2);
	return (0);
} */