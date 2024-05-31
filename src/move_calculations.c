/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_calculations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:18:15 by makoch-l          #+#    #+#             */
/*   Updated: 2024/05/31 18:07:37 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	calculate_move_costs(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp_a;
	t_stack *tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	size_a = get_stack_size(tmp_a);
	size_b = get_stack_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->move_cost_b = tmp_b->position;
		if (tmp_b->position > size_b / 2)
			tmp_b->move_cost_b = (size_b - tmp_b->position) * -1;
		tmp_b->move_cost_a = tmp_b->trgt_pos;
		if (tmp_b->trgt_pos > size_a / 2)
			tmp_b->move_cost_a = (size_a - tmp_b->trgt_pos) * -1;
			tmp_b = tmp_b->next;
	}
}

void	find_best_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		best_move;
	int		move_cost_a;
	int		move_cost_b;

	tmp = *stack_b;
	best_move = INT_MAX;
	while(tmp)
	{
		if (nb_absolute(tmp->move_cost_a) + nb_absolute(tmp->move_cost_b) 
		< nb_absolute(best_move))
		{
			best_move = nb_absolute(tmp->move_cost_a) + nb_absolute(tmp->move_cost_b);
			move_cost_a = tmp->move_cost_a;
			move_cost_b = tmp->move_cost_b;
		}
		tmp = tmp->next;
	}
	move(stack_a, stack_b, move_cost_a, move_cost_b);
}
