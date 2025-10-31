/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:36:14 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:33:48 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (n == 0)
		return (dest);
	i = 0;
	j = n - 1;
	if (dest > src)
	{
		while (j >= i)
		{
			*(unsigned char *)(dest + j) = *(unsigned char *)(src + j);
			if (j == 0)
				break ;
			j--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
