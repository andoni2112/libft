/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:40:22 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:57:31 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/* #include <stdio.h>


int	main(void)
{
	char	str[20] = "hola mundo";

	ft_memset(str, 'X', 4);
	printf("%s\n", str);
	ft_memset(str + 5, '*', 5);
	printf("%s\n", str);
	return (0);
} */
