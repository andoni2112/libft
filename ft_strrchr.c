/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:22:56 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:08:12 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((char)c == s[i])
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)&s[0]);
	}
	return (NULL);
}

/* #include <stdio.h>


int	main(void)
{
	char	*result;

	result = ft_strrchr("banana", 'a');
	if (result)
		printf("ultima a: %s\n", result);
	else
		printf("ultima a: NULL\n");
	result = ft_strrchr("banana", 'x');
	if (result)
		printf("x: %s\n", result);
	else
		printf("x: NULL\n");
	return (0);
} */