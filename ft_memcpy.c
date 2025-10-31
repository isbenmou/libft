/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:36:02 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:33:41 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_v2;
	const unsigned char	*src_v2;

	src_v2 = src;
	i = 0;
	dest_v2 = dest;
	while (i < n)
	{
		dest_v2[i] = src_v2[i];
		i++;
	}
	return (dest);
}
