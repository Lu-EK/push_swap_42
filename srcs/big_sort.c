/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:31:16 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/21 16:53:22 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

void	radix_sort(t_node **node_a, t_node **node_b)
{
	int	i;
	int	j;
	int	nbr;
	int	list_size;
	int	size_max_bits;

	i = 0;
	j = 1;
	size_max_bits = max_bytes(*node_a);
	list_size = ft_lstsize(*node_a);
	while (i < size_max_bits && is_sorted(*node_a) == false)
	{
		j = 0;
		while (j++ < list_size)
		{
			nbr = (*node_a)->counter;
			if (((nbr >> i) & 1) == 0)
				push_b(node_a, node_b);
			else
				rotate(node_a);
		}
		while (*node_b)
			push_a(node_a, node_b);
		i++;
	}
}
