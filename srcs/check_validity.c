/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:28:10 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/22 16:42:44 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

bool	ft_isnum(char *c)
{
	unsigned int	i;
	size_t			size;

	if (c == NULL)
		return (false);
	i = 0;
	size = ft_strlen(c);
	while (i < size)
	{
		if (c[i] == '-')
			i++;
		if ((c[i] < 48 || c[i] > 57))
			return (false);
		i++;
	}
	return (true);
}

bool	check_duplicate(long *list, int argc)
{
	long	i;
	long	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (list[i] == list[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	is_arg_a_number(char **number, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (ft_isnum(number[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

bool	is_size_sample_valid(long *list, int argc)
{
	long	i;

	i = 0;
	while (i < argc - 1)
	{
		if (list[i] > 2147483647 || list[i] < -2147483648)
			return (false);
		i++;
	}
	if (i < 1)
		return (false);
	return (true);
}

bool	has_valid_parameters(long *list, char **dataset, int argc, t_node *node)
{
	if (is_arg_a_number(dataset, argc) == false)
	{
		free_dataset(dataset, argc);
		free_node(&node);
		return (false);
	}
	else if (is_size_sample_valid(list, argc) == false)
	{
		free_dataset(dataset, argc);
		free_node(&node);
		return (false);
	}
	else if (check_duplicate(list, argc) == false)
	{
		free_dataset(dataset, argc);
		free_node(&node);
		return (false);
	}
	return (true);
}
