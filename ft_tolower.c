/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:09:23 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:03:36 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/* #include <stdio.h>


int	main(void)
{
	printf("A: %c\n", ft_tolower('A'));
	printf("Z: %c\n", ft_tolower('Z'));
	printf("a: %c\n", ft_tolower('a'));
	printf("1: %c\n", ft_tolower('1'));
	return (0);
} */
