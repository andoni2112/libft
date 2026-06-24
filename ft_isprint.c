/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 23:50:05 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:55:28 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/* #include <stdio.h>


int	main(void)
{
	printf("A: %d\n", ft_isprint('A'));
	printf("space: %d\n", ft_isprint(' '));
	printf("newline: %d\n", ft_isprint('\n'));
	printf("127: %d\n", ft_isprint(127));
	return (0);
} */