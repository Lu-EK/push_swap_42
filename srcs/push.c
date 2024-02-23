/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:38:02 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 17:27:37 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

// PA
void	push_a(t_node **node_a, t_node **node_b)
{
	t_node	*lst;

	if (*node_b == NULL)
		return ;
	lst = *node_b;
	*node_b = lst->next;
	lst->next = NULL;
	ft_lstadd_front(node_a, lst);
	ft_printf("pa\n");
	return ;
}

// PB
void	push_b(t_node **node_a, t_node **node_b)
{
	t_node	*lst;

	if (*node_a == NULL)
		return ;
	lst = *node_a;
	*node_a = lst->next;
	lst->next = NULL;
	ft_lstadd_front(node_b, lst);
	ft_printf("pb\n");
	return ;
}
