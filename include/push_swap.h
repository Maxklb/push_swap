/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:06:07 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/31 18:12:18 by makoch-l         ###   ########.fr       */
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
	int				position;
	int				trgt_pos;
	int				move_cost_a;
	int				move_cost_b;
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
int		nb_absolute(int nb);
void	free_stack(t_stack **stack);
void	exit_error(t_stack **stack_a, t_stack **stack_b);

// ### STACK UTILS ###

int		get_stack_size(t_stack *stack);
int		is_sorted(t_stack *stack);
int		find_highest_index(t_stack *stack);
int		lowest_i_value(t_stack **stack);
t_stack	*first_stack_element(t_stack *stack);
t_stack *create_node(int value);
t_stack	*create_stack(int ac, char **av);
void	add_node(t_stack **stack, t_stack *node);
void	set_index(t_stack *stack_a, int stack_size);

// ### POSITION ###

int		lowest_i_value(t_stack **stack);
void	position(t_stack **stack_a, t_stack **stack_b);

// ### SORTING ###

void	small_sorting(t_stack **stack);
void	sorting(t_stack **stack_a, t_stack **stack_b);

// ### MOVE CALCULATIONS ###

void	calculate_move_costs(t_stack **stack_a, t_stack **stack_b);
void	find_best_move(t_stack **stack_a, t_stack **stack_b);
void	move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b);

// ### INPUT CHECK ###

int		ft_is_digit(int c);
int		ft_is_sign(int c);
int		ft_nb_str_cmp(char *s1, char *s2);
int		ft_is_valid_input(char **args);

int		main(int ac, char **av);

#endif