/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:42:13 by andpascu          #+#    #+#             */
/*   Updated: 2026/06/24 19:59:33 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

static char	*ft_word_dup(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_split(char **split, size_t words)
{
	while (words > 0)
	{
		words--;
		free(split[words]);
	}
	free(split);
}

static char	**ft_fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start < i)
		{
			split[words] = ft_word_dup(s, start, i);
			if (split[words] == NULL)
				return (ft_free_split(split, words), NULL);
			words++;
		}
	}
	split[words] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (split == NULL)
		return (NULL);
	return (ft_fill_split(split, s, c));
}
/* #include <stdio.h>


static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(void)
{
	char	**split;
	size_t	i;

	split = ft_split("  hola   mundo  42 ", ' ');
	if (!split)
		return (1);
	i = 0;
	while (split[i])
	{
		printf("split[%zu]: %s\n", i, split[i]);
		i++;
	}
	printf("split[%zu]: NULL\n", i);
	free_split(split);
	return (0);
} */