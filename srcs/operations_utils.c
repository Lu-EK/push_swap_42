/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:47:46 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/22 15:15:04 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../deps/push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	temp = *lst;
	if (!lst || !new)
		return ;
	if (lst && *lst)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else if (lst)
		*lst = new;
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
