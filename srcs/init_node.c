/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:34:16 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/21 18:35:55 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

t_node	*init_node(int elem)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->elem = elem;
	node->counter = -1;
	return (node);
}

void	fill_node(t_node **node, long *nb, int nb_elem)
{
	int		i;
	t_node	*new;
	t_node	*current;

	current = (*node);
	i = 1;
	while (i < nb_elem)
	{
		new = init_node(nb[i]);
		new->counter = -1;
		new->next = NULL;
		if (*node == NULL)
			*node = new;
		else
		{
			while (current->next != NULL)
				(current) = (current)->next;
			current->next = new;
			new->next = NULL;
		}
		i++;
	}
	(*node)->size = i;
}

void	free_node(t_node **node)
{
	t_node	*start;
	t_node	*forward;

	start = *node;
	while (start)
	{
		forward = start->next;
		free(start);
		start = forward;
	}
	(*node) = NULL;
}

void	free_dataset(char **dataset, int argc)
{
	int	i;

	i = argc;
	i = 0;
	while (dataset[i])
	{
		free(dataset[i]);
		i++;
	}
	free(dataset);
}
