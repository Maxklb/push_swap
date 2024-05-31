/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:15:44 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/31 15:31:27 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->number;
	stack->number = stack->next->number;
	stack->next->number = tmp;
	tmp = stack->i;
	stack->i = stack->next->i;
	stack->next->i = tmp;
}

void	swap_a(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

void	swap_stack(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}
