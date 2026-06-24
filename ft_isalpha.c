/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 22:52:04 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:54:33 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/* #include <stdio.h>


int	main(void)
{
	printf("a: %d\n", ft_isalpha('a'));
	printf("Z: %d\n", ft_isalpha('Z'));
	printf("1: %d\n", ft_isalpha('1'));
	printf("space: %d\n", ft_isalpha(' '));
	return (0);
} */