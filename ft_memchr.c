/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:35:28 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:33:18 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_v2 = s;
	unsigned char		c_v2;
	size_t				i;

	c_v2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (c_v2 == s_v2[i])
		{
			return ((void *)&s_v2[i]);
		}
		i++;
	}
	return (0);
}
