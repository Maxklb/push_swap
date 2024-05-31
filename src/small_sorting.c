/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:26:34 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/31 17:47:29 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_highest_index(t_stack *stack)
{
	int	i;

	i = stack->i;
	while (stack)
	{
		if (stack->i > i)
			i = stack->i;
		stack = stack->next;
	}
	return (i);
}

void	small_sorting(t_stack **stack)
{
	int	highest_index;

	highest_index = find_highest_index(*stack);
	if ((*stack)->i == highest_index)
		rotate_a(stack);
	else if ((*stack)->next->i == highest_index)
		reverse_rotate_a(stack);
	if ((*stack)->i > (*stack)->next->i)
		swap_a(stack);
}
