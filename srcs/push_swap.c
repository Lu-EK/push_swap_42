/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:43:36 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/22 16:21:17 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

void	small_sort(t_node **node_a, t_node **node_b)
{
	if (((*node_a)->size) == 2)
	{
		if ((*node_a)->counter > (*node_a)->next->counter)
			swap(node_a);
	}
	if (((*node_a)->size) == 3)
		sort_3(node_a);
	else if (((*node_a)->size) == 4)
		sort_4(node_a, node_b);
	else if (((*node_a)->size) == 5)
		sort_5(node_a, node_b);
	return ;
}

void	sort(t_node **node_a, t_node **node_b)
{
	if ((*node_a)->size < 6 && is_sorted(*node_a) == 0)
		small_sort(node_a, node_b);
	else
		radix_sort(node_a, node_b);
	free_node(node_a);
	return ;
}

static char	**get_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	**dataset;

	i = 1;
	j = 0;
	if (argc == 1 || ft_strlen(argv[1]) == 0)
	{
		ft_printf("Error\n");
		exit(0);
	}
	dataset = malloc(sizeof(char *) * (argc + 1));
	while (i < argc)
	{
		dataset[j] = ft_strdup(argv[i]);
		i++;
		j++;
	}
	dataset[j] = NULL;
	return (dataset);
}

int	main(int argc, char **argv)
{
	char	**dataset;
	long	*list;
	t_node	*node_a;
	t_node	*node_b;
	int		nb_elements;

	node_b = NULL;
	if (argc == 2)
		dataset = ft_split(argv[1], ' ');
	else
		dataset = get_args(argc, argv);
	list = char_to_num(dataset);
	node_a = init_node(list[0]);
	if (has_valid_parameters(list, dataset, argc, node_a) == false)
	{
		ft_printf("Error\n");
		return (0);
	}
	nb_elements = nb_of_args(dataset);
	free_dataset(dataset, argc);
	fill_node(&node_a, list, nb_elements);
	index_stack(&node_a);
	sort(&node_a, &node_b);
	return (0);
}
