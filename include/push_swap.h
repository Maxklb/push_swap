/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:06:07 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/17 15:17:53 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <stdlib.h>
# include <stdio.h>
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

void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_stack(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_stack(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_stack(t_stack **stack_a, t_stack **stack_b);

// ### UTILS ###

void	ft_putstr(char *str);

// ### STACK UTILS ###

int		get_stack_size(t_stack *stack);
int		is_sorted(t_stack *stack);
t_stack	*first_stack_element(t_stack *stack);

// ### ERROR ###



// ### INPUT CHECK ###

int		ft_is_digit(int c);
int		ft_is_sign(int c);
int		ft_nb_str_cmp(char *s1, char *s2);
int		ft_is_valid_input(char **args);


#endif