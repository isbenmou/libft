/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:39:29 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:38:59 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_front(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*copy(const char *src, int size)
{
	char	*dest;
	int		j;
	int		i;

	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

static char	*empty(void)
{
	char	*dest;

	dest = malloc(1);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

static int	len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && (check_front(s1[i], set) == 1))
		i++;
	if (s1[0] == 0 || i == len(s1))
		return (empty());
	j = len(s1) - 1;
	while (j >= 0 && check_front(s1[j], set) == 1)
		j--;
	return (copy(&s1[i], j - i + 1));
}
