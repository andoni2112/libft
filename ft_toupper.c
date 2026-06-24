/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:50:27 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:03:52 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/* #include <stdio.h>


int	main(void)
{
	printf("a: %c\n", ft_toupper('a'));
	printf("z: %c\n", ft_toupper('z'));
	printf("A: %c\n", ft_toupper('A'));
	printf("1: %c\n", ft_toupper('1'));
	return (0);
} */
