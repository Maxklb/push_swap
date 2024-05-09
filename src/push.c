/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:40:41 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/09 16:42:59 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push
{
	
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push(*stack_a, *stack_b);
	ft_putstr("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(*stack_b, *stack_a);
	ft_putstr("pb\n");
}