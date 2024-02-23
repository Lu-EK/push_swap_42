/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:50:07 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/21 18:34:23 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

int	nb_of_args(char **dataset)
{
	int	i;

	i = 0;
	while (dataset[i])
		i++;
	return (i);
}

char	**split_args(char *numb)
{
	char	**dataset;
	int		i;

	dataset = ft_split(numb, ' ');
	i = 0;
	return (dataset);
}

long	*char_to_num(char **dataset)
{
	int				i;
	int				size;
	static long		list[10];

	i = 0;
	size = nb_of_args(dataset);
	while (i < size)
	{
		list[i] = ft_atoi(dataset[i]);
		i++;
	}
	return (list);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	is_neg;
	long	res;

	if (!str)
		return (0);
	i = 0;
	is_neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_neg = -1;
		i++;
	}
	else if (str[i] == '+')
	{	
		is_neg = 1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * is_neg);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	dup = malloc((sizeof (char)) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
