/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 23:35:28 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:54:16 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/* #include <stdio.h>


int	main(void)
{
	printf("a: %d\n", ft_isalnum('a'));
	printf("Z: %d\n", ft_isalnum('Z'));
	printf("5: %d\n", ft_isalnum('5'));
	printf("@: %d\n", ft_isalnum('@'));
	return (0);
} */