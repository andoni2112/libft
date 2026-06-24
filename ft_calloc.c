/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:56:55 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:53:59 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/* #include <stdio.h>


int	main(void)
{
	int		*nums;
	size_t	i;

	nums = ft_calloc(5, sizeof(int));
	if (!nums)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("nums[%zu]: %d\n", i, nums[i]);
		i++;
	}
	free(nums);
	return (0);
} */