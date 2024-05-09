/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:06:07 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/09 18:55:29 by makoch-l         ###   ########.fr       */
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
	int				number;
	int				i;
	struct s_stack	*next;
}	t_stack;

// ### OPERATIONS ###

void	swap_a(t_stack *stack_a);
void	swap_b(t_stack *stack_b);
void	swap_stack(t_stack *stack_a, t_stack *stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);

// ### INPUT CHECK ###

int		ft_is_digit(int c);
int		ft_is_sign(int c);
int		ft_nb_str_cmp(char *s1, char *s2);
int		ft_is_valid_input(char **args);

int		main(int argc, char **argv);

#endif