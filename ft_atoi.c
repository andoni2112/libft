/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:45:42 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:52:52 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/* #include <stdio.h>


int	main(void)
{
	printf("42: %d\n", ft_atoi("42"));
	printf("espacios: %d\n", ft_atoi("   -42"));
	printf("mas: %d\n", ft_atoi("+123"));
	printf("texto despues: %d\n", ft_atoi("123abc"));
	printf("texto antes: %d\n", ft_atoi("abc123"));
	printf("tabs: %d\n", ft_atoi("\t\n\v\f\r 55"));
	return (0);
} */
