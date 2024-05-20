/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:51:15 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/20 18:56:57 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if(stack_size == 2 && !is_sorted(*stack_a))
		swap_a(stack_a);
	else if (stack_size == 3)
		small_sorting(stack_a);
	//else if (stack_size > 3 && !is_sorted(*stack_a))
	//{
	//	jsp frr
	//}
}