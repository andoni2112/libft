/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:11:41 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:08:47 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/* #include <stdio.h>


int	main(void)
{
	char	*result;

	result = ft_strchr("hola mundo", 'm');
	if (result)
		printf("m: %s\n", result);
	else
		printf("m: NULL\n");
	result = ft_strchr("hola mundo", 'x');
	if (result)
		printf("x: %s\n", result);
	else
		printf("x: NULL\n");
	return (0);
} */