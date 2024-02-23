/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:41:49 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 12:39:25 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

// ra + rb
void	rotate(t_node **node)
{
	t_node	*current_node;
	t_node	*first_node;
	t_node	*last_node;

	if (*node == NULL || (*node)->next == NULL)
		return ;
	current_node = *node;
	first_node = *node;
	while (current_node->next != NULL)
		current_node = current_node->next;
	last_node = current_node;
	last_node->next = first_node;
	*node = first_node->next;
	first_node->next = NULL;
	ft_printf("ra\n");
}

// rr
void	rotate_both(t_node **node_a, t_node **node_b)
{
	rotate(node_a);
	rotate(node_b);
	ft_printf("rr\n");
	return ;
}

//rra + rrb
void	reverse_rotate(t_node **node)
{
	t_node	*last_node;
	t_node	*current;
	t_node	*first_node;

	current = (*node);
	first_node = (*node);
	while (current->next != NULL)
		current = current->next;
	last_node = current;
	last_node->next = first_node;
	*node = last_node;
	current = last_node;
	while (current->next != last_node)
		current = current->next;
	current->next = NULL;
	ft_printf("rra\n");
	return ;
}

// rrr
void	reverse_both(t_node **node_a, t_node **node_b)
{
	reverse_rotate(node_a);
	reverse_rotate(node_b);
	ft_printf("rrr\n");
	return ;
}
