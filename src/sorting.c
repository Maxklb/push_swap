/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:37:04 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:30:39 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push_a_to_b_except_three(t_stack **stack_a, t_stack	**stack_b)
{
	int		stack_size;
	int		number;
	int		i;

	number = 0;
	i = 0;
	stack_size = get_stack_size(*stack_a);
	while (stack_size > 6 && i < stack_size && number < stack_size / 2)
	{
		if ((*stack_a)->i <= stack_size / 2)
		{
			push_b(stack_a, stack_b);
			number++;
		}
		else
			rotate_a(stack_a);
		i++;
	}
	while (stack_size - number > 3)
	{
		push_b(stack_a, stack_b);
		number++;
	}
}

static void	shift_stack(t_stack **stack_a)
{
	int	stack_size;
	int	lowest_i;

	stack_size = get_stack_size(*stack_a);
	lowest_i = lowest_i_value(stack_a);
	if (lowest_i > stack_size / 2)
	{
		while (lowest_i < stack_size)
		{
			reverse_rotate_a(stack_a);
			lowest_i++;
		}
	}
	else
	{
		while (lowest_i > 0)
		{
			rotate_a(stack_a);
			lowest_i--;
		}
	}
}

void	sorting(t_stack **stack_a, t_stack **stack_b)
{
	push_a_to_b_except_three(stack_a, stack_b);
	small_sorting(stack_a);
	while (*stack_b)
	{
		position(stack_a, stack_b);
		calculate_move_costs(stack_a, stack_b);
		find_best_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		shift_stack(stack_a);
}
