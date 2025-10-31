/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbenmou <isbenmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 05:34:02 by isbenmou          #+#    #+#             */
/*   Updated: 2025/10/24 20:47:44 by isbenmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	t_list	*current;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new = NULL;
	node = NULL;
	current = lst;
	while (current)
	{
		node = ft_lstnew(f(current->content));
		if (node == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		current = current->next;
	}
	return (new);
}
