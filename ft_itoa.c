/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:28:49 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/24 09:43:09 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *s1, char *s2, int j, int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		s1[i] = '-';
		i++;
	}
	while (j - 1 >= 0)
	{
		s1[i] = s2[j - 1];
		i++;
		j--;
	}
	s1[i] = '\0';
	return (s1);
}

static size_t	ft_mystrlen(const char *s, int n)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long	number;
	char	buf[12];
	size_t	i;
	char	*new_buf;

	number = n;
	if (number < 0)
		number *= -1;
	i = 0;
	if (number == 0)
		buf[i++] = '0';
	else
	{
		while (number > 0)
		{
			buf[i++] = number % 10 + 48;
			number /= 10;
		}
	}
	buf[i] = '\0';
	new_buf = malloc(ft_mystrlen(buf, n) + 1);
	if (new_buf == NULL)
		return (NULL);
	new_buf = ft_strcpy(new_buf, buf, i, n);
	return (new_buf);
}
