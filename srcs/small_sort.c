/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:31:09 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/27 17:51:30 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

static void	sort_3_2(t_node **node)
{
	if ((*node)->counter < (*node)->next->counter
		&& (*node)->next->counter > (*node)->next->next->counter
		&& (*node)->counter > (*node)->next->next->counter)
		reverse_rotate((node));
	else if ((*node)->counter > (*node)->next->counter && (*node)->next->counter
		< (*node)->next->next->counter
		&& (*node)->counter < (*node)->next->next->counter)
		swap(node);
	else if ((*node)->counter > (*node)->next->counter && (*node)->next->counter
		< (*node)->next->next->counter
		&& (*node)->counter > (*node)->next->next->counter)
		rotate(node);
}

void	sort_3(t_node **node)
{
	if ((*node)->counter > (*node)->next->counter
		&& (*node)->next->counter > (*node)->next->next->counter
		&& (*node)->counter > (*node)->next->next->counter)
	{
		rotate(node);
		swap(node);
	}
	else if ((*node)->counter < (*node)->next->counter && (*node)->next->counter
		> (*node)->next->next->counter && (*node)->counter
		< (*node)->next->next->counter)
	{
		swap(node);
		rotate(node);
	}
	else
		sort_3_2(node);
	return ;
}

void	sort_4(t_node **node_a, t_node **node_b)
{
	int	res;

	res = find_smallest(node_a);
	if (res == 1)
		push_b(node_a, node_b);
	if (res == 2)
	{
		swap(node_a);
		push_b(node_a, node_b);
	}
	else if (res == 3)
	{
		reverse_rotate(node_a);
		reverse_rotate(node_a);
		push_b(node_a, node_b);
	}
	else if (res == 4)
	{
		reverse_rotate(node_a);
		push_b(node_a, node_b);
	}
	if (is_sorted(*node_a) == false)
		sort_3(node_a);
	push_a(node_a, node_b);
	return ;
}

void	sort5_2(t_node **node_a, t_node **node_b, int res)
{
	if (res == 4)
	{
		reverse_rotate(node_a);
		reverse_rotate(node_a);
		push_b(node_a, node_b);
	}
	else if (res == 5)
	{
		reverse_rotate(node_a);
		push_b(node_a, node_b);
	}
	if (is_sorted(*node_a) == false)
		sort_4(node_a, node_b);
	return ;
}

void	sort_5(t_node **node_a, t_node **node_b)
{
	int	res;

	res = find_smallest(node_a);
	if (res == 1)
		push_b(node_a, node_b);
	if (res == 2)
	{
		swap(node_a);
		push_b(node_a, node_b);
	}
	else if (res == 3)
	{
		rotate(node_a);
		rotate(node_a);
		push_b(node_a, node_b);
	}
	sort5_2(node_a, node_b, res);
	push_a(node_a, node_b);
	return ;
}
