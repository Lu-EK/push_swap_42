/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   check_validity.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:29:13 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/04 16:40:49 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VALIDITY_H
# define CHECK_VALIDITY_H

bool		ft_isnum(char *c);
int			is_valid_argument(char *str);
bool		check_duplicate(long *list, int argc);
bool		is_size_sample_valid(long *list, int argc);
bool		is_arg_a_number(char **number, int argc);
bool		has_valid_parameters(long *list, char **dataset,
				int argc, t_node *node);

#endif
