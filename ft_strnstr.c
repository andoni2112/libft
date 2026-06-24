/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:31:08 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 20:02:33 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0'
			&& i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>


int	main(void)
{
	char	*result;

	result = ft_strnstr("hola mundo", "mun", 10);
	if (result)
		printf("mun: %s\n", result);
	else
		printf("mun: NULL\n");
	result = ft_strnstr("hola mundo", "mun", 6);
	if (result)
		printf("mun con 6: %s\n", result);
	else
		printf("mun con 6: NULL\n");
	return (0);
} */