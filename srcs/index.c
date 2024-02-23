/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:52:22 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 17:27:17 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

t_node	*next_min(t_node **stack)
{
	t_node	*head;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->counter == -1) && (!has_min || head->elem < min->elem))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_node **stack)
{
	t_node	*head;
	int		counter;

	counter = 0;
	head = next_min(stack);
	while (head)
	{
		head->counter = counter++;
		head = next_min(stack);
	}
}
