/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:36:07 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/27 17:48:28 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include "../deps/args_utils.h"
# include "../deps/init_lists.h"
# include "../libft/libft.h"
# include "../deps/split.h"
# include "../printf/ft_printf.h"
# include "../deps/check_validity.h"
# include "../deps/operations.h"
# include "../deps/sort_utils.h"
# include "../deps/big_sort.h"
# include "../deps/small_sort.h"
# include "../deps/index.h"

void	free_node(t_node **node);
void	free_dataset(char **dataset, int argc);

#endif