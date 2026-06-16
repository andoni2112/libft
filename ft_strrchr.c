/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:22:56 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/08 20:39:36 by andpascu         ###   ########.fr       */
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
