/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:39:12 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:36:44 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lit_len;

	i = 0;
	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char *)big);
	while (i + lit_len <= len && big[i])
	{
		if (ft_strncmp(&big[i], little, lit_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
