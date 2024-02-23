/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:59:37 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 17:46:23 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

t_node	*create_node(void)
{
	t_node	*stack;

	stack = malloc(sizeof(t_node));
	stack->next = NULL;
	return (stack);
}
