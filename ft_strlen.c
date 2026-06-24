/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 23:52:47 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:01:43 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* #include <stdio.h>


int	main(void)
{
	printf("hola: %zu\n", ft_strlen("hola"));
	printf("empty: %zu\n", ft_strlen(""));
	printf("hola mundo: %zu\n", ft_strlen("hola mundo"));
	return (0);
} */