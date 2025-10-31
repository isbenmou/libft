/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:38:21 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:36:01 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sstrlen(const char *const str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_sstrlen(dst, size);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] && j < (size - dst_len - 1))
	{
		dst[j + dst_len] = src[i];
		i++;
		j++;
	}
	dst[j + dst_len] = '\0';
	return (dst_len + src_len);
}
