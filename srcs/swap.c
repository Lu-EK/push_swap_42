/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:40:06 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 12:39:21 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

// SA + SB
void	swap(t_node **node)
{
	int	tmp;

	if ((*node) == NULL || (*node)->next == NULL)
		return ;
	tmp = (*node)->elem;
	(*node)->elem = (*node)->next->elem;
	(*node)->next->elem = tmp;
	tmp = (*node)->counter;
	(*node)->counter = (*node)->next->counter;
	(*node)->next->counter = tmp;
	ft_printf("sa\n");
}

// SS
void	swap_both(t_node **node_a, t_node **node_b)
{
	swap(node_a);
	swap(node_b);
	ft_printf("ss\n");
	return ;
}
