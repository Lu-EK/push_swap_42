/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:37:00 by lellong-          #+#    #+#             */
/*   Updated: 2023/06/21 18:34:39 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_UTILS_H
# define ARGS_UTILS_H

typedef struct s_node {
	int				elem;
	int				counter;
	int				size;
	struct s_node	*next;
}	t_node;

int					nb_of_args(char **dataset);
long				ft_atoi(const char *str);
long				*char_to_num(char **dataset);
char				**split_args(char *numb);
char				*ft_strdup(const char *s);

#endif
