/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:59:02 by lellong-          #+#    #+#             */
/*   Updated: 2023/05/27 17:53:33 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLIT_H
# define SPLIT_H

unsigned int	count_words(const char *str, char c);
void			ft_fill_string(char *dest, char *src, unsigned int n);
char			**ft_free(char **str, unsigned int limit);
char			**fill_words(const char *str, char **chaine,
					unsigned int nb_words, char c);
char			**ft_split(const char *s, char c);

#endif