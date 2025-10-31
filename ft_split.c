/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:37:14 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/27 00:16:28 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **argv, int i)
{
	i--;
	while (i >= 0)
	{
		free(argv[i]);
		i--;
	}
	free(argv);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			a += 1;
			while (s[i] && s[i] != c)
				i++;
		}
		else
		{
			i++;
		}
	}
	return (a);
}

static int	ft_sstrcpy(char *dest, const char *src, char c, int signal)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		if (signal == 1)
			dest[i] = src[i];
		i++;
	}
	if (signal == 1)
		dest[i] = '\0';
	return (i);
}

static void	function(const char *s, char c, char **argv, size_t *j)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (s[i] && *j < count_words(s, c))
	{
		if (s[i] != c)
		{
			len = ft_sstrcpy(argv[*j], &s[i], c, 0);
			argv[*j] = malloc(len + 1);
			if (argv[*j] == NULL)
			{
				ft_free(argv, *j);
				return ;
			}
			ft_sstrcpy(argv[*j], &s[i], c, 1);
			i += len;
			(*j)++;
		}
		else
		{
			i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	size;
	char	**argv;

	if (s == NULL)
		return (NULL);
	j = 0;
	size = count_words(s, c);
	argv = malloc(sizeof(char *) * (size + 1));
	if (argv == NULL)
		return (NULL);
	function(s, c, argv, &j);
	if (argv == NULL)
		return (NULL);
	argv[j] = NULL;
	return (argv);
}
