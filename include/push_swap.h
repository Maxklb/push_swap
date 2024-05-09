/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:06:07 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/09 16:21:08 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{

}	t_stack;

// ### OPERATIONS ###



// ### INPUT CHECK ###

int	ft_is_digit(int c);
int	ft_is_sign(int c);
int	ft_nb_str_cmp(char *s1, char *s2);
int	ft_is_valid_input(char **args);

#endif