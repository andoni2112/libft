/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:44:17 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:55:53 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = ft_num_len(num);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/* #include <stdio.h>


int	main(void)
{
	char	*n1;
	char	*n2;
	char	*n3;
	char	*n4;

	n1 = ft_itoa(42);
	n2 = ft_itoa(-42);
	n3 = ft_itoa(0);
	n4 = ft_itoa(-2147483648);
	if (!n1 || !n2 || !n3 || !n4)
		return (1);
	printf("42: %s\n", n1);
	printf("-42: %s\n", n2);
	printf("0: %s\n", n3);
	printf("int min: %s\n", n4);
	free(n1);
	free(n2);
	free(n3);
	free(n4);
	return (0);
} */