/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:30 by makoch-l          #+#    #+#             */
/*   Updated: 2024/06/01 19:07:37 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	get_position(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

int	lowest_i_value(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_i;
	int		lowest_position;

	lowest_i = INT_MAX;
	get_position(stack);
	tmp = *stack;
	lowest_position = tmp->position;
	while (tmp)
	{
		if (tmp->i < lowest_i)
		{
			lowest_i = tmp->i;
			lowest_position = tmp->position;
		}
		tmp = tmp->next;
	}
	return (lowest_position);
}

static int	find_lowest_i_in_a(t_stack **a, int b_i, int trgt_i, int trgt_pos)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->i < trgt_i && tmp_a->i > b_i)
		{
			trgt_i = tmp_a->i;
			trgt_pos = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	if (trgt_i != INT_MAX)
		return (trgt_pos);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->i < trgt_i)
		{
			trgt_i = tmp_a->i;
			trgt_pos = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	return (trgt_pos);
}

void	position(t_stack **a, t_stack **b)
{
	t_stack	*tmp_b;
	int		trgt_pos;

	tmp_b = *b;
	get_position(a);
	get_position(b);
	trgt_pos = 0;
	while (tmp_b)
	{
		trgt_pos = find_lowest_i_in_a(a, tmp_b->i, INT_MAX, trgt_pos);
		tmp_b->trgt_pos = trgt_pos;
		tmp_b = tmp_b->next;
	}
}
