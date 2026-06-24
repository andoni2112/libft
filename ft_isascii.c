/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 23:46:27 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:54:50 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/* #include <stdio.h>


int	main(void)
{
	printf("A: %d\n", ft_isascii('A'));
	printf("127: %d\n", ft_isascii(127));
	printf("128: %d\n", ft_isascii(128));
	printf("-1: %d\n", ft_isascii(-1));
	return (0);
} */