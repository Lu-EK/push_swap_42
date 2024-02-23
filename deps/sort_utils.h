/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:41:05 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/26 17:25:43 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_UTILS_H
# define SORT_UTILS_H

bool	is_sorted(t_node *node);
int		max_bytes(t_node *node);
int		find_smallest(t_node **node);

#endif