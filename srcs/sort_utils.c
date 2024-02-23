/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:33:01 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 17:34:04 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

bool	is_sorted(t_node *node)
{
	if (!node)
		return (false);
	while (node->next != NULL)
	{
		if (node->elem > node->next->elem)
			return (false);
		node = node->next;
	}	
	return (true);
}

int	ft_lstsize(t_node *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	find_smallest(t_node **node)
{
	int		i;
	int		min;
	int		pos;
	t_node	*temp;

	temp = *node;
	pos = 0;
	i = 1;
	min = 2147483646;
	if (!temp)
		return (0);
	while ((temp))
	{
		if ((temp)->counter < min)
		{	
			min = (temp)->counter;
			pos = i;
		}	
		(temp) = (temp)->next;
		i++;
	}
	return (pos);
}

int	max_bytes(t_node *node)
{
	int	max;
	int	nb_bytes_max;
	int	count;

	max = 0;
	nb_bytes_max = 1;
	while (node)
	{
		if (node->elem > max)
				max = node->elem;
		node = node->next;
	}
	count = 0;
	while (max)
	{
		count++;
		max >>= 1;
	}
	return (count);
}
