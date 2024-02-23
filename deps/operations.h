/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:46:54 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/27 17:53:56 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

void	push_a(t_node **node_a, t_node **node_b);
void	push_b(t_node **node_a, t_node **node_b);
void	rotate(t_node **node);
void	rotate_both(t_node **node_a, t_node **node_b);
void	reverse_rotate(t_node **node);
void	reverse_both(t_node **node_a, t_node **node_b);
void	swap(t_node **node);
void	swap_both(t_node **node_a, t_node **node_b);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);
int		ft_lstsize(t_node *lst);

#endif