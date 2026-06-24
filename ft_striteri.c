/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:48:08 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:00:37 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* #include <stdio.h>


void	to_upper_test(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	index_to_number_test(unsigned int i, char *c)
{
	if (i <= 9)
		*c = i + '0';
}

int	main(void)
{
	char	str1[] = "hola mundo";
	char	str2[] = "abcdef";

	ft_striteri(str1, to_upper_test);
	ft_striteri(str2, index_to_number_test);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	return (0);
} */
