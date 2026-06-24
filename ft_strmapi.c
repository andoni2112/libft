/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:46:19 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:02:01 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/* #include <stdio.h>


char	to_upper_test(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	even_upper_test(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*result1;
	char	*result2;

	result1 = ft_strmapi("hola mundo", to_upper_test);
	result2 = ft_strmapi("abcdef", even_upper_test);
	if (!result1 || !result2)
		return (1);
	printf("result1: %s\n", result1);
	printf("result2: %s\n", result2);
	free(result1);
	free(result2);
	return (0);
} */