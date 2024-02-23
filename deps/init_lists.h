/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lists.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:38:11 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/21 18:35:41 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_LISTS_H
# define INIT_LISTS_H

t_node			*create_node(void);
t_node			*init_node(int elem);
void			fill_node(t_node **node, long *nb, int nb_elem);

#endif