/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:36:25 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/29 15:33:56 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	a;
	size_t			i;

	ptr = b;
	a = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (b);
}
